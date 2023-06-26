//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

void solve()
{
    int n, m;
    cin >> n>> m;
    int s[n+3][m+3];
    for(int i = 0; i<n; i++){
        for(int j =0; j<m; j++){
            if(i == 0){
                if(j&1)
                    s[i][j*2]=1,s[i][2*j +1]=0;
                else
                    s[i][j*2]=0,s[i][2*j +1]=1;
                continue;
            }
            if(i&1)
                s[i][j] = (s[i-1][j] ^ 1);
            else
                s[i][j] = s[i-1][j];
        }
    }
    for(int i = 0;i<n; i++)
        for(int j = 0; j<m; j++)
        cout << s[i][j] << " \n"[j==m-1];

}



signed main()
{
     int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
