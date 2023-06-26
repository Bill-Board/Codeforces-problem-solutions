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
vector<int> a(N);
int n;

bool ask(int l, int r){
    cout << "? " << r - l + 1 << ' ';
    for(int i = l; i<=r; i++)
        cout << i << " \n"[i == r];
    cout.flush();
    int sum; cin >> sum;
    return sum != (a[r] - a[l-1]);
}

void solve(int tc)
{
    cin >> n;
    for(int i = 1; i<=n; i++){
        cin >> a[i];
        a[i] += a[i-1];
    }
    int l = 1, r = n, ans = 0;
    while(l < r){
        int mid = (l + r)/2;
        if(ask(l, mid))
            r = mid;
        else
            l = mid + 1;
    }
    cout << "! " << r << '\n';
    cout.flush();
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
