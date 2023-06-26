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

bool alabu(int l, vector<int> & a){
    int ek = a.front() + l, last = a.back() - l, m = ek;
    for(auto i: a)
        if(l < abs(i- ek) and l < abs(i - last))
            m = max(m, i);
    m -= l;
    int cnt = 0;
    for(auto i: a)
        if(l >= abs(i- ek) or l >= abs(i - last) or l >= abs(i - m))
            cnt++;
    return cnt == a.size();
}

void solve(int tc)
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i: a)
        cin >> i;
    sort(a.begin(),a.end());
    int l = 0, r = a.back(), ans = 0;
    while(l <= r){
        int m = l + (r - l)/2;
        if(alabu(m, a))
            r = m - 1, ans = m;
        else
            l = m + 1;
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
