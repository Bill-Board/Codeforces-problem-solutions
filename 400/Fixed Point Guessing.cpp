//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

bool ask(int l, int r){
    cout << "? " <<l <<" " << r <<'\n';
    cout.flush();
    vector<int>a(r-l+1);
    int cnt = 0;
    for(auto &i: a){
        cin>> i;
        cnt += (l<=i and i<=r);
    }
    return cnt%2==1;

}

void solve()
{
    int n; cin >> n;
    int l = 1, r = n;
    while(l+1 <= r){
        int mid = (l + r)/2;
        if(ask(l, mid))
            r = mid ;
        else
            l = mid+1;
    }
    cout <<"! " << l << '\n';
    cout.flush();
}



signed main()
{
     int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
