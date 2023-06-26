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
    int n; cin >> n;
    vector<ll> a(n+1), b(n+1);
    for(int i = 1; i<=n; i++)
        cin >> a[i], b[i] = a[i];


    sort(b.begin(),b.end());


    for(int i = 1; i<=n; i++)
        a[i] += a[i-1], b[i] += b[i-1];

    int q; cin >> q;

    for(int i = 0; i<q; i++){
        int t, l , r; cin >> t >> l >> r;
        if(t == 1)
            cout << a[r] -a[l-1] << '\n';
        else
            cout << b[r] -b[l-1] << '\n';
    }


}



signed main()
{
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
