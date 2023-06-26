//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

vector<int> a;
bool alabu(int bond)
{
    for(auto i: a){
        if(abs(i - bond)>1)return false;
        bond++;
    }
    return true;
}


void solve()
{
    int n, mn =INT_MAX;
    cin >> n;
    a.clear();a.resize(n);
    for(auto &i : a)
        cin >> i, mn = min(mn, i);
    for(int i =mn-1; i <= mn+1 ; i++)
    if(alabu(i)){
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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
