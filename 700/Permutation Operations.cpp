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
    vector<int> a(n),ans(n+1, 1);
    for(auto &i: a)
        cin >> i;
    set<int> s;
    for(int i = 1; i<=n; i++)
        s.insert(i);
    for(int i = 0; i<n-1; i++){
        if(a[i] < a[i+1]) continue;
        int val = a[i] - a[i+1];
        if(s.find(val) != s.end()){
            //cout << val << '\n';
            ans[val] = i+2;
            s.erase(val);
        }
        else{
            auto j = s.upper_bound(val);
            ans[*j] = i+2;
            s.erase(j);
        }
    }

    for(int i = 1; i<=n; i++)
        cout << ans[i] << ' '; cout << '\n';

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
