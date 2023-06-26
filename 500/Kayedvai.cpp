//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME


// Shoeb Akibul Islam
// Dept of ICE, NSTU


#include<bits/stdc++.h>
using namespace std;


bool sort2val(const pair<int,double> &a,const pair<int,double> &b)
{
    if(a.second==b.second)
        return a.first<b.first;
    return a.second>b.second;
}


void solve()
{
    /// code is here->
    int n;
    cin>>n;// read koita student for writen
    vector<pair<int,double> >w(n),p(n);
    for(int i=0; i<n; i++)
        cin>>w[i].first>>w[i].second;/// read written part
    for(int i=0; i<n; i++)
        cin>>p[i].first>>p[i].second;/// read written part
    sort(w.begin(),w.end());
    sort(p.begin(),p.end());
    vector<pair<int,double> >a;
    for(int i=0; i<n; i++)
    {
        double val=( w[i].second/100 )*60;
        val+= (( p[i].second/100 )*40);
        a.push_back({w[i].first,val});
    }
    sort(a.begin(),a.end(),sort2val);
    cout<<"RANK\t\tID\t\tMARKS"<<endl;
    for(int i=0; i<n; i++)
        cout<<i+1<<"\t\t"<<a[i].first<<"\t\t"<<fixed<<setprecision(1)<<a[i].second<<endl;
}



signed main()
{
    solve();
    return 0;
}



///  Alhamdulillah...
