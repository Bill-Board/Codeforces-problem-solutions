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
    int n, m; cin >> n >> m;
    string s, t; cin >> s >> t;
    reverse(t.begin(), t.end());
    s += t;
    int cnt = 0;
    for(int i = 0; i < n+m-1; i++)
        cnt += s[i] == s[i+1];
    if(1 < cnt)
        cout << "NO\n";
    else
        cout << "YES\n";
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
