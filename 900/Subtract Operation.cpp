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
    int n, k;
    cin >> n >> k;
    vector <int> a(n);
    set <int > s;
    for(auto &i : a)
        cin >> i, s.insert(i);
    for(auto i: a)
        if(s.find(i+k)!=s.end()){
            cout << "YES" << endl;
            return;
        }
    cout << "NO" << endl;

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
