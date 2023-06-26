//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=20;
string s[N];
int n,m;
bool alabu(int upore, int lef){
    //cout << upore << " "<< lef << endl;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m ; j++){
            if(s[i][j] == 'R'){
                if(i-upore<0 or j-lef<0)
                    return false;
            }
        }
    }
    return true;
}


void solve()
{
    cin >> n >> m;
    for(int i = 0; i<n; i++)
        cin >> s[i];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(s[i][j] == 'R'  and alabu(i,j)){
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
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
