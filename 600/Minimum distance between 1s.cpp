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
    int n; string s;
    cin >> n >> s;
    while(s.back() == '0')s.pop_back();
    reverse(s.begin(),s.end());
    while(s.back() == '0')s.pop_back();
    reverse(s.begin(),s.end());

    int z = 0;
    for(int i = 1; i<s.size(); i++){
        if(s[i]=='1' and s[i-1]=='1'){
            cout << 1 << '\n';
            return;
        }
        if(s[i] == '0')
            z++;
        else{
            if(z % 2 == 0){
                cout << 1 << '\n';
                return;
            }
            z = 0;
        }
    }
    cout << 2 << '\n';


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
