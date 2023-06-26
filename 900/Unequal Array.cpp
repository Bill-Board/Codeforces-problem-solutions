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
    int n;
    cin >> n;
    vector<int> a(n), p;
    for(auto &i : a)
        cin >> i;
    int first  = 1;
    while(first < n and a[first]!=a[first-1])first++;
    if(first == n){
        cout << 0 << endl;
        return;
    }
    int last = n-2;
    while(last >= 0 and a[last] != a[last + 1])last--;
    if(last < first)
        cout << 0 << endl;
    else
        cout << max(1,last - first ) << endl;
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
