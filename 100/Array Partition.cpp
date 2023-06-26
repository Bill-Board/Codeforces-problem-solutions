 //BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME


// Shoeb Akibul Islam
// Dept of ICE, NSTU


#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define dua ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define i_love_u_huu dua long long t;cin >> t;while(t--)
#define ses   "\n"
#define whp   " "
#define mxi 200003
#define mp make_pair
#define pii pair<long long, long long>
#define pf printf
#define sf scanf
#define ff first
#define sob(z)  (z).begin(), (z).end()
#define ss second
#define pb push_back
#define rep0(i,a,b) for(int i=a; i<b; i++)
#define rep1(i,a,b) for(int i=a; i<=b; i++)
#define rep0in(i,a,b) for(int i=a-1; i>=b; i--)
#define rep1in(i,a,b) for(int i=a; i>b; i--)
#define repv(i,a) for(auto i=a.begin(); i!=a.end();++i)
#define INF 0x3f3f3f3f
#define CLR(a,b) memset(a,b,sizeof(a));
#define PI acos(-1)
#define what_is(x) cerr<<x<<ses;
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
//priority_queue <int, vector<int>, greater<int> > pq;
///  string single character erase-
///             s.erase(s.begin()+x); where s is st ring name
///               ans x is index;
///    transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
///    transform(su.begin(), su.end(), su.begin(), ::toupper);
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
using namespace __gnu_pbds;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
v99 ox8[] = {0, 0, 1, 1, 1, -1, -1, -1};
v99 oy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
bool sort2val(const pii &a,const pii &b)
{
    if(a.second==b.second)return a.first<b.first;
    return a.second<b.second;
}
template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b); }


typedef tree< v99, null_type, less<v99>, rb_tree_tag,tree_order_statistics_node_update> ott;
typedef tree<pii,null_type,less<pii>,rb_tree_tag,tree_order_statistics_node_update> ordered_multiset;
/// find_by_order(k) – kth index a ki ache, pointer return korbe.
/// order_of_key(x) – x kon position a ache , oita bole dibe


/**bool prime[10000020];vector<v99>prm;
void SieveOfEratosthenes(v99 n)
{
	for(v99 i=4;i<=n;i+=2)prime[i]=true;
	for (v99 p=3; p*p<=n; p+=2)
	{
		if (prime[p] == false)
		{
			/// Update all multiples of p
			for (v99 i=p*p; i<=n; i += 2*p)
				prime[i] = true;
		}
	}
	rep1(i,2,n)if(!prime[i])prm.push_back(i);

}*/
bool isPowerOfTwo (v99 x)
{
    /* First x in the below expression is for the case when x is 0 */
    return x && (!(x&(x-1)));
}
v99 pw(v99 a, v99 b)
{
	v99 ans = 1;
	for(v99 i = 1; i <= b; ++i)
		ans = (ans * a);
	return ans;
}
void vout(auto a)
{
    for(auto i:a)cout<<i<<whp;cout<<ses;
}
void mout(auto a)
{
    for(auto i:a)cout<<i.ff<<whp<<i.ss<<ses;
}
void aout0(v99 a[],v99 n)
{
    rep0(i,0,n)cout<<a[i]<<whp;cout<<ses;
}
void aout1(v99 a[],v99 n)
{
    rep1(i,1,n)cout<<a[i]<<whp;cout<<ses;
}



template <class T> inline T bigmod(T n,T p,T m)
{
    if(p==0)return 1;
    else if(p%2==0)
    {
        v99 val=bigmod(n,p/2,m);
        return (T)((val*val)%m);
    }
    else return (T)(((v99)n*(v99)bigmod(n,p-1,m))%m);
}
///-------------------------------------------------------------------------------------------------------

v99 n,a[mxi];
v99 low[mxi*3];

void init(v99 node,v99 b, v99 e)
{
    if(b==e)
    {
        low[node]=a[b];
        return ;
    }
    v99 left=node*2;
    v99 right=node *2 +1;
    v99 mid=(b+e)/2;
    init(left,b,mid);
    init(right,mid+1,e);
    low[node]=min(low[right],low[left]);
}

v99 querymin(v99 node, v99 b, v99 e, v99 i, v99 j)
{
    if(i>e || j<b)return LLONG_MAX;
    if(b>=i && e<=j)return low[node];
    v99 left=node*2;
    v99 right=node*2 +1;
    v99 mid=(e+b)/2;
    v99 p1=querymin(left,b,mid,i,j);
    v99 p2= querymin(right,mid+1,e,i,j);
    return min(p1,p2);
}

void solve()
{
    /// code is here->
    cin>>n;v99 ekn[n+1],pic[n+1];
    ekn[0]=pic[n+1]=0LL;
    map<v99,vector<v99> >tom;
    rep1(i,1,n)
    {
        cin>>a[i];
        ekn[i]=max(ekn[i-1],a[i]);
        tom[a[i]].pb(i);
    }
    for(v99 i=n;i>0;i--)pic[i]=max(pic[i+1],a[i]);
    init(1LL,1LL,n);
    v99 l=LLONG_MAX,r=0;

    for(auto i=tom.rbegin();i!=tom.rend();i++)
    {
        vector<v99>p=i->ss;v99 q=p[0],w=p[p.size()-1];
        if(p.size()>2 and i==tom.rbegin())
        {
            cout<<"YES"<<ses;
            cout<<p[1]-1<<whp<<1<<whp<<n-p[1]<<ses;
            return;
        }
        else if(i==tom.rbegin()){l=min(l,q);r=max(r,w);continue;}
        if(r>=n or l<2)break;
        v99 val1=querymin(1LL,1LL,n,l,r);\
        ///cout<<"Val_1 "<<i->ff<<whp<<val1<<whp<<l<<whp<<r<<ses;
        ///cout<<ekn[l-1]<<whp<<pic[r+1]<<ses;
        if(val1==i->ff and ekn[l-1]==i->ff and pic[r+1]==i->ff)
        {
            cout<<"YES"<<ses;
            cout<<l-1<<whp<<r-l+1<<whp<<n-r<<ses;
            return;
        }
        if(l!=1)
        {
            --l;
            val1=querymin(1LL,1LL,n,l,r);
            ///cout<<"Val_2 "<<i->ff<<whp<<val1<<whp<<l<<whp<<r<<ses;
            if(val1==i->ff and ekn[l-1]==i->ff and pic[r+1]==i->ff)
            {
                cout<<"YES"<<ses;
                cout<<l-1<<whp<<r-l+1<<whp<<n-r<<ses;
                return;
            }
            ++l;
        }
        if(r!=n)
        {
            ++r;
            val1=querymin(1LL,1LL,n,l,r);
            ///cout<<"Val_3 "<<i->ff<<whp<<val1<<whp<<l<<whp<<r<<ses;
            if(val1==i->ff and ekn[l-1]==i->ff and pic[r+1]==i->ff)
            {
                cout<<"YES"<<ses;
                cout<<l-1<<whp<<r-l+1<<whp<<n-r<<ses;
                return;
            }
            --r;
        }
        ///cout<<l<<whp<<r<<ses;
        l=min(l,q);r=max(r,w);
    }
    cout<<"NO"<<ses;
}



signed main()
{
    //dua
    //freopen("data.out","w",stdout);
    //while(1)
    i_love_u_huu
    solve();
    return 0;
}



      ///  Alhamdulillah...
