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
    int n, m, x, y, d;
    cin >> n >> m >> x >> y>> d;
    int cr_h = INT_MAX;
    if(y+d < m and 1<x-d)
        cr_h = min(cr_h, n+m-2);
    if(x+d < n and 1<y-d)
        cr_h = min(cr_h, n+m-2);
    if(cr_h == INT_MAX)
        cr_h = -1;
    cout << cr_h << '\n';


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
