//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

void solve(int tc)
{
    int n; cin >> n;
    if(n&1){
        for(int i = n-5; i>0; i--)
            cout << i << " ";
        cout << n-4 << " ";
        cout << n-2 << " ";
        cout << n-3 << " ";
        cout << n-1 << " ";
        cout << n << "\n";

    }
    else{
        for(int i = n-2; i>0 ; i--)
            cout << i << " ";
        cout << n-1 << " " << n << '\n';
    }
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
