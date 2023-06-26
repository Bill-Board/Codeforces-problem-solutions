Linear Sieve:
v99 lp[N+1];
vector<v99> pr;
void mpf()
{
    for(v99 i=2; i<=N; i++)
    {
        if(lp[i]==0)
            lp[i]=i,pr.pb(i);
        for(v99 j=0; j<pr.size() and
                pr[j]<=lp[i] and i*pr[j]<=N; j++)
            lp[i*pr[j]]=pr[j];
    }
}
