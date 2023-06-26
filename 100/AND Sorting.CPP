//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;


bool isPowerOfTwo (int x)
{
    /* First x in the below expression is for the case when x is 0 */
    return x && (!(x&(x-1)));
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i: a)
        cin >> i;
    vector<int> b = a, c;
    sort(b.begin(),b.end());
    for(int i = 0; i<n; i++)
        if(a[i] != b[i])
            c.push_back(a[i]);
    sort(c.begin(),c.end());
    int ans  = (1 << 28)  - 1;
    for(auto i: c)
        ans &= i;
    cout << ans << endl;

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
