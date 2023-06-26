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
    ll sa = 1, ta = 1, ok = 0, lens = 1;
    for(int i = 0; i<n; i++){
        ll typ, k; string p;
        cin >> typ >> k >> p;
        if(typ  == 1){
            ll cnt = 0;
            for(auto j: p)
                cnt += j == 'a';
            lens += k *p.size();
            sa+= k * cnt;
        }
        else{
            ll cnt = 0;
            for(auto j: p)
                cnt += j == 'a',
                ok += j != 'a';
            ta += k * cnt;
        }

        //cout << lens << " sa " << sa << " ta " << ta << "\n";

        if(ok)
            cout << "YES\n";
        else if(lens != sa or ta <= sa)
            cout << "NO\n";
        else
            cout << "YES\n";
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
