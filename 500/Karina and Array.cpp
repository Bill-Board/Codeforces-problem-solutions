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
    int n, ok = 0; cin >> n;
    vector<ll> neg, pos;
    for(int i = 0; i<n; i++){
        int x; cin >> x;
        if(0 < x)pos.push_back(x);
        else if(x < 0)neg.push_back(x);
        else ok = 1;
    }
    sort(pos.begin(),pos.end(), greater<>());
    sort(neg.begin(),neg.end());
    if(1<pos.size() and 1<neg.size())
        cout << max(pos[0]*pos[1],neg[0]*neg[1]) << '\n';
    else if(1<pos.size()){
        cout << pos[0]*pos[1] << '\n';
    }
    else if(1<neg.size()){
        cout << neg[0]*neg[1] << '\n';
    }
    else if(ok)
        cout << 0 << '\n';
    else
        cout << neg[0]*pos[0] << '\n';
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
