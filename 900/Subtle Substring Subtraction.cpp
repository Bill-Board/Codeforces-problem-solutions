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
    int cr_h =0;
    for(auto i: s)
        cr_h += i - 'a' + 1;
    if(s.size() % 2==0){
        cout << "Alice " << cr_h << endl;
        return;
    }
    if(s.size() == 1){
        cout << "Bob " << cr_h << endl;
        return;
    }
    int kot = min(s[0]-'a'+1, s.back()-'a'+1);
    cout << "Alice "<< cr_h- kot - kot  << endl;
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
