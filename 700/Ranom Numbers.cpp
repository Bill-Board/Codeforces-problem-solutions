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

int alabu(string s){
    int paw[]={1,10,100,1000,10000};
    int ans = 0, m = 0;
    for(int i = s.size()-1; 0<=i; i--){
        int idx = s[i] - 'A';
        m = max(m, idx);
        if(m > idx)
            ans -= paw[idx];
        else
            ans += paw[idx];
    }
    return ans;
}


int inc_alabu(char x, char y, string s){
    for(auto &i: s)
        if(i == x){
            i = y;
            break;
        }
    return alabu(s);
}
int dec_alabu(char x, char y, string s){
    for(int i = s.size()-1; 0<=i; i--)
        if(s[i] == y){
            s[i] = x;
            break;
        }
    return alabu(s);
}
void solve(int tc)
{
    string s; cin >> s;
    int n = s.size();

    int ans = alabu(s);
    for(char x = 'A'; x < 'E'; x++)
        for(char y = x+1; y<='E'; y++)
            ans = max({ans, inc_alabu(x, y, s), dec_alabu(x, y, s)});
    cout << ans << '\n';
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
