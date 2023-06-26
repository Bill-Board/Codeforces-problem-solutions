//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N=200005;
ll mod= 1e9+7;

template <typename T>
struct BIT {
      T n;
      vector <T> Tree;
      void init(T N) {
            n = N;
            Tree = vector <T> (n + 1);
      }
      void update(T pos, T val) {
            while (pos <= n) {
                  Tree[pos] += val;
                  pos += (pos & -pos);
            }
      }
      void range_update_1(T l,T r,T x)
      {
          update(l,x);
          update(r+1,-x);
      }
      void range_update_2(T l,T r,T x)
      {
          update(l,x*(l-1));
          update(r+1,-x*r);
      }
      T query(T pos) {
            T sum = 0;
            while (pos > 0) {
                  sum += Tree[pos];
                  pos -= (pos & -pos);
            }
            return sum;
      }
      T query(T l, T r) {
            return query(r) - query(l - 1);
      }
      void clear_()
      {
          Tree.clear();
      }
};

BIT<int>ek,dui;

void update_range(int l,int r,int x)
{
    ek.range_update_1(l,r,x);
    dui.range_update_2(l,r,x);
}
int _query(int b)
{
    return ek.query(b)*b -dui.query(b);
}

int range_query(int a,int b)
{
    return _query(b) - _query(a-1);
}

int alabu(int val, int kot)
{
    while( 0 < kot){
        if(0 < val and val < 10)
            break;
        int sum = 0;
        while(val > 0){
            sum += (val%10);
            val /= 10;
        }
        kot--;
        val = sum;
    }
    return val;
}
void in_cl(int n){
    ek.clear_();
    dui.clear_();
    ek.init(n); dui.init(n);
}

void solve(int tc)
{
    int n, q;
    cin >> n >> q;
    in_cl(n);
    vector<int> a(n);
    for(auto &i : a)
        cin >> i;
    while(q--){
        int t, x, y;
        cin >> t >> x ;
        if(t == 2){
            int kot = range_query(x,x);
            cout << alabu(a[x-1], kot) << '\n';
        }
        else
            cin >> y, update_range(x, y, 1);
    }
}



signed main()
{
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
