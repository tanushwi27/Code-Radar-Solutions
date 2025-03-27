#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int k;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    int b[n];
    for(int i=0;i<n;i++)
    {
        b[i]=a[n-i-1];
    }
    for(int i=0;i<n;i++)
        printf("%d\n",b[i]);
    return 0;
}