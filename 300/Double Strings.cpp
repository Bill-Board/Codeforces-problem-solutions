//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

void solve()
{
    int n; cin >> n;
    string s[n];
    set<string> m;
    for(int i = 0;i<n; i++)
        cin >> s[i], m.insert(s[i]);
    for(int i = 0; i<n; i++){
        string ek = s[i], dui ="";
        bool ok =false;
        for(int j = s[i].size()-1; ~j; j--){
            if(m.find(ek)!= m.end() and m.find(dui)!= m.end() ){
                ok=true;break;
            }
            ek.pop_back();
            dui = s[i][j] + dui;
        }
        cout << ok;
    }cout << '\n';
}



signed main()
{
     int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
