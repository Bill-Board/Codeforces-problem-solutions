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
int n, m;
map<pair<int, int>, int> mpp;
bool cmp(pair<vector<int>, int> a,pair<vector<int>, int> b){
    int ok = 0;
    vector<int> p = a.first, q = b.first;
    for(int i = 0; i<m ; i++, ok++){
        int kot = q[p[i]];
        if(kot != ok+1) break;
    }
    int ok1 = 0;
    for(int i = 0; i<m ; i++, ok1++){
        int kot = p[q[i]];
        if(kot != ok1+1) break;
    }
    int ok2 = 0;
    for(int i = 0; i<m ; i++, ok2++){
        int kot = p[p[i]];
        if(kot != ok2+1) break;
    }
    int ok3 = 0;
    for(int i = 0; i<m ; i++, ok3++){
        int kot = q[q[i]];
        if(kot != ok3+1) break;
    }
    mpp[{a.second,b.second}] = max({ok, ok1, ok2, ok3});
    cout << "index " << a.second << " " << b.second << '\n';
    cout << ok << " " << ok1 << "\n\n";
    return ok2 >= ok3 or ok >= ok1;
}

void solve(int tc)
{
    cin >> n >> m;
    vector< pair<vector<int>, int> > a;
    for(int i = 0; i<n; i++){
        vector<int> p(m);
        for(auto &j: p)
            cin >> j;
        a.push_back({p,i});
    }
    sort(a.begin(), a.end(), cmp);

    for(auto i: a){
        cout << i.second << '\n';
        for(auto j: i.first)
            cout << j << ' ';
        cout << "\n\n";
    }
    for(auto i: mpp){
        cout << i.first.first << " " << i.first.second << ' ' << i.second << '\n';
    }

}



signed main()
{
    int test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
