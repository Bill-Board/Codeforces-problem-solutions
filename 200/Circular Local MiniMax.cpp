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
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(auto &i: a)
        cin >> i;
    sort(a.begin(), a.end());
    for(int i = 0; i<n ; i+=2)
        b[i] = a.back(), a.pop_back();
    for(int i = 1; i<n; i+=2)
        b[i] = a.back(), a.pop_back();
    int cnt = 0;
    for(int i = 0 ; i<n; i++){
        int samne = (i+1)%n, pichone = (i - 1 + n) %n;
        if(b[pichone] < b[i] and b[i] > b[(i+1)%n])
            cnt++;
        if(b[pichone] > b[i] and b[i] < b[(i+1)%n])
            cnt++;
    }
    if(cnt != n){
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    for(auto i: b)
        cout << i << " ";
    cout << endl;

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
