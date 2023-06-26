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
    int n;
    cin >> n;
    vector <int> a(n);
    for(auto &i : a)
        cin >> i;
    sort(a.begin(), a.end(), greater<>());
    if(a.size()==1){
        if(a.back()==1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        return;
    }
    if(abs(a[0]-a[1])>1)
        cout << "NO" << endl;
    else
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
