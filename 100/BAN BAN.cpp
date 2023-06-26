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
    int n; cin >> n;
    vector<pii> vp;
    if(n & 1){
        vp.push_back({1, 3*n});
        n--;
    }
    for(int i = 2, j = 3*n; i < j; i+=3, j-=3)
        vp.push_back({i,j});
    cout << vp.size() << '\n';
    for(auto i: vp)
        cout << i.first << ' ' << i.second << '\n';
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
