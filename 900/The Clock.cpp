//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
set<int>k;

void pre(){
    k.insert(0);
    k.insert(70);
    k.insert(140);
    k.insert(210);
    k.insert(280);
    k.insert(350);

    k.insert(601);
    k.insert(671);
    k.insert(741);
    k.insert(811);
    k.insert(881);
    k.insert(951);

    k.insert(1202);
    k.insert(1272);
    k.insert(1342);
    k.insert(1412);
}



void solve()
{
    int h , m, x; char c;
    cin >> h >> c >> m >> x;

    int start = h*60 + m;
    set<int> s,cnt;
    while(true){
        int rem = (1440-start)%x;
        if(s.find(x-rem)!=s.end())
            break;
        s.insert(x - rem);
        if(rem == 0)
            s.insert(rem);
        start = x-rem;
    }
    s.insert((h*60 + m)%x) ;
    s.insert((h*60 + m)) ;
    for(int i: s){
        for(int j: k)
            if((j-i)%x==0 and i <= j)
                cnt.insert(j);
    }
    cout << cnt.size() << '\n';
}



signed main()
{
    pre();
    ll test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
