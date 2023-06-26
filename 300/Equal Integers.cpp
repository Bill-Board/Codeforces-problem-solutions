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
    int x, y;
    cin >> x >> y;
    if(x <= y)
        cout << y - x << endl;
    else{
        if((x-y)%2 == 0)
            cout << (x-y)/2 << endl;
        else
            cout <<(x-y+1)/2  + 1<< endl;
    }
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
