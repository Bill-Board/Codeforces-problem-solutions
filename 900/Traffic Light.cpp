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
    string s; char c ;
    cin >> c >> s;
    if(c == 'g'){
        cout << 0 << '\n';
        return;
    }
    s+=s;
    vector<int>g;
    for(int i = 0; i<2*n; i++)
        if(s[i] == 'g')
            g.push_back(i);
    int cr_h = 0;
    for(int i = 0; i<n; i++)if(s[i] == c){
        int pos = upper_bound(g.begin(),g.end(),i) - g.begin();
        //cout << i <<  ' ' << g[pos] << '\n';
        cr_h = max(cr_h,  g[pos] - i);
    }
    cout << cr_h <<  '\n';

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
