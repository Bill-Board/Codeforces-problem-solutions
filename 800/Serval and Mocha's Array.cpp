//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N=200005;
ll mod= 1e9+7;


void solve(int tc)
{
    int n, g = 0;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
        for(int j = i-1; 0 <= j; j--){
            if(__gcd(a[i], a[j]) < 3)
                g = 1;
        }
    }
    if(g)
        cout << "Yes\n";
    else
        cout << "No\n";
}



signed main()
{
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
