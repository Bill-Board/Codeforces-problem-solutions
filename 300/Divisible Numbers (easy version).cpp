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

template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b); }

void solve(int tc)
{
    ll a, b, c, d; cin >> a >> b >> c >> d;
    vector<int> p, q;
    for(int i = a+1; i<=c; i++){
        ll kot = a * b, val = i;
        while(gcd(kot, val) != 1){
            ll g = gcd(kot, val);
            kot /= g;
            val /= g;
        }
        if(kot == 1){
            cout << i << " " << d << '\n';
            return;
        }
        for(int j = kot; j<=d; j+=kot)
            if(b<j and j<=d){
                cout << i << " " << j << '\n';
                return;
            }
    }
    cout << "-1 -1\n";



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
