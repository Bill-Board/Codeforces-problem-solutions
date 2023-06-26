//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

bool prime[N];vector<int>prm;
void SieveOfEratosthenes(ll n)
{
	for (ll p=3; p*p<=n; p+=2)
	{
		if (prime[p] == false)
		{
			for (ll i=p*p; i<=n; i += 2*p)
				prime[i] = true;
		}
	}
	prm.push_back(2LL);
	for( int i=3; i <= n; i+= 2)
        if(!prime[i])prm.push_back(i);

}

void solve()
{
    int x, d, cnt =0;
    cin >> x >> d;
    while(x % d == 0)
        x /= d, cnt ++;
    if(cnt ==1){
        cout << "NO" << endl;
        return;
    }
    int cnt2 =0, p = 0;
    bool is_comp=false;
    for(auto i: prm){
        while(d % i == 0)
            p++, d /= i;
        if(d==1)break;
    }
    if(d>1)cnt2++;
    if(p>1)is_comp= true;
    int l =1;
    for(auto i: prm){
        while(x % i == 0)
            cnt2++, x /= i;
        if(x==1)break;
        l++;
    }
    if(x>1)cnt2++;
    cout << cnt<< endl;
    cout << cnt2 << endl;
    if(l==1)
    if(cnt2>1){
        cout << "YES" <<endl;
        return;
    }
    int kot = (cnt - 2) * p;cout << kot << endl;
    if(kot>1)cout << "YES"<<endl;
    else cout << "NO"<<endl;

}



signed main()
{
    SieveOfEratosthenes(100002ll);
    ll test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
