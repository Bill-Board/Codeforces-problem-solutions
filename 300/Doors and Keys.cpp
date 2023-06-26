//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU

#include<bits/stdc++.h>
using namespace std;

typedef long long v99;
#define vll    vector<v99>
#define dua ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define i_love_u_huu dua long long tokp;cin >> tokp;while(tokp--)
#define ses   "\n"
#define whp   " "
#define sob(z)  (z).begin(), (z).end()
#define ff first
#define ss second
#define pii pair<v99, v99>
const v99 N=200005;


/// code is here->----------------------------
string s;

bool alabu(char a, char b)
{
    v99 posu=-1, posl=-1;
    for(v99 i=0; i<s.size() ; i++)
        if( s[i] == a )
        {
            posu=i;
            break;
        }
    for(v99 i=0; i<s.size() ; i++)
        if( s[i] == b )
        {
            posl=i;
            break;
        }
    return posu<posl;
}

void solve()
{
    cin >> s;
    if(alabu('R','r') or alabu('G','g') or alabu('B','b'))
        cout << "NO" <<ses;
    else cout << "YES" <<ses;
}



signed main()
{
    //dua
    //freopen("data.out","w",stdout);
    //while(1)
    i_love_u_huu
    solve();
    return 0;
}



///  Alhamdulillah...
