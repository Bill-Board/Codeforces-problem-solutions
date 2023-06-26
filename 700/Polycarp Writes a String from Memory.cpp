//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

void solve()
{
    string s;cin >> s;
    int n = s.size(), cr_h = 0;
    set<char> p;
    for(int i = 0; i<n; ){
        p.insert(s[i]);
        if(p.size()>3)
            cr_h++, p.clear();
        else
            i++;
    }
    cr_h += (s.size()>0);
    cout << cr_h << '\n';
}



signed main()
{
     int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
