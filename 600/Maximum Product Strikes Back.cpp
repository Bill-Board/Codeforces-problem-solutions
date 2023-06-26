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
    int n;
    cin >> n;
    vector <int> a(n+2, 0), z({0}), pren(n+2, 0), pret(n+2, 0);
    for(int i = 1; i<=n ; i++){
        cin >> a[i];
        if(a[i]==0)
            z.push_back(i);
        if(a[i]<0)
            pren[i]=1;
        if(abs(a[i])==2)
            pret[i]=1;
        pret[i]+=pret[i-1];
        pren[i]+=pren[i-1];
    }
    z.push_back(n+1);
    pret[n+1]+=pret[n];
    pren[n+1]+=pren[n];
    int ans = -1, l = 0, r= 0;
    for(int i = 0; i<z.size() -1 ; i++){
        if( (pren[z[i+1]] - pren[ z[i] ] ) % 2 ==0){
            int kot =pret[z[i+1]] - pret[ z[i] ] ;
            if(kot > ans){
                ans = kot;
                l = z[i];
                r = n - z[i+1] + 1;
            }
            continue;
        }
        for(int j = z[i] + 1; j < z[i+1] ; j++){
            if(a[j]<0){
                int kot =pret[z[i+1]] - pret[ j ] ;
                if(kot > ans){
                    ans = kot;
                    l = j;
                    r = n - z[i+1] + 1;
                }
                break;
            }
        }
        for(int j = z[i+1] - 1; j > z[i] ; j--){
            if(a[j]<0){
                int kot =pret[j -1] - pret[ z[i] ] ;
                if(kot > ans){
                    ans = kot;
                    l = z[i];
                    r = n - j + 1;
                }
                break;
            }
        }
    }
    cout << l << " " << r << endl;

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
