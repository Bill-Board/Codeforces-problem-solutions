//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

void solve()
{
    int n, L, a;
    cin >> n>> L >> a;
    int last = 0, answer = 0;
    for(int i = 0; i<n; i++){
        int t, l;
        cin >> t >> l;
        int dif = t - last;
        answer += (dif/a);
        last = t+l;
    }
    int dif = (L - last);
    answer += (dif/a);
    cout << answer << '\n';
}



signed main()
{
     int test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
