//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

struct akib{
    int a, b, c;
    string s;
};

bool okay(akib &p, akib & q)
{
    if(p.a != q.a) return p.a > q.a;
    if(p.b != q.b)return p.b > q.b;
    if(p.c != q.c) return p.c > q.c;
}

void solve()
{
    int n;
    cin >> n;
    vector<akib> p;

    for(int i =0 ; i<n; i++){
        int q,w,e;string r;
        cin >> q >> w>> e;
        getchar();
        getline(cin, r);
        p.push_back({q,w,e,r});

    }
    sort(p.begin(),p.end(), okay);
    cout << p.front().s << endl;
}



signed main()
{
    ll test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
