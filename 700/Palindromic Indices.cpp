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
    int n;string s;
    cin >> n >> s;
    int st= (n-1)/2, cnt = 0, i = st;
    while(i >=0 and s[st]==s[i]) i--, cnt++;
    cnt *= 2;
    if(n&1)cnt --;
    cout << cnt << endl;
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
