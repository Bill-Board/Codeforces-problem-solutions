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
    int n, sum = 0;cin >> n;
    vector<int> a(n+1);
    map<int, int> mpp;
    for(int i =1 ; i<=n; i++)
        cin >> a[i], sum +=a[i], mpp[sum]=i;
    sum =0;
    int cr_h = 0;
    for(int i =n ; i > 0; i--){
        sum += a[i];
        if(mpp.count(sum)){
            if(mpp[sum] < i)
                cr_h = max(n-i+1 + mpp[sum], cr_h);
        }
    }
    cout << cr_h << endl;

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
