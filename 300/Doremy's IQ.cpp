//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
const int N=200005;
ll mod= 1e9+7;

void solve()
{
    int n, q;

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

/// solution 1

/**void solve()
{
    int n, q, last_iq = 0;
    cin >> n >> q;
    vector<int> a(n);
    for(auto &i: a)
        cin >> i;
    string s(n, '0');
    for(int i = n-1; ~i; i--){
        if(a[i]<=last_iq)
            s[i]='1';
        else if(last_iq < q)
            s[i] = '1', last_iq++;
    }
    cout << s << '\n';
}*/

///  Alhamdulillah...
