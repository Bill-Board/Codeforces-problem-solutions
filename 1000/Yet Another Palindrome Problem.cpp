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
    int n; cin >> n;
    vector<ll> a(n);
    for(auto &i: a)
        cin >> i;
    if(n == 1){
        cout << 0 << '\n';
        return;
    }
    ll sum = 0;
    int l = n/2 - 1, r = l+1;
    if(n&1)
        r = l+2;
    for(int i = l, j= r; i>=0; i--, j++){
        a[i] += sum;
        if(a[i]>a[j]){
            cout << -1 << '\n';
            return;
        }
        sum += a[j] - a[i];
    }
    cout << sum << '\n';
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
