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

int alabu(int n, int g, int l){
    if(n == l) return 1;
    cout << n << '\n';
    for(int i = sqrt(n); l<=i; i--){
        if(n % i == 0 and (i % g == 0 or g % i == 0)){
            return n/i + alabu(i, g, l);
        }
    }
}

void solve(int tc)
{
    int n, m; cin >> n >> m;
    if(n > m) swap(n, m);
    int g = __gcd(n, m);
    ll c = alabu(n, g, 1) , d = alabu(m, g, g) ;
    cout << c << '\n';
    cout << d << '\n';
    cout << '\n';

}



signed main()
{
    int test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
