//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

void solve(int tc)
{
    int n; string s, t;
    cin >> n >> s >> t;

    sort(s.begin(), s.end());
    sort(t.begin(), t.end(), greater<>());

    int cnt = 0;
    for(int i = 0; i<n; i++)
        cnt+= ( s[i] != t[i]);
    cout << cnt << '\n';

}



signed main()
{
    freopen("hamming.in", "r", stdin);
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
