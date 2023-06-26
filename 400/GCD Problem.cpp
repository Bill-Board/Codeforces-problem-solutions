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
    cin >> n;
    if( n & 1 ){
        int val = n/2;
        if(val % 2 == 0)
            cout << val + 1<< " " << val - 1<< " " << 1 << endl;
        else
            cout << val + 2<< " " << val - 2<< " " << 1 << endl;
    }

    else
        cout << n/2 << " " << n/2 - 1<< " " << 1 << endl;

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
