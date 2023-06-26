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
    int p; string s;
    cin >> s >> p;
    int n = s.size(), sum = 0,cnt[27] ={};
    for(auto i: s)
        cnt[i-'a']++, sum += (i - 'a' + 1);
    for(int i =25; ~i; i--){
        while(cnt[i]>0 and sum > p ){
            cnt[i]--;
            sum -= (i + 1);
        }
    }
    for(auto i: s){
        if(cnt[i-'a']>0)
            cout << i, cnt[i-'a']--;
    }
    cout << '\n';
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
