//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=104;
char a[N][N];
int visi[N][N], n , m, imx, imn,jmn,jmx;
int fx[4]= {1,-1,0,0};
int fy[4]= {0,0,1,-1};
void dfs(int indx, int indy){
    imx= max(imx, indx);
    imn= min(imn, indx);
    jmx= max(jmx, indy);
    jmn= min(jmn, indy);
    //cout << indx << " "<< indy << endl;
    visi[indx][indy]=1;
    for(int i =0; i<4 ; i++){
        int x = indx+fx[i], y= indy+fy[i];
        if(x>0 and y>0 and x<=n and y<=m and visi[x][y]==0 and a[x][y]=='1'){
            dfs(x, y);
        }
    }
}

bool alabu(int x1, int y1, int x2, int y2){
    //cout << x1 << " "<< y1 << " "<< x2 << " "<< y2 << endl;
    for(int i = x1; i<=x2; i++){
        for(int j =y1; j<=y2; j++)
            if(a[i][j]=='0'){
                return true;
            }

    }
    return false;
}



void solve()
{
    cin >> n >>m;
    for(int i = 1; i<=n; i++){
        for(int j =1; j<=m ; j++)
            cin >> a[i][j],visi[i][j]=0;
    }
    for(int i = 1; i<=n; i++){
        for(int j =1; j<=m ; j++){
            imx=0;imn=n+2;jmx=0,jmn=m+2;
            if(visi[i][j] or a[i][j]=='0')continue;
            dfs(i, j);
            if(alabu(imn, jmn, imx, jmx))
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;

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
