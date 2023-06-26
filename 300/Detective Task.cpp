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
    string s;
    cin >>  s;
    int n = s.size();
    vector<int> l(n+2, 0), r(n+2, 0);

    for(int i = 1; i<=n; i++){
        l[i] = l[i-1];
        l[i] += s[i-1]=='0';
    }
    for(int i = n; i>0; i--){
        r[i-1] = r[i];
        r[i-1] += s[i-1]=='1';
    }
    int cr_h =0;
    for(int i = 0; i<n; i++)
        cr_h += (r[i+1]==0 and l[i]==0);
    cout << cr_h << endl;
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
