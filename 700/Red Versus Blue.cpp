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
    int n, r, b;
    cin >> n >> r >> b;
    int v = r / (b+1), rem = r % (b+1), len = b+1;
    string ans, red (v,'R');
    for(int i =1; i<=len; i++){
        ans += red;
        if(rem > 0)ans+='R', rem--;
        if(i != len)ans += 'B';
    }
    cout << ans  << endl;
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
