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
    int a[n+1];
    for(int i = 1; i<=n; i++){
        int x; cin >> x;
        a[x] = i;
    }
    if(a[2]< a[1] and a[1]<a[n])
        cout << a[1] << ' ' << a[n] << '\n';
    else if(a[n]< a[1] and a[1]<a[2])
        cout << a[1] << ' ' << a[n] << '\n';
    else if(a[1]<a[2] and a[2]<a[n])
        cout << a[2] << ' ' << a[n] << '\n';
    else if(a[n]<a[2] and a[2]<a[1])
        cout << a[n] << ' ' << a[2] << '\n';
    else
        cout << "1 1\n";
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
