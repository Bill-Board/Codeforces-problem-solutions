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
    int n; cin>> n;
    set<int>s;
    for(int i =0; i<n; i++){
        int x;cin>>x;
        s.insert(x);
    }
    if((n- s.size())%2==0)
        cout << s.size() << '\n';
    else
        cout << s.size() -1 << '\n';
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
