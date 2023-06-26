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
    if(n == 1){
        cout << 1 << '\n';
        return;
    }
    if(n&1){
        cout << -1 << '\n';
        return;
    }
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        a[i] = i+1;
        if(i&1) swap(a[i], a[i-1]);
    }
    for(int i = 0; i<n; i++)
        cout << a[i] << " \n"[i==n-1];
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
