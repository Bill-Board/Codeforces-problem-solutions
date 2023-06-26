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
    string s; cin >> s;
    int ans = 0, n = s.size();
    if(n==1 and s[0]=='^'){
        cout << 1 << '\n';
        return;
    }
    for(int i = 0; i<n;){
        while(i < n and s[i]=='^') i++;
        int cnt = 0, j = i;
        while(i < n and s[i]=='_')
            cnt++, i++;
        ans += (cnt - 1);
        if(j == 0) ans++;
        if(i==n) ans ++;
    }
    cout << ans << '\n';
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
