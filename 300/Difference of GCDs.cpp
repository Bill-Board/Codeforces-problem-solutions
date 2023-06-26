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
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> ans;
    for(int i = 1; i<=n; i++){
        int k = r/i;
        if(k*i<l){
            cout << "NO\n";
            return;
        }
        ans.push_back(k*i);
    }
    cout << "YES\n";
    for(auto i: ans)
        cout << i << " ";cout << '\n';
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
