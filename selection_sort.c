#include<stdio.h>
void selection_sort(int arr[],int n)
{
    int i,j,min,k;
    for(i=0;i<n;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
            k=arr[min];
            arr[min]=arr[i];
            arr[i]=k;
    }
}
int main()
{
    int arr[50],n,i,j;
    while(scanf("%d",&n)==1){
    for(i=0;i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    selection_sort(arr,n);

    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    }
    return 0;
}
