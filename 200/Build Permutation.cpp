//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;
int sq(int n){
    int k = sqrt(n);
    if(k*k < n) k++;
    if(k*k < n) k++;
    return k*k;
}


void solve(int tc)
{
    int n; cin >> n;
    vector<int> a;
    for(int i = n-1; ~i;){
        int k = sq(i)-i, p = k - 1;
        for(int j = k; j <= i; j++)
            a.push_back(j);
        i = k-1;
    }
    reverse(a.begin(),a.end());
    for(auto i: a)
        cout << i << " " ;cout << '\n';
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
