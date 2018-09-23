#include<bits/stdc++.h>
using namespace std;
void Merge(int arr[],int left,int mid,int right)
{
    int ls,rs,i,j;
    ls=mid-left+1;
    rs=right-mid;
    int larr[ls],rarr[rs];
    for(i=0;i<ls;i++)
    {
        larr[i]=arr[left+i];
    }
    for(i=0;i<rs;i++)
    {
        rarr[i]=arr[mid+1+i];
    }
    int a,l=0,r=0;
    for(a=left;l<ls&&r<rs;a++)
    {
        if(larr[l]<rarr[r])
        {
            arr[a]=larr[l];
            l++;
        }else
        {
            arr[a]=rarr[r];
            r++;
        }
    }
    while(l<ls)
    {
        arr[a]=larr[l];
        a++;
        l++;
    }
    while(r<rs)
    {
        arr[a]=rarr[r];
        a++;
        r++;
    }
}
void merge_sort(int arr[],int left,int right)
{
    if(left>=right)
        return;
    int mid=left+(right-left)/2;
    merge_sort(arr,left,mid);
    merge_sort(arr,mid+1,right);
    Merge(arr,left,mid,right);
}
int main()
{
    int arr[50],i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    merge_sort(arr,0,n-1);
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
