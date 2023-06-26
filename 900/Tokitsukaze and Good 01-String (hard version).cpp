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
    int cnt = 0, ans = 1;
    bool ono = false, zz = false, dif= false;
    for(int i = 0; i<n ; i+=2){

        if(s[i] != s[i+1])
              cnt ++;
        else if(s[i] == '1'){
            if(zz == true)
                ans ++;
            ono =true;
            zz = false;
        }
        else{
            if(ono == true)
                ans ++;
            ono =false;
            zz = true;
        }
    }
    cout << cnt << " " << max(1, ans ) << endl;
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
