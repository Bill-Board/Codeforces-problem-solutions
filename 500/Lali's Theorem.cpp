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
    int n, cr_h =0, cnt =0;
    set < int > s;
    cin >> n;
    for(int i =1; i<=n ;i++)
        s.insert(i*i);
    for(int i = n; i>0; i--){
        int kot = i*i, len = 1;
        //cout << "i "<< i << endl;
        for(int j = i-1; j > len; j--){
            int dif = kot - (j*j);
            len = sqrt(dif);
            if(s.find(dif)!= s.end()){
                cr_h++;
                //cout << j<<" " << dif << endl;
            }cnt++;
        }//cout << endl;
    }
    cout << cr_h << endl;
    //cout << cnt << endl;
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
