//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

void solve()
{
    ll n, a, b, sum =0;
    cin >> n >> a >> b;
    vector<ll> arr(n);
    for(int i =0; i<n ; i++)
        cin >> arr[i], sum += arr[i];
    ll cr_h = b * sum;
    //cout << cr_h << endl;
    for(int i = 0; i<n ; i++){
        sum -= arr[i];
        ll baki =b * (sum -  arr[i] * (n - i -1));
        ll kot = a * arr[i];
        cr_h = min(cr_h, baki + kot + b * arr[i]);
    }
    cout << cr_h << endl;
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
