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
    ll n;
    cin >> n;
    string s;
    if(n<=2){
        cout << n << endl;return;
    }
    int kot = n/3;
    if(n%3==1)s+='1';
    for(int i =0 ;i < kot ; i++)
        s+= "21";
    if(n%3==2)s+='2';
    cout << s <<endl;
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
