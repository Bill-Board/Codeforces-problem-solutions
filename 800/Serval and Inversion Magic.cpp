//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N=200005;
ll mod= 1e9+7, n;
string s;

int alabu(int pos, int c){
    if(c < 0){
        for(int i = pos; 0<=i ;i--)
            if(s[i] != s[n-i-1])
                return i;
    }
    else{
        for(int i = pos; i<s.size()/2 ;i++)
            if(s[i] != s[n-i-1])
                return i;
    }
    return -1;

}

void solve(int tc)
{
    cin >> n;
    cin >> s;
    int kot1 =alabu(0, 1), kot2 = alabu((n-1)/2, -1);
    if(kot1 == -1){
        cout << "Yes\n";
        return;
    }

    for(int i = kot1; i<=kot2; i++){
        if(s[i]=='0')s[i] = '1';
        else s[i] = '0';
    }
    for(int i = 0; i<n/2; i++){
        if(s[i] != s[n-i-1]){
            cout<< "No\n";
            return;
        }
    }
    cout << "Yes\n";

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
