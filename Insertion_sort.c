#include<stdio.h>
void insertion_sort(int arr[],int n)
{
    int i,j,value;
    for(i=1;i<n;i++)
    {
        value=arr[i];
        j=i-1;
        while(arr[j]>value&&j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=value;
    }
}
int main()
{
    int arr[50],i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    insertion_sort(arr,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

