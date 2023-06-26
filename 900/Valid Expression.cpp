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
    int n, x; cin >> n >> x;
    if(n+1 < abs(x)){
        cout << -1 << '\n';
        return;
    }
    int baki;
    if(x == 0){
        cout << '-';
        baki = n - 1;
    }
    else if(0 < x){
        for(int i = 0; i<x-1; i++)
            cout << '+';
        baki = n - x + 1;
    }
    else{
        x = abs(x);
        if(n < x+1){
            cout << -1 << '\n';
            return;
        }
        for(int i = 0; i<x+1; i++)
            cout << '-';
        baki = n - x - 1;
    }
    for(int i = 0; i<baki; i++)
        cout << '*';
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
