//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=510;
ll mod= 1e9+7;
int n, m;
char a[N][N];
bool ok(int x, int y){
    return x>0 and x<=n and y>0 and y<=m;
}
void solve(int tc)
{
    cin >> n >> m;
    int one = 0;
    for(int i = 1; i<=n; i++)
        for(int j = 1; j<=m; j++)
            cin >> a[i][j], one+=a[i][j]=='1';
    bool ek = false, dui= false;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            int cnt1 = 0;
            if(ok(i, j+1) and a[i][j]=='0' and a[i][j+1]=='0')
                cnt1++;
            if(ok(i+1, j) and a[i][j]=='0' and a[i+1][j]=='0')
                cnt1++;
            if(ok(i+1, j+1) and a[i][j]=='0' and a[i+1][j+1]=='0')
                cnt1++;
            if(ok(i+1, j-1) and a[i][j]=='0' and a[i+1][j-1]=='0')
                cnt1++;
            if(cnt1)ek =true;
            if(a[i][j]=='0')dui = true;

//            if(a[i][j]=='1'){
//                /// 1
//                int cnt = 0;
//                if(ok(i, j-1) and a[i][j-1]=='0')
//                    cnt++;
//                if(ok(i-1, j-1) and a[i-1][j-1]=='0')
//                    cnt++;
//                if(ok(i-1, j) and a[i-1][j]=='0')
//                    cnt++;
//                /// 2
//                int cnt1 = 0;
//                if(ok(i, j+1) and a[i][j+1]=='0')
//                    cnt1++;
//                if(ok(i-1, j+1) and a[i-1][j+1]=='0')
//                    cnt1++;
//                if(ok(i-1, j) and a[i-1][j]=='0')
//                    cnt1++;
//                /// 3
//                int cnt2 = 0;
//                if(ok(i, j+1) and a[i][j+1]=='0')
//                    cnt2++;
//                if(ok(i+1, j+1) and a[i+1][j+1]=='0')
//                    cnt2++;
//                if(ok(i+1, j) and a[i+1][j]=='0')
//                    cnt2++;
//                /// 4
//                int cnt3 = 0;
//                if(ok(i, j-1) and a[i][j-1]=='0')
//                    cnt3++;
//                if(ok(i+1, j-1) and a[i+1][j-1]=='0')
//                    cnt3++;
//                if(ok(i+1, j) and a[i+1][j]=='0')
//                    cnt3++;
//                if(cnt1>1 or cnt2>1 or cnt3>1 or cnt>1)
//                    ek = true;
//                if(cnt1 or cnt2 or cnt3 or cnt)
//                    dui = true;
//            }
        }
    }
    if(ek )cout << one << '\n';
    else if(dui) cout << max(0,one-1) << '\n';
    else cout << max(0,one-2)<< '\n';
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
