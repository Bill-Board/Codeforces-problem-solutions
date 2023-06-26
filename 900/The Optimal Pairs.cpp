//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;


template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b); }

vector<int>prm;
bool prime[N+2];
void SieveOfEratosthenes(int n)
{
	for (int p=3; p*p<=n; p+=2)
	{
		if (prime[p] == false)
		{
			for (int i=p*p; i<=n; i += 2*p)
				prime[i] = true;
		}
	}prm.push_back(2);
	for(int i=3;i<=n;i+=2)
        if(!prime[i])prm.push_back(i);
}

void solve()
{
    int n; cin >> n;
    int nn = n;
    ll cr_h = 1;
    for(auto i:prm){
        int kot = 0;
        while(n%i==0)
            n/=i,kot++;
        cr_h *= (kot + 1);
        if(n==1)break;
    }
    if(n>1)
        cr_h *= 2;
    cr_h--;
    cr_h*=2;
    if(nn % 2 ==0 )
        cr_h--;
    cout << cr_h << '\n';
}



signed main()
{
    SieveOfEratosthenes(N);
    ll test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
