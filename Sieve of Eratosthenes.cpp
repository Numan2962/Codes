#include<bits/stdc++.h>
using namespace std;
#define S 100005
bool arr[S];
int prime[S];
void sieve()
{
    int i,j,k=1;
    prime[0]=2;
    arr[0]=arr[1]=true;
    for(i=3;i*i<=S;i+=2)
        if(!arr[i])
            for(j=i*i;j<=S;j+=2*i)
                arr[j]=true;
    for(i=3;i<=S;i+=2)
        if(!arr[i])
    {
        prime[k]=i;
        k++;
    }
}
int main()
{
    sieve();
    int n,i;
    while(cin>>n)
    {
        for(i=0;prime[i]<=n;i++)
            printf("%d ",prime[i]);
        printf("\n");
    }
    return 0;
}
