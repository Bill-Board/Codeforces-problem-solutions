//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
int n;
int modu(int val, int m){
    val%=m;
    return (val+m)%m;
}


void solve()
{
    cin >> n;
    vector<int> a(n+2), ans(n+2);
    for(int i = 0; i<n; i++){
        int x; cin >> x;
        a[x]=i;
    }
    int sum = 0;
    for(int i=n; i>0; i--){
        int ind= a[i]+1;
        ans[i] = ind==i ? 0 : ind;
//        cout << "ind "<< ind <<endl;
//        for(int j = 1 ; j<=n ;j++)
//               cout << a[j] << " \n"[j==n];
        for(int j = 1 ; j<=i ;j++)
            a[j] = modu(a[j] - ind, i);
//        for(int j = 1 ; j<=n ;j++)
//               cout << a[j] << " \n"[j==n];
//               cout << endl;

    }
    for(int i =1; i<=n ; i++)
        cout << ans[i]<< " \n"[i==n];

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
