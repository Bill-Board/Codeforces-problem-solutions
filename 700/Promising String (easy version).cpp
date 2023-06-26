//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

bool alabu(int pl, int mi, int r){
    //cout << pl << " " << mi << " " << r << endl;
    if(pl > mi)return false;
    if(pl == mi) return true;
    int need = (mi - pl) / 3;
    if(pl+need != (mi - 2*need))
        return false;
    return need<=r;
}

void solve()
{
    int n , cr_h = 0;
    string s;
    cin >> n >> s;
    for(int i = 0 ; i < n ; i++){
        int pl= 0, mi= 0, ad = 0, k= 0, r = 0;
        for(int j = i; j<n ; j++){
            pl += s[j]=='+';
            mi += s[j]=='-';
            if(s[j]=='-'){
                if(k == 1)
                    r++, k = 0;
                else
                    k = 1;
            }
            else k = 0;


            cr_h+= alabu(pl,mi,r);
        }
    }
    cout << cr_h << endl;
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
