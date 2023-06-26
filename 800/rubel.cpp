#include<bits/stdc++.h>
using namespace std;



int main()
{
    int sum=0;
    for(int i=2;i<=100;i+=3)
    {
        cout<<i<<" " ;
        if(i%5==0)sum+=i;
    }
    cout<<endl<<sum<<endl;
}
