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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    if(a == 0){
        if(b+c+d)
            cout << "1\n";
        else
            cout << "0\n";
        return;
    }

    ll alice = a, bob = a, shw = a;

    ll kot = min(b, c);
    shw += 2*kot;

    b -= kot, c -= kot;
    kot = b + c + d;
    shw += min(alice + 1, kot);

    cout << shw << '\n';

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
