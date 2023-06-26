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
    string s, p;cin >> s;
    for(int i = n-1; i>=0; ){
        if(s[i]=='0'){
            int kot = (s[i-1]-'0')+ 10 *(s[i-2]-'0');
            p+= char('a'+kot-1);
            i-=3;
        }
        else
            p+= char(s[i]+48), i--;
    }
    reverse(p.begin(),p.end());
    cout << p << '\n';
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
