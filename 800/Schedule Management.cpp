//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;


void solve()
{
    int n, m; cin >> n >> m;
    vector<int> a(m), cnt (n,0);
    for(auto &i: a)
        cin >> i, cnt[i-1]++;
    sort(cnt.begin(),cnt.end(),greater<>());
    int ek = 0, dui = 0;
    while(cnt.back() == 0)cnt.pop_back(), ek++;

    //for(auto i: cnt)cout << i << " " ; cout << '\n';
    //reverse(a.begin(),a.end());
    int time = 0;
    for(time = 1; ; ++time){
        for(auto &i: cnt)
            i--;

        if(time & 1){
            int kot = dui;
            for(int i = cnt.size() -1; i>=0 and kot; i--){
                if(cnt[i]<= kot)
                    kot -= cnt[i], cnt[i] = 0;
                else
                    cnt[i] -= kot, kot = 0;
            }
        }
        else{
            int kot = ek;
            for(int i = cnt.size() -1; i>=0 and kot; i--){
                if(cnt[i]<= kot)
                    kot -= cnt[i], cnt[i] = 0;
                else
                    cnt[i] -= kot, kot = 0;
            }
        }
        while(cnt.size() and cnt.back()==0){
            if(time&1)
                dui++;
            else
                ek++;
            cnt.pop_back();
        }
        if(cnt.empty())break;
    }
    cout << time << '\n';

}



signed main()
{
     int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
