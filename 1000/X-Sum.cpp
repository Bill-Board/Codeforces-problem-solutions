//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=205;
int n, m, sum, sum1;
int r[N][N],l[N][N],a[N][N];
void dfs_r(int indx,int indy){
    sum += a[indx][indy];
    int x = indx+1, y= indy+1;
    if(x<=n and y<=m)dfs_r(x,y);
    r[indx][indy] = sum;
}
void dfs_l(int indx,int indy){
    sum1 += a[indx][indy];
    int x = indx-1, y= indy+1;
    if(x>0 and y<=m)dfs_l(x,y);
    l[indx][indy] = sum1;
}



void solve()
{
    cin >> n>>m;
    for(int i =1; i<=n; i++){
        for(int j= 1; j<=m; j++){
            cin >> a[i][j];
            r[i][j]=l[i][j]=0;
        }
    }
    for(int i = 1; i<=n; i++){
        sum = 0;
        dfs_r(i,1);
    }
    for(int i = 2; i<=m; i++){
        sum = 0;
        dfs_r(1,i);
    }

    for(int i = n; i>0; i--){
        sum1 = 0;
        dfs_l(i,1);
    }
    for(int i = m; i>0 ; i--){
        sum1 = 0;
        dfs_l(n,i);
    }
    ll cr_h =0;
    for(int i =1; i<=n; i++){
        for(int j= 1; j<=m; j++){
            ll sum = l[i][j]+r[i][j]-a[i][j];
            cr_h = max(cr_h, sum );
        }
    }
    cout << cr_h << endl;

}



signed main()
{
    ll test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
