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
    string s,p;
    cin >> s;
    for(auto i: s){
        if(p.empty())p+=i;
        else if(p.back()=='A' and i == 'B')p.pop_back();
        else p+=i;

    }
    if(s.back()=='A'){
        cout << "NO"<<endl;
        return;
    }
    for(auto i: p)if(i!='A'){
        cout << "NO"<<endl;
        return;
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
