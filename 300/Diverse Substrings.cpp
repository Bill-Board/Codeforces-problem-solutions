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
int n; string s;
map<char, int>mpp;
bool alabu(){
    for(auto i: mpp)
        if(mpp.size()<i.second)
            return false;
    return true;
}

void solve(int tc)
{
    cin >> n >> s;
    ll cr_h = 0;
    for(int i = 0; i<n; i++){
        mpp.clear();
        for(int j = i; j<n and j - i<200; j++){
            mpp[s[j]]++;
            if(alabu())cr_h++;
        }
    }
    cout << cr_h << '\n';
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
