//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1000014;
int ds[N];

void pre_cal()
{
    int n = 1000005;
    for(int i = 2; i<n ; i++){
        for(int j = 2*i; j<n; j += i)
            ds[j] += i;
    }
}


void solve()
{
    int n;
    cin >> n;
    int ans = ds[n] + (n != 1);
    if(ans > n)
        cout << "abundant" << endl;
    else if(ans < n)
        cout << "deficient" << endl;
    else
        cout << "perfect" << endl;
}



signed main()
{
    pre_cal();
    ll test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
