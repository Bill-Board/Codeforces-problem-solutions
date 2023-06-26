//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=505;
ll mod= 1e9+7;
///
int fx[6] = {-1,1,-1,1,0,0};
int fy[6] = {1,-1,0,0,1,1};
int n, k, r, c, nn;

bool ok(int x, int y){
    return 0<=x and x<=n and 0<=y and y<=n;
}
char a[N][N];
void dfs(int indx, int indy){
    a[indx][indy] = 'X';
    for(int i =0; i<6; i++){
        int x = indx + fx[i], y = indy + fy[i];
        if(ok(x, y) and a[x][y]=='.')
            dfs(x,y);
    }
}

void solve(int tc)
{
    cin >> n >> k >> r >> c;
    fx[2] = fy[4] = k;
    fx[3] = fy[5] = -k;
    for(int i = 0; i<=n; i++)
        for(int j=0; j<=n; j++)
            a[i][j]='.';
    dfs(r,c);
    for(int i = 1; i<=n; i++){
        for(int j=1; j<=n; j++)
            cout << a[i][j] ;
            cout << '\n';
    }

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
