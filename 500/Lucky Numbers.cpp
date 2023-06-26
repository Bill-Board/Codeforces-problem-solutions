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
    int l, r, ans = -1, val; cin >> l >> r;
    for(int i = l; i <= min(l+100,r); i++){
        string s = to_string(i);
        int kot1 = *max_element(s.begin(),s.end()) - '0';
        int kot2 = *min_element(s.begin(),s.end()) - '0';
        if(ans < kot1-kot2)
            ans = kot1-kot2, val = i;
    }
    cout << val << '\n';
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
