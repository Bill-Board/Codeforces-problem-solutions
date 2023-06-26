//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

int alabu(int n, int a)
{
    int div = n / a;
    return div + (n%a);
}

void solve()
{
    int l, r , a;
    cin >> l >> r >> a;
    int kot = r/a;
    kot = max(l, (kot*a)-1);
    cout << max(alabu(r, a), alabu(kot, a)) << endl;

}



signed main()
{
    ll test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
