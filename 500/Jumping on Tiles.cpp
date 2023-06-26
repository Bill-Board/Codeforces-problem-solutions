//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<char,int>;

const int N=200005;
ll mod= 1e9+7;

bool ok(pii &a, pii &b){
    if(a.first == b.first)
        return a.second < b.second;
    else return a.first > b.first;
}

void solve(int tc)
{
    string s; cin >> s;
    int n = s.size();

    char l = s.front(), r = s.back();
    vector<pii> a,b;
    for(int i = 0; i<n; i++){
        if(l <= r and l <= s[i] and s[i] <=r)
            a.push_back({s[i],i+1});

        else if(l > r and r <= s[i] and s[i] <= l)
            b.push_back({s[i],i+1});
    }
    if(l <= r){
        cout << abs(r - l) << " " << a.size() << '\n';
        sort(a.begin(),a.end());
        for(auto i: a)
            cout << i.second << " "; cout << '\n';
    }
    else{
        cout << abs(r - l) << " " << b.size() << '\n';
        sort(b.begin(),b.end(),ok);
        //reverse(b.begin(),b.end());
        for(auto i: b)
            cout << i.second << " "; cout << '\n';
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
