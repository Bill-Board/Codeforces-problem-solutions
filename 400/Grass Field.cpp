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
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    a+= (b>0)+(c>0)+(d>0);
    if(a==4)cout << 2 << '\n';
    else if(a>0)cout << 1 << '\n';
    else
        cout << a <<'\n';
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
