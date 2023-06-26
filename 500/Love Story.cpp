//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N=1005;
ll mod= 1e9+7;
int n, m,a[N][N], visi[N][N];
int fx[4]= {1,-1,0,0};
int fy[4]= {0,0,1,-1};

int dfs(int indx, int indy){
    visi[indx][indy] = 1;
    int cr_h = a[indx][indy];
    for(int i = 0; i<4; i++){
        int x = fx[i] + indx, y = fy[i] + indy;
        if(0<=x and x<n and 0<=y and y<m and visi[x][y]==0 and a[x][y])
            cr_h += dfs(x,y);
    }
    return cr_h;
}


void solve(int tc)
{
    cin >> n >> m;
    for(int i = 0; i<n; i++)
        for(int j = 0; j<m; j++)
            cin >> a[i][j], visi[i][j] = 0;
    int cr_h = 0;
    for(int i = 0; i<n; i++)
        for(int j = 0; j<m; j++){
            if(a[i][j] and visi[i][j]==0)
                cr_h = max(cr_h, dfs(i,j));
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
