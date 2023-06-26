//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;
vector<int> a;
int n;

bool alabu(int val){
    //cout << val << '\n';
    int cnt = 0;
    for(auto i: a){
        if(val == i){cnt++;continue;}
        int rag = val - (val%10);
        int kot = i - (i % 10);
        rag -= kot; rag/=10;
        //cout << "rag " << rag << '\n';
        if(rag % 2 == 0){
            if(i%10 == 2 and (val%10==4 or val%10==8 or val%10 == 2))
                cnt++;
            else if(i%10 == 4 and (val%10==2 or val%10==8 or val%10 == 4))
                cnt++;
            else if(i%10 == 8 and (val%10==4 or val%10==2 or val%10 == 8))
                cnt++;
            else if(i%10 == 6 and val%10 == 6)cnt++;
        }
        else if(rag & 1){
            if(i%10 == 6 and (val%10 == 2 or val%10 == 4 or val%10 == 8))
                cnt++;
            else if(val%10 == 6 and (i%10 == 2 or i%10 == 4 or i%10 == 8))
                cnt++;
        }
    }
    //cout << cnt << '\n';
    return n == cnt;
}

void solve()
{
    cin >> n;
    a.clear();a.resize(n);
    for(auto &i: a){
        cin >> i;
        i += ( i % 10);
    }
    sort(a.begin(),a.end());

//    for(auto i: a)
//        cout << i << " ";cout << '\n';

    int val = a.back();
    for(int i = 0; i<10; i++)
        val += (val % 10);

    if(alabu(val)){
        cout << "Yes\n";
        return;
    }

    cout << "No\n";

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
