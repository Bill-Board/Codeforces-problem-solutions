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
    vector<int> a;
    map<int, char> mpp;
    for(int i = 0; i<n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    string s; cin >> s;

    for(int i =0; i<n; i++){
        if(mpp.count(a[i])==0){
            mpp[a[i]] = s[i];
            continue;
        }

        if(mpp[a[i]] != s[i]){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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
