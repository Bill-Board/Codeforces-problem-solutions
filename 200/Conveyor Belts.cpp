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
    int n, x1, x2, y1, y2;
    cin >>n >> x1 >> y1 >> x2 >> y2;
    x1 = min(x1, n - x1 + 1);
    y1 = min(x1, min(y1, n - y1 + 1));
    x2 = min(x2, n - x2 + 1);
    y2 = min(x2, min(y2, n - y2 + 1));
    cout << abs(y1 - y2) << '\n';
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
