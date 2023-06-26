//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N=1015;
ll mod= 1e9+7;


void solve(int tc)
{
    int n, m; cin >> n >> m;
    vector<vector<int> > a(n+2, vector<int> (m+2, -1));
    if(n == 4){
        for(int j = 1, c = 1; j<=m; j++)
            for(int i =1; i<=n; i++)
                a[i][j] = c++;
        for(int i = 1; i<=n; i++)
            for(int j = 1; j<=m; j++)
                cout << a[i][j] << " \n"[j==m];
        return;
    }
    for(int i = 1, c = 1; i<=n; i++)
        for(int j =1; j<=m; j++)
            a[i][j] = c++;
    for(int i = 1; i<=n; i+=2)
        for(int j = 1; j<=m; j++)
        cout << a[i][j] << " \n"[j==m];
    for(int i = 2; i<=n; i+=2)
        for(int j = 1; j<=m; j++)
        cout << a[i][j] << " \n"[j==m];
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
