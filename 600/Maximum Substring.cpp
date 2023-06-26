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
    int n; string s;
    cin >> n >> s;
    ll one = 0 , z = 0;
    for(auto i: s)
        one += i=='1', z += i=='0';
    if(!one) one = z;
    if(!z) z = one;
    ll cr_h = one * z;

    for(int i = 0; i<n;){
        ll cnt = 0;
        while(i<n and s[i] == '0')
            cnt++, i++;
        cr_h = max(cr_h, cnt*cnt);
        cnt = 0;
        while(i<n and s[i] == '1')
            cnt++, i++;
        cr_h = max(cr_h, cnt*cnt);
    }
    cout << cr_h << '\n';
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
