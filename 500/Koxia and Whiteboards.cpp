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
    int n, m; cin >> n >> m;
    priority_queue <int, vector<int>, greater<int> > p;
    vector<int> a(n), b(m);
    for(auto &i: a)
        cin >> i, p.push(i);
    for(auto &i: b)
        cin >> i;

    for(auto i: b){
        p.pop(); p.push(i);
    }
    ll sum = 0;
    while(p.size())
        sum += p.top(), p.pop();
    cout << sum << '\n';
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
