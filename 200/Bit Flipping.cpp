//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
string s;
int n,k;

int alabu()
{
    for(int i =0; i<n ; i++)
    {
        if(s[i] =='1')
        {
            return i;
        }
    }
    return n-1;
}
void solve()
{
    cin >> n >> k >> s;
    vector< int > cnt(n, 0), ache(n+1), pos;
    if(k&1)
    {
        k--;
        int pos = alabu();
        cnt [pos] ++;
        for(int i =0; i<n ; i++)
            if(i != pos)
            {
                if(s[i] == '0')
                    s[i] = '1';
                else
                    s[i] = '0';
            }
    }
    for(int i = 0 ; i < n ; i++)
        if(s[i]=='0')
            pos.push_back(i);
    for(int i =1; i<pos.size() and k>0 ; i+=2, k-=2)
    {
        int ind1 = pos[i], ind2= pos[i-1];
        cnt[ ind1 ] ++;
        cnt[ ind2 ] ++;
        s[ind1] = '1';
        s[ind2]='1';
    }
    if(pos.size()&1 and k>0)
    {
        k-=2;
        cnt[pos.back()]++;
        cnt[n-1]++;
        s[pos.back()]='1';
        s[n-1] = '0';
    }
    cnt[0]+=k;
    cout << s << endl;
    for(auto i: cnt)
        cout << i << " ";
    cout << endl;
}




signed main()
{
    ll test_case=1;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
