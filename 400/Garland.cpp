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
    map<char, int> mpp;
    int kot = 0;
    for(int i = 0; i<4; i++){
        char c; cin >> c;
        mpp[c]++;
        kot = max(kot, mpp[c]);
    }
    if(mpp.size() == 1){
        cout << -1 << '\n';
        return ;
    }

    if(mpp.size() == 2){
        if(kot == 2)
            cout << 4 << '\n';
        else
            cout << 6 << '\n';
    }
    else
        cout << 4 << '\n';
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
