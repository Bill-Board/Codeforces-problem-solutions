//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N=200005;
ll mod= 1e9+7;


void solve(int tc)
{
    int n, k; cin >> n >> k;
    vector<string> s(n);
    for(auto &i: s)
        cin >> i;
    set<int>p;
    for(int j = 0; j<k; j++){
        for(int i = 0; i<n; i++)
            if(s[0][j] != s[i][j])
                p.insert(i);
    }
    cout << n - p.size() << '\n';
}



signed main()
{
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
