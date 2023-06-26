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
    string s;
    cin >> s;
    vector <bool> a(26, false);
    int cr_h = 0;
    for(auto i: s){
        if(a[i-'a']){
            cr_h += 2;
            for(int j = 0 ; j<26; j ++)
                a[j] = false;
        }
        else
            a[i-'a'] = true;
    }
    cout << s.size() - cr_h << endl;
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
