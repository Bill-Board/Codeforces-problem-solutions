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
    int n;cin >> n;
    vector<int> a(n);
    for(auto &i : a)cin >> i;
    int k = 0 , kot_j = 0;
    for(int i =0; i<n ; i+= 2)
        kot_j += (a[i] % 2==0), k++;
    if(kot_j != k and kot_j != 0){
        cout << "NO" << endl;
        return;
    }
    k = 0 , kot_j = 0;
    for(int i = 1; i<n ; i+= 2)
        kot_j += (a[i] % 2==0), k++;
    if(kot_j != k and kot_j != 0){
        cout << "NO" << endl;
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
