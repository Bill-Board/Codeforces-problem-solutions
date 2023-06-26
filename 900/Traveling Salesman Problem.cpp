//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

void solve(int tc)
{
    int n; cin >> n;
    int xp = 0, xn = 0, yp = 0, yn = 0;
    for(int i= 0; i<n; i++){
        int x, y;
        cin >> x >> y;
        if(x<0)xn = min(x, xn);
        else xp = max(xp, x);
        if(y<0)yn = min(y, yn);
        else yp = max(yp, y);
    }
    //cout << xn << " " <<xp << " " << yn << " "<< yp<<'\n';
    cout << 2*abs(xp-xn) + 2*abs(yp - yn) << '\n';
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
