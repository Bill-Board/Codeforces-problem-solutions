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
    int a, b, c; cin >> a >> b >> c;
    int la = a - 1;
    int lb = 0;
    if(b < c)
        lb = c - b + c - 1;
    else
        lb = b - 1;
    int ans ;
    if(la < lb)
        ans = 1;
    else if(la > lb)
        ans =2;
    else
        ans =3;
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
