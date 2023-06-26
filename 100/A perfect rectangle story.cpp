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


ll q,n,m;
ll tree[155][306];
ll a[155][306];
//bool b[n][n];
///SUM OF A 2D ARRAY USING BIT///
void update(ll x,ll y,ll val)
{
    while(x<=n){
        int y1=y;
        while(y1<=m){
            tree[x][y1]+=val;
            y1+=(y1 & -y1);
        }
        x+=(x & -x);
    }
}

int read(ll x, ll y)
{
    ll sum=0;
    while(x>0){
        int y1=y;
        while(y1>0){
            sum+=tree[x][y1];
            y1-=(y1 & -y1);
        }
        x-=(x & -x);
    }
    return sum;
}

ll query(ll x1,ll y1,ll x2,ll y2)
{
    return read(x2,y2)-read(x2,y1-1)-read(x1-1,y2)+read(x1-1,y1-1);
}

ll accha(int xc, int yc, int r, int c){
    int kot = r / 2;
    int x1 = xc - kot, x2 = xc + kot;
    kot = c / 2;
    int y1 = yc - kot, y2 = yc + kot;
    if(x1 <= 0 || n < x1 || x2 <= 0 || n < x2 || y1 <= 0 || m < y1 || y2 <= 0 || m < y2)
    return LLONG_MAX;
    cout << x1 << " " << y1 << " " <<  x2 << " " << y2 ;
    return query(x1,y1,x2,y2);
}


bool alabu( int x, int y, int mid, int val){
    //cout << "mid " << mid << '\n';
    for(int i = 1; i*i<=mid; i++){
        if(mid % i == 0){
            cout << i << " " << mid/i << '\n';
            ll kot = accha(x, y, i, mid/i);
            if(kot <= val) return true;
            kot = accha(x, y, mid/i, i);
            if(kot <= val) return true;
        }
    }
    return false;
}



void solve(int tc)
{
    cin >> q >> n >> m;
    while(q--){
        ll t, x, y, val;
        cin >> t >> x >> y >> val;
        if(t == 1){
            update(x ,y ,-a[x][y]);
            update(x ,y ,val);
            a[x][y] = val;
        }

        else{
            ll cr_h = -1, sz = min(x - 1, n - x);
            for(int i = 0; i<=sz ; i++){
                int x1 = x - i, x2 = x + i;
                //cout << "x1 " << x1 << " x2 " << x2 << '\n';
                ll l = 0, r = min(y - 1,m - y), ans = -1;
                while(l <= r){
                    int mid = (l + r) /2;
                    int y1 = y - mid, y2 = y + mid;
                    //cout << "y1 " << x1 << " y2 " << x2 << "\n";
                    ll kot = query(x1, y1, x2, y2);
                    //cout << "kot " << kot << '\n';
                    if(kot <= val)
                        l = mid + 1, ans = mid;
                    else
                        r = mid - 1;
                }
                cr_h = max(cr_h, (2*i + 1)*(2*ans + 1));
            }
            cout << cr_h << '\n';
        }
    }
}



signed main()
{
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
