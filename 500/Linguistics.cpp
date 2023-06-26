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
    int a, b, c , d;
    string s, p;
    cin >> a >> b >> c >> d >> s;
    int n = s.size();
    vector<int> visi(n+1, 0);

    for(int i = 0; i<n-1 and 0 < c; i++){
        if(s[i]=='A' and s[i+1]=='B')
            visi[i]=visi[i+1] = 1, c--;
    }
    for(int i = n-1; i>0 and 0 < d; i--){
        if(s[i]=='A' and s[i-1]=='B' and visi[i] == 0 and visi[i-1]==0)
            visi[i]=visi[i+1] = 1, d--;
    }//cout << s << endl;

    for(int i = 0; i<n and 0 < a ;i++ ){
        if(s[i]=='A' and visi[i] == 0)
            visi[i] = 1, a--;
    }
    for(int i = 0; i<n and 0 < b ;i++ ){
        if(s[i]=='B' and visi[i] == 0)
            visi[i] = 1, b--;
    }
    int cnt = 0;
    for(int i = 0; i<n; i++)
        cnt += visi[i];
    cout << cnt << " || " << a << " || " << b << " || " << c << " || " << d << endl;














//    for(int i = 0; i<a; i++)
//        p+='A';
//    for(int i = 0; i<b; i++)
//        p+='B';
//    for(int i = 0; i<c; i++)
//        p+="AB";
//    for(int i = 0; i<d; i++)
//        p+="BA";
//    sort(s.begin(),s.end());
//    sort(p.begin(),p.end());
//
//    cout << s << endl;
//    cout << p << endl;
}



signed main()
{
    ll test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
