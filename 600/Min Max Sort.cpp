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
    vector<int> a(n), pos(n+1);
    for(int i = 0; i<n ; i++){
        cin >> a[i];
        pos[a[i]] = i + 1;
    }
    int cnt = 0, l = n+1, r = -1;
    int start = (n + 1)/2, edd = (n + 2) / 2;
    bool ok = true;
    for(int i = start, j = edd; j<=n; j++, i--){
        if(pos[i] <= pos[j] and pos[i] < l and r < pos[j] and ok){
            l = pos[i]; r = pos[j];
        }
        else cnt ++, ok = false;
    }
    cout << cnt << '\n';
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
