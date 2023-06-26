//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

bool is_conso(char c){
    if(c =='a' or c=='e' or c=='i' or c=='o' or c=='u')
        return false;
    return true;
}

void solve()
{
    int n; cin >> n;
    string s;cin >> s;
    if(n<4){
        cout << "YES" <<'\n';
        return;
    }
    for(int i = 0; i<n; i++){
        int conso = 0;
        while(i<n and is_conso(s[i]))
        i++,conso++;
        if(conso>3){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";


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
