//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

void solve()
{
    int n; cin >> n;
    string s[n];
    for(int i = 0;i<n; i++)
        cin >> s[i];
    int k = n/2, cr_h = 0;
    for(int i =0; i<k; i++){
        for(int j = 0;j<k; j++){
            int x2 = i, y2 = n - j -1;
            int x3 = n - i - 1, y3 = j;
            int x4 = x3, y4 = n - y3 - 1;
            int cnt = 0;
            cnt += s[i][j]=='1';
            cnt += s[x2][y2]=='1';
            cnt += s[x3][y3]=='1';
            cnt += s[x4][y4]=='1';
            cr_h += min(cnt, 4-cnt);
        }
    }

    if(n&1){
        for(int j = 0, i = n/2; j<i; j++){
            int x2 = i, y2 = n - j -1;
            int x3 = j, y3 = i;
            int x4 = x3, y4 = n - y3 - 1;
            int cnt = 0;
            cnt += s[i][j]=='1';
            cnt += s[x2][y2]=='1';
            cnt += s[x3][y3]=='1';
            cnt += s[x4][y4]=='1';
            cr_h += min(cnt, 4-cnt);
        }
    }
    cout << cr_h << '\n';

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
