//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

void solve()
{
    int n, k;
    string s;
    cin >> n >> k >> s;
    if(k>24){
        cout << string (n, 'a') << endl;
        return;
    }
    char last = 'a',last2 ='z', mx = 'z';
    for(int i = 0; i<n; i++){
        if(s[i]<=last)s[i]='a';
        else if((s[i]-last) <=k){
            k-=s[i]-last;
            last = s[i];
            s[i] = 'a';
        }
        else if(k>0){
            mx = s[i];
            s[i] -= k;
            last2 = s[i];
            k=0;
        }
        else if(last2 < s[i] and s[i] <=mx)
            s[i]=last2;
        //cout << s << " " << k << endl;
    }
    cout << s << endl;
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
