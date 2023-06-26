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
map<char,char>rrr;
char root(char n ){
    while(rrr[n]!=n) {
        rrr[n] = rrr[rrr[n]];
        n = rrr[n];
    }
    return n;
}

bool dsu(char x,char y)
{
    char xr=root(x),yr=root(y);
    if(xr == yr)return false;
    rrr[yr]=rrr[xr];
    return true;
}

void solve(int tc)
{
    int n; string s;
    cin >> n >> s;
    map<char, char> vis;
    map<char, int> us;
    rrr.clear();
    for(char i = 'a'; i<='z'; i++)
        rrr[i]=i;
    for(auto i: s){
        if(vis.count(i))continue;
        for(char c = 'a'; c<='z'; c++){
            if(us.count(c))continue;
            if(dsu(i, c)) {
                vis[i]=c;us[c]++;
                break;
            }
        }
    }
    char c;
    for(char i = 'a'; i<= 'z'; i++)
        if(us[i]==0)c=i;

    for(auto i: s){
        if(vis.count(i)==0)
            vis[i] = c;
        cout << vis[i];
    }
    cout << '\n';
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
