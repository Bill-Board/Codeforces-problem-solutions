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


bool alabu(ll n, ll x){
    for(ll i = 2; i*i <=n; i++){
        if(n%i == 0){
            if(i == x) return true;
            if(n/i == x) return true;
        }
    }
    return false;
}

void solve(int tc)
{
    ll n, x; cin >> n >> x;

    vector<ll> a(n+1);
    a[1] = x; a[n] = 1;
    if(n == x){
        for(int i = 2; i<n ; i++)
            a[i] = i;
        for(int i = 1; i<=n; i++)
            cout << a[i] << " ";
        cout << '\n';
        return;
    }

    if(!alabu(n, x)){
        cout << "-1\n";
        return;
    }
    for(int i = 2; i<n; i++)
        a[i] = i;
    a[x] = n;

    int m = x;
    for(int i = x; i<n; i+=x)
        if(n % i == 0){
            swap(a[x], a[i]);
            if(a[x]%x or a[i]%i)
                swap(a[x], a[i]);
            else
                x = i;
        }


    for(int i = 1; i<=n; i++)
        cout << a[i] << " ";
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
