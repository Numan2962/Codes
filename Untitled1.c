#include<stdio.h>
int x;
int arr[50];
int binary_search(int left,int right)
{
    if(left<=right)
    {
        int mid=(left+right)/2;
        if(x==arr[mid])
            return mid;
        else if(x<arr[mid])
        {
            return binary_search(left,mid-1);
        }else if(x>arr[mid])
        {
            return binary_search(mid+1,right);
        }
    }
    return -1;
}
int main()
{
    int i,n,k;
    while(scanf("%d",&n)==1){
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    k=binary_search(0,n);
    if(k==-1)
        printf("Not found\n");
    else
    printf("Index: %d\n",k);
    }
    return 0;
}
