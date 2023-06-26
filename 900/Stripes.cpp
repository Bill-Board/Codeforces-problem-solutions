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
    int n = 8;
    char a[10][10];

    for(int i = 0; i<n; i++)
        for(int j = 0; j<n; j++)
            cin >> a[i][j];

    for(int i = 0; i<n; i++){
        int kot = 0;
        for(int j = 0; j<n; j++)
            kot += a[i][j]=='R';
        if(kot == n){
            cout << "R" << '\n';
            return;
        }
    }
    for(int j = 0; j<n; j++){
        int kot = 0;
        for(int i = 0; i<n; i++)
            kot += a[i][j]=='B';
        if(kot == n){
            cout << "B" << '\n';
            return;
        }
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
