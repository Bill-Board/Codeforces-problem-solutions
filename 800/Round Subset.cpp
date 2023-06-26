//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=205;

int koita(ll n, ll val)
{
    int cnt = 0;
    while( n % val == 0)
    {
        n /= val;
        cnt++;
    }
    return cnt;
}
int p[N], w[N], dp[];
///          W
int alabu(int k, int n)
{
    if(n==0 or k==0)return 0;

}



void solve()
{
    ll n , five = 0, dui = 0;
    cin >> n;
    for( int i = 0; i < n; i++)
    {
        ll x; cin >> x;
        five += koita( x, 5ll);
        dui += koita( x, 2ll);
    }
    cout << min( five, dui ) << endl;
}



signed main()
{

    ll test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
