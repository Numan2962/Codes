#include<stdio.h>
void THanoi(int n,char source,char temporary,char destination)
{
    if(n==1)
        printf("%c->%c\n",source,destination);
    else
    {
        THanoi(n-1,source,destination,temporary);
        printf("%c->%c\n",source,destination);
        THanoi(n-1,temporary,source,destination);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    THanoi(n,'s','t','d');
    return 0;
}
