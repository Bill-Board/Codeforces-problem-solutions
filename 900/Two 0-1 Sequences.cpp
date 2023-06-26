//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

void solve(int tc)
{
    int n, m; cin >> n >> m;
    string a, b; cin >> a >> b;
    while(a.size() and b.size()>1 and a.back()==b.back()){
        a.pop_back();b.pop_back();
    }
    if(b.size()>1){
        cout << "NO\n";
        return;
    }
    for(auto i: a)
        if(i == b[0]){
            cout << "YES\n";
            return;
        }
    cout << "NO\n";
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
