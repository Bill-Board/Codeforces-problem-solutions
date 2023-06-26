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
    string s;
    cin >> s;
    map<char, char > mpp;
    for(int i = 0; i<s.size(); i++){
        if(mpp.count(s[i])){
            if(mpp[s[i]] != s[i-1]){
                cout << "NO" << endl;
                return;
            }
        }
        else if(i > 0)
            mpp[s[i]]=s[i-1];
    }
    reverse(s.begin(),s.end());
    mpp.clear();
    for(int i = 0; i<s.size(); i++){
        if(mpp.count(s[i])){
            if(mpp[s[i]] != s[i-1]){
                cout << "NO" << endl;
                return;
            }
        }
        else if(i > 0)
            mpp[s[i]]=s[i-1];
    }
    cout << "YES" << endl;
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
