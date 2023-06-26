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
    vector<int> a(n+1),o(n+2, 0), z(n+2, 0);
    for(int i = 1; i<=n; i++){
        int x; cin >> x;
        a[i] = x;
        if(x)
            o[i]++;
        else
            z[i]++;
        o[i] += o[i-1];
    }

    for(int i = n; i>0; i--)
        z[i] += z[i+1];
    int cr_h = min(z[1], o[n]);


//    for(int i = 1; i<=n; i++)
//        cout << z[i] << " " << o[i] << '\n';

    for(int i = 1; i<=n; i++){
        int val = max(z[i+1] , o[i]);
        //cout << z[i+1] - o[i] << '\n';
        cr_h = min(cr_h, val);
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
