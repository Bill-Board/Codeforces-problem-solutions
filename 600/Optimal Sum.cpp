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
using namespace std;
using namespace __gnu_pbds;

typedef long long v99;
typedef unsigned long long ull;
typedef long double dll;
typedef complex<double> point;
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
#define yes cout<<"YES"<<ses;
#define no cout<<"NO"<<ses;
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
void print(multiset <T> v) {
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
v99 modpow(v99 a, v99 n, v99 mod) {
  v99 r = 1;
  while (n > 0) {
    if (n & 1) r = r * a % mod;
    a = a * a % mod;
    n >>= 1;
  }
  return r;
}
const v99 N=mxi;

///-------------------------------------------------------------------------------------------------------
ordered_multiset s,p;
v99 sum_n=0,sum_p=0,sum_kp=0,sum_kn=0,n,k,len,a[mxi];

void print(ordered_multiset q)
{
    for(auto i:q)print(i.ff,i.ss);
}

v99 kot()
{
    v99 j=k;
    for(auto i=p.rbegin();i!=p.rend() and j>0;i++,j--)sum_kp+=i->ff;
    j=k;
    for(auto i=s.rbegin();i!=s.rend() and j>0;i++,j--)sum_kn+=i->ff;
    v99 positive=sum_n+sum_kp-(sum_p-sum_kp);
    v99 negetive=sum_p+sum_kn-(sum_n-sum_kn);
    return max(positive,negetive);
}

v99 alabu(v99 i)
{
    if(a[i]>=0)
    {
        sum_p+=a[i];
        if(p.size()<k)
            sum_kp+=a[i];
        else
        {
            auto j=p.find_by_order(p.size()-k);
            if(j->ff<=a[i])sum_kp+=a[i],sum_kp-=j->ff;
        }
        p.insert({a[i],i});
    }
    else
    {
        sum_n+=abs(a[i]);
        if(s.size()<k)sum_kn+=abs(a[i]);
        else
        {
            auto j=s.find_by_order(s.size()-k);
            if(j->ff<abs(a[i]))sum_kn+=abs(a[i]),sum_kn-=j->ff;
        }
        s.insert({abs(a[i]),i});
    }
    v99 positive=sum_p+sum_kn-(sum_n-sum_kn);
    v99 negetive=sum_n+sum_kp-(sum_p-sum_kp);
//    print(sum_kn,sum_kp);
//    print("p",positive," n",negetive);
    return max(positive,negetive);
}



void solve()
{
    /// code is here->
    read(n,len);
    rep0(i,0,n)read(a[i]);
    read(k);
    for(v99 i=0;i<len;i++)
    {
        if(a[i]>=0)sum_p+=a[i],p.insert({a[i],i});
        else sum_n+=abs(a[i]),s.insert({abs(a[i]),i});
    }
    v99 cr_h=kot();
    //print(cr_h,sum_kn,sum_kp);
    for(v99 i=0,j=len;j<n;i++,j++)
    {
        if(k==0)
        {
            if(a[i]>=0)sum_p-=a[i];
            else sum_n-=abs(a[i]);

            if(a[j]>=0)sum_p+=a[j];
            else sum_n+=abs(a[j]);

            cr_h=max(cr_h,sum_n+sum_p);
            continue;
        }
        if(a[i]>=0)/// positive
        {
            sum_p-=a[i];
            p.erase(p.find({a[i],i}));
            if(p.size()<k)
                sum_kp-=a[i];
            else
            {
                auto jj=p.find_by_order(p.size()-k);
                if((jj->ff)<=a[i])
                {
                    sum_kp-=a[i];
                    sum_kp+=(jj->ff);
                }
            }
        }
        else
        {
            sum_n-=abs(a[i]);
            s.erase(s.find({abs(a[i]),i}));
            if(s.size()<k)sum_kn-=abs(a[i]);
            else
            {
                auto jj=s.find_by_order(s.size()-k);
                if((jj->ff)<=abs(a[i]))
                {
                    sum_kn-=abs(a[i]);
                    sum_kn+=(jj->ff);
                }
            }
        }
        v99 val=alabu(j);
        cr_h=max(cr_h,val);
//        print(val);
//        print(s);cout<<ses;
//        print(p);
//        cout<<ses<<ses<<ses;
    }
    print(cr_h);
}



signed main()
{
    //dua
    //freopen("data.out","w",stdout);
    //while(1)
    //i_love_u_huu
    solve();
    return 0;
}



      ///  Alhamdulillah...