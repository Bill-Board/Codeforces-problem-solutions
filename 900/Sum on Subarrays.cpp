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
    int n, k; cin >> n >> k;
    vector<int> a(n + 3, 0);
    for(int i = n, j = k; 0 < i and j; i--){
        if(0 <= j - i){
            a[n - i + 1] = 1;
            j -= i;
        }
    }
    ll neg_sum = 0, pos_sum = 0;
    for(int i = n; 0 < i; i--){
        if(a[i] == 0){ /// it's negative
            a[i] = -(pos_sum + 1);
            neg_sum += abs(a[i]);
        }
        else{ /// positive
            a[i] = neg_sum + 1;
            pos_sum += a[i];
        }
    }
    for(int i = 1; i<=n; i++)
        cout << a[i] << " \n"[i == n];

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
