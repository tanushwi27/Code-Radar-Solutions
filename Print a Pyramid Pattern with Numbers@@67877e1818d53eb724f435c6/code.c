// Your code here...
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sp=n-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sp;j++)
            printf(" ");
        for(int j=1;j<=i;j++)
            printf("%d",j);
        sp--;
        printf("\n");
    }
    return 0;
}