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

typedef long long v99;
typedef unsigned long long ull;
#define dua ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define i_love_u_huu dua long long t;cin >> t;while(t--)
#define ses   "\n"
#define whp   " "
#define mxi 200003
#define mp make_pair
#define pii pair<v99, v99>
#define pf printf
#define sf scanf
#define ff first
#define sob(z)  (z).begin(), (z).end()
#define ss second
#define pb push_back
#define rep0(i,a,b) for(v99 i=a; i<b; i++)
#define rep1(i,a,b) for(v99 i=a; i<=b; i++)
#define rep0in(i,a,b) for(v99 i=a-1; i>=b; i--)
#define rep1in(i,a,b) for(v99 i=a; i>b; i--)
#define repv(i,a) for(auto i=a.begin(); i!=a.end();++i)
#define INF 0x3f3f3f3f
#define CLR(a,b) memset(a,b,sizeof(a));
#define PI acos(-1)
#define what_is(x) cerr<<x<<ses;
#define vc    vector<char>
#define vll    vector<v99>
#define vs    vector<string>
#define dqll   deque<v99>
#define dqc   deque<char>
#define lll   list<v99>
#define lic   list<char>

//Container Adaptors : queue,priority_queue, stack....
#define stll   stack<v99>
#define stc   stack<char>

//Associative Containers : map,set....
#define mpll  map<long long ,long long>
#define mps   map<string,string>
#define sll    set<v99>
#define sc    set<char>
#define msll   multiset<v99>
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
//priority_queue <int, vector<int>, greater<int> > pq;
///  string single character erase-
///             s.erase(s.begin()+x); where s is st ring name
///               ans x is index;
///    transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
///    transform(su.begin(), su.end(), su.begin(), ::toupper);
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
/// find_by_order(k) � kth index a ki ache, pointer return korbe.
/// order_of_key(x) � x kon position a ache , oita bole dibe


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

template <typename T> inline
void print(vector <T> v) {
    for (T i : v) cout << i << whp;
    cout << ses;
}

template <typename T> inline
void print(T&& t) {cout << t << ses;}


template <typename T> inline
void print(T *a, T n) {
    for(T i=0;i<n;i++)print(a[i]);
    cout<<ses;
}
template <typename T,typename Q> inline
void print(map < T, Q> v) {
    for (auto i : v) cout << i.first << whp<< i.second<<ses;
    cout << ses;
}

template <typename T>
void print(vector <vector <T>>& v) {
    for (vector <T>& vv : v) {
        for (T& i : vv)
            cout << i << whp;
        cout << ses;
    }
}
template <typename T>
inline void read(T&& t) {cin >> t;}

template <typename T> inline
void read(vector <T>& v) {for (T& i : v) cin >> i;}

template <typename T> inline
void read(T *arr,T n) {for (T i=0;i<n;i++) read(arr[i]);}

template <typename T> inline
void read(T *arr,T s, T n) {for (T i=s;i<=n;i++) read(arr[i]);}

template <typename T, typename... Args> inline
void read(T&& t, Args&&... args)
{
    cin >> t;
    read(forward<Args>(args)...);
}
template <typename T, typename... Args>
inline void print(T&& t, Args&&... args)
{
    cout << t << " ";
    print(forward<Args>(args)...);
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

v99 a[mxi];
void init(v99 node,v99 b, v99 e,v99 *ts,v99 *tm,v99 *tn)
{
    if(b==e)
    {
        ts[node]=tm[node]=tn[node]=a[b];
        return ;
    }
    v99 left=node*2;
    v99 right=node *2 +1;
    v99 mid=(b+e)/2;
    init(left,b,mid,ts,tm,tn);
    init(right,mid+1,e,ts,tm,tn);
    ts[node]=ts[right]+ts[left];
    tm[node]=max(tm[right],tm[left]);
    tn[node]=min(tn[right],tn[left]);
}

v99 querysum(v99 node, v99 b, v99 e, v99 i, v99 j,v99 *ts)
{
    if(i>j)return 0LL;
    if(i>e || j<b)return 0LL;
    if(b>=i && e<=j)return ts[node];
    v99 left=node*2;
    v99 right=node*2 +1;
    v99 mid=(e+b)/2;
    v99 p1=querysum(left,b,mid,i,j,ts);
    v99 p2= querysum(right,mid+1,e,i,j,ts);
    return p1+p2;
}
v99 querymin(v99 node, v99 b, v99 e, v99 i, v99 j,v99 *tn)
{
    if(i>e || j<b)return LLONG_MAX;
    if(b>=i && e<=j)return tn[node];
    v99 left=node*2;
    v99 right=node*2 +1;
    v99 mid=(e+b)/2;
    v99 p1=querymin(left,b,mid,i,j,tn);
    v99 p2= querymin(right,mid+1,e,i,j,tn);
    return min(p1,p2);
}
v99 querymax(v99 node, v99 b, v99 e, v99 i, v99 j,v99 *tm)
{
    if(i>e || j<b)return -LLONG_MAX;
    if(b>=i && e<=j)return tm[node];
    v99 left=node*2;
    v99 right=node*2 +1;
    v99 mid=(e+b)/2;
    v99 p1=querymax(left,b,mid,i,j,tm);
    v99 p2= querymax(right,mid+1,e,i,j,tm);
    return max(p1,p2);
}

void solve()
{
    /// code is here->
    v99 n,m,x=0,y=0,v=0;read(n,m);
    v99 ts[(n+2)*4],tn[(n+2)*4],tm[4*(n+2)];
    string s;read(s);
    vector<pii>vp({mp(0LL,0LL)});
    a[0]=0;
    rep0(i,0,n)
    {
        v+=s[i]=='+';v-=s[i]=='-';
        x=max(x,v);y=min(y,v);
        vp.pb({y,x});
        a[i+1]=v;
    }vp.pb({0LL,0LL});
    init(1LL,1LL,n,ts,tm,tn);
    while(m--)
    {
        v99 l,r;read(l,r);
        v99 mn=vp[l-1].ff,mx=vp[l-1].ss;
        //v99 kot=querysum(1LL,1LL,n,1LL,r,ts)-querysum(1LL,1LL,n,1LL,l-1,ts);
        v99 kot=a[r]-a[l-1];
        if(r+1<=n)mn=min(mn,querymin(1LL,1LL,n,r+1,n,tn)-kot),mx=max(mx,querymax(1LL,1LL,n,r+1,n,tm)  -kot);
        //print(mn,mx);
        print(mx-mn+1);
    }
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
