//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<ll,ll>;

const int N=200005;
ll mod= 1e9+7;
ll ask(ll a, ll b){
    cout << "? " << a << " " << b << '\n';
    cout.flush();
    cin >> a;
    return a;
}


void solve(int tc)
{
    ll l =3, r = 1e18, m =0;
    vector<pii> a;
    for(int i = 0; i<25 and l<r; i++){
        ll mid = (l + r)/2;
        ll kot = ask(1ll, l);

        if(kot != -1){
            l = max(l, kot+1);
        }
        else{
            ll kot1 = ask(1ll, mid);
            if(kot1 == -1)
                r = mid;
            else
                l = max(l, mid);
        }
    }
    cout <<"! " << l << '\n';
    cout.flush();
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
