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
    string s;
    cin >> n>> s >> k;
    map<char, int> mpp;
    for(int i = 0; i<k; i++){
        char c; cin >> c;
        mpp[c]++;
    }
    vector<int>a(n,0);
    for(int i = 0; i<n; i++)
        a[i] = mpp[s[i]];
    int last = 0, cr_h = 0;
    for(int i = 0; i<n ;i++)
        if(a[i] == 1)
            cr_h = max(cr_h, i - last), last = i;
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
