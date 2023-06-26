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
    int n, e = 0, o = 0; cin >> n;
    vector<ll> a(n);
    set<int> s;
    for(auto &i: a){
        cin >> i;
        s.insert(i);
        if(i&1)
            o++;
        else
            e++;
    }

    if((e>1 and o>1) or s.size()!=n){
        cout << "NO\n"; return;
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
