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
    int n;
    string s;
    cin >> n >> s;
    s +='W';
    int b=0, r =0;
    for(auto i: s){
        if(i=='W'){
            if(min(r,b) == 0 and max(r,b)!= 0){
                cout << "NO" <<endl;
                return;
            }
            b=0;r=0;
        }
        b += i=='B';
        r += i=='R';
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
