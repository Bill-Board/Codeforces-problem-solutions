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

int p[]={1, 10, 100, 1000, 10000, 100000, 1000000, 10000000};

void solve(int tc)
{
    ll a, b, c, k; cin>> a >> b >> c >> k;
    for(int i = p[a-1]; i<p[a]; i++){
        ll lft = max(p[b-1], p[c-1] - i);
        ll rth = min(p[b] -1, p[c] - 1 - i);
        if(lft > rth) continue;
        ll ekhn = rth - lft + 1;
        if(k <= ekhn){
            cout << i << " + " << lft + k - 1 << " = " << i + lft + k - 1 << '\n';
            return;
        }
        k -= ekhn;
    }
    cout << -1 << '\n';

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
