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
    if(n & 1){
        for(int i = 0; i<n; i++)
            cout << 1 << " ";
        cout << '\n';
        return;
    }
    if(n == 2){
        cout << "2 6\n";
        return;
    }
    cout << "13 2 8 1 ";
    for(int i = 0; i< n-4; i++)
        cout << 6 << ' ';
    cout << '\n';
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
