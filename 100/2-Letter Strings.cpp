//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

void solve()
{
    int n;cin >> n;
    map<string, int> mpp;
    map<char, int> pos1,pos2;
    vector<string> s(n);
    for(int i =0; i<n ; i++){
        cin >> s[i];
        pos1[s[i][0]]++;
        pos2[s[i][1]]++;
        mpp[s[i]]++;
    }
    ll cr_h =0; /// answer ta
    for(auto i: s){
        string p = i;
        mpp[i]--;
        pos1[p[0]]--;
        pos2[p[1]]--;
        ll ans = pos1[p[0]] + pos2[p[1]] - 2 * mpp[i];
        cr_h += ans;
    }
    cout << cr_h << endl;
}



signed main()
{
    ll test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
