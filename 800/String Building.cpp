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
    int a=0, b =0;
    if(s.back() == 'a')s+='b';
    else s+='a';
    for(auto i: s){
        if(i == 'a'){
            if(b == 1){
                cout << "NO" << endl;
                return;
            }
            a++;
            b=0;
        }
        else{
            if(a == 1){
                cout << "NO" << endl;
                return;
            }
            b++;
            a=0;
        }
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
