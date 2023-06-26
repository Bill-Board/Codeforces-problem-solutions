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
    string s, p;
    char c;
    cin >> s >> c;
    int n = s.size();
    for(int i =0; i<s.size() ; i++){
        if(s[i]==c){
            if((n-i-1)%2 ==0  and i%2==0){
                cout << "YES" << endl;
                return;
            }
        }
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
