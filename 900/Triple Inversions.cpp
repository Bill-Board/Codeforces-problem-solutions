//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
vector <int> a;
void solve()
{
    vector<int> b({1,2,3,4,5,6,7});
    do{
        for(auto i: b)
        cout << i << " ";
        cout << "\t";
        for(int i = 0; i<5 ; i++){
            int cnt = 0;
            cnt += b[i]>b[i+1];
            cnt += b[i]>b[i+2];
            cnt += b[i+1]>b[i+2];
            cout << cnt << " ";
        }
        cout << endl;
    }while(next_permutation(b.begin(),b.end()));
}



signed main()
{
    ll test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
