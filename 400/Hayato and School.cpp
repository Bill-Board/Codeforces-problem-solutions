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
    vector<int> o, e;
    for(int i = 0; i<n; i++){
        int x; cin >> x;
        if(x&1)
            o.push_back(i+1);
        else
            e.push_back(i+1);
    }
    if(e.size() == n){
        cout << "NO\n";
        return;
    }
    if(n==3 and o.size() == 2){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    if(o.size()>2){
        for(int i = 0; i<3; i++)
            cout << o[i] << " ";
        cout << '\n';
        return;
    }
    cout << e[0] << " " << e[1] << ' ' << o[0] << '\n';

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
