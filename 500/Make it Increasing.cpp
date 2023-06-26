//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll n;
vector<ll> a;
ll alabu(ll mid){
    vector<ll>b(n, 0);
    ///b[mid] = a[mid];
    ll val = 0;
    for(int i = mid-1; i>=0; i--){
        ll kot = (abs(b[i+1]) + a[i])/a[i];
        val +=kot;
        b[i] =- kot * a[i];
    }

    for(int i =mid+1 ; i<n ; i++){
        ll kot = (b[i-1] + a[i])/a[i];
        val +=kot;
        b[i] = kot * a[i];
    }

//    cout << "val  " << val << endl;
//    for(auto i: b)
//        cout << i << " ";
//    cout << endl;
    return val;
}


void solve()
{
    cin >> n;
    a.clear();a.resize(n);
    for(auto &i : a)
        cin >> i;
    ll cr_h = LLONG_MAX;
    for(int i = 0; i<n ; i++)
        cr_h = min(cr_h, alabu(i));
    cout << cr_h << endl;
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
