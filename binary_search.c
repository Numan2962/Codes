#include<stdio.h>
int binary_search(int arr[],int left,int right,int x)
{
   int mid=left+(right-left)/2;
   while(left<=right)
   {
       int mid=left+(right-left)/2;
       if(arr[mid]==x)
        return mid;
       else{
        if(x<arr[mid])
        {
            right=mid-1;
        }else
        left=mid+1;
       }
   }
   return -1;
}
int main()
{
    int arr[50],i,n,t,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    t=binary_search(arr,0,n-1,x);
    if(t==-1)
        printf("Not found\n");
    else
        printf("%d is in index %d\n",x,t);
    return 0;
}
