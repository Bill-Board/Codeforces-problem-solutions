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
    string s;cin >> s;
    int sum = 0;
    for(int i = 0; i<3; i++)
        sum += s[i]-'0';
    for(int i = 3; i<6; i++)
        sum -= s[i]-'0';
    if(sum)
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
