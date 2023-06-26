//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

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



void solve()
{
    int n;
    cin >> n;

    ek.clear_();
    dui.clear_();

    ek.init(n+10);
    dui.init(n+10);

    map<int, int > mpp;
    vector<int> a(n+1);
    for(int i =1; i<=n; i++)
        cin >> a[i];

    ll cr_h =0;
    for(int i = n -1; i>0 ; i--){
        for(int j = i + 1; j<=n ; j++){
            if(a[i] < a[j]){
                if(j-i<2 or j==n)continue;
                int kot = range_query(j,j);
                int start_hoise= mpp[j];
                cr_h += max(0, kot - start_hoise);
            }
            else{
                mpp[i]++;
                mpp[j]++;
                update_range(i,j,1);

            }
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
