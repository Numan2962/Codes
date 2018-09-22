#include<stdio.h>
void bubble_sort(int arr[],int n)
{
    int i,j,t;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
}
int main()
{
    int arr[50],n,i,j;
    scanf("%d",&n);
    for(i=0;i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    bubble_sort(arr,n);

    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
