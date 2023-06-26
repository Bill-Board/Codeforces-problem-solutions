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
    int n , q; cin >> n >> q;
    vector<ll> a(n+1, 0 ), m (n+1, 0);
    for(int i =1; i<=n; i++){
        cin >> a[i];
        m[i] = max(m[i-1], a[i]);
        a[i] += a[i-1];
    }
    for(int i =0; i<q; i++){
        int x; cin >> x;
        int kot = upper_bound(m.begin(), m.end(), x)- m.begin();
        cout << a[kot-1] << ' ';
    }
    cout << '\n';
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
