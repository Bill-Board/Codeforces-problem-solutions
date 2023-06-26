//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

void solve()
{
    int n, k; cin >> n >> k;
    vector<int> tom[k+6];
    for(int i = 1; i<=n; i++){
        int x; cin >> x;
        tom[x%k].push_back(x);
    }
    for(int i = 0; i<k ; i++){
        sort(tom[i].begin(),tom[i].end());
    }
    ll cr_h = 0;
    for(int i = k/2 ; i>=0; i--){
        int j = k - i;
        int ek = i%k, dui = j%k;
        //cout << "ek || dui  " << ek << " " << dui << '\n';

        if(ek == dui){
            while(tom[ek].size() > 1){
                int kot = tom[ek].back();
                tom[ek].pop_back();
                kot += tom[ek].back();
                tom[ek].pop_back();
                kot/=k;
                cr_h+= kot;
            }
        }
        else{
            if(min(tom[ek].size(),tom[dui].size())  < 1)
                continue;
            int sz = min(tom[ek].size(),tom[dui].size());
            while(sz--){
                int kot = (tom[ek].back() + tom[dui].back())/k;
                cr_h += kot;
                tom[ek].pop_back(), tom[dui].pop_back();
            }
        }
    }
    //cout << cr_h << endl;



    int start  = k;
    for(int w = 0 ; w<k/2; w++){
        for(int i = start/2 ; i>=0; i--){
            int j = start - i;
            int ek = i%k, dui = j%k;
            //cout << "ek || dui  " << ek << " " << dui << '\n';

            if(ek == dui){
                while(tom[ek].size() > 1){
                    int kot = tom[ek].back();
                    tom[ek].pop_back();
                    kot += tom[ek].back();
                    tom[ek].pop_back();
                    kot/=k;
                    cr_h+= kot;
                }
            }
            else{
                if(min(tom[ek].size(),tom[dui].size())  < 1)
                    continue;
                int sz = min(tom[ek].size(),tom[dui].size());
                while(sz--){
                    int kot = (tom[ek].back() + tom[dui].back())/k;
                    cr_h += kot;
                    tom[ek].pop_back(), tom[dui].pop_back();
                }
            }
        }
        start++;
    }
    vector<int> q;
    for(int i = 0; i<k ; i++){
        for(auto j: tom[i])
            q.push_back(j);
    }
    sort(q.begin(),q.end());
    for(int i = 0; i<q.size(); i+=2)
        cr_h += (q[i]+q[i+1])/k;

    cout << cr_h << '\n';
}



signed main()
{
    ll test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
