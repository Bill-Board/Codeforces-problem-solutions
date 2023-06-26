//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<ll,ll>;

const int N=200005;
ll mod= 1e9+7;

bool poss(string s){
    string b;
    for(auto i: s){
        if(b.empty())
            b += i;
        else if(b.back() == '(' and i == ')')
            b.pop_back();
        else
            b += i;
    }
    return b.empty();
}

void solve(int tc)
{
    int n; cin >> n;
    string s; cin >> s;
    vector<pair<char, int>>p;
    vector<int> ans(n, 0);
    int op = 0, c = 1, kot = 0;
    for(int i = 0; i<n; i++){
        op += (s[i]=='(');
        if(p.empty())
            p.push_back({s[i],i});
        else if(p.back().first == '(' and s[i] == ')'){
            ans[i] = c;
            ans[p.back().second] = c;
            p.pop_back();
            kot = 1;
        }
        else
            p.push_back({s[i], i});
    }
    if(op != n - op){
        cout << -1 << '\n';
        return;
    }
    vector<int> a;
    while(p.size()){
        if(kot)c = 2;
        ans[p.back().second] = c;
        a.push_back(p.back().second);
        p.pop_back();
    }
    reverse(s.begin(),s.end());
    if(a.size() and a.back() == 0 and a.front() == n-1 and poss(s)){
        cout << 1 << '\n';
        for(int i = 1;i<=n; i++)
            cout << 1 << ' ';
        cout << '\n';
        return;
    }
    cout << c << '\n';
    for(auto i: ans)
        cout << i << ' ';
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
