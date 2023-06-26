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
    int n; cin >> n;
    vector< int > a(n), b(n);
    for(auto &i: a)
        cin >> i;
    for(auto &i: b)
        cin >> i;
    set<int> s,x;
    for(int i = 0; i<n ; i++){
        if(b[i] > a[i]){
            cout << "NO" << '\n';
            return;
        }
        if(b[i]==0)x.insert(a[i]);
        else s.insert(a[i]-b[i]);
    }
    if(s.size()>1){
        cout << "NO\n";return;}
    if(s.empty() or  (s.size() == 1 and x.empty())){
        cout << "YES\n";return;}
    int k = *s.begin(), kk = *prev(x.end());
    if(k >= kk)
        cout << "YES\n";
    else
        cout << "NO\n";

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
