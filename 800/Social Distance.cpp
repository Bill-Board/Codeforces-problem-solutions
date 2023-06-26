//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

void solve()
{
    int n, m; cin >> n >> m;
    vector <int> a(n);
    for(auto &i : a)
        cin >> i;
    sort(a.begin(),a.end(),greater<>());
    if(2*a.front() > m-1){
        cout << "NO" << endl;
        return;
    }
    int sum = 0;
    for(auto i: a){
        if(sum + i + 1 > m){
            cout << "NO" << endl;
            return;
        }
        sum += i+1;
    }
    if( m - sum + a.back() < a.front())
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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
