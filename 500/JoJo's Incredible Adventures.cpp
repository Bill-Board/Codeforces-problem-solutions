//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N=200005;
ll mod= 1e9+7;


void solve(int tc)
{
    string s, p; cin >> s;
    while(s.size() and s.back()=='1')
        p+=s.back(),s.pop_back();
    s = p + s;
    ll ans = 0, n = s.size();
    for(int i = 0; i<n;i++){
        ll cnt = 0, j = i;
        while(i < n and s[i]=='1')
            cnt++, i++;
        if(cnt&1){
            cnt = (cnt + 1)/2;
            ans =max(ans, cnt*cnt);
        }
        else{
            cnt/=2;
            ans = max(ans, cnt * (cnt + 1));
        }
        if(j == 0 and i == n)
            ans = max(ans, (ll) n*n);
    }
    cout << ans << '\n';
}



signed main()
{
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
