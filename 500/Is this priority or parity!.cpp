//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

string alabu(ll n){
    if(n&1)
        return "ODD";
    else
        return "EVEN";
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    if(k == 1){
        cout << alabu(n) << endl;
        return;
    }
    if(k == 2){
        cout << alabu(1ll) << endl;
        return;
    }
    cout << "EVEN" << endl;
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
