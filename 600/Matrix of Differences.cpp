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
    int a[n+2][n+2];
    bool ok = true;

    for(int i = 1, val = 1, sum = n*n -1; i<=n; i++){
        for(int j = 1; j<=n; j++, sum--){
            if(ok) /// plus
                ok = false, a[i][j] = val, val += sum;
            else
                ok = true, a[i][j] = val, val -= sum;
        }
        i++;
        if(i>n)break;
        for(int j = n; j>0; j--, sum--){
            if(ok) /// plus
                ok = false, a[i][j] = val, val += sum;
            else
                ok = true, a[i][j] = val, val -= sum;
        }
    }

    for(int i = 1; i<=n; i++)
        for(int j = 1; j<=n; j++)
            cout << a[i][j] << " \n"[j==n];
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
