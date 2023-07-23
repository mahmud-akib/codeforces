#include<stdio.h>
int main()
{
    int n, i;

    scanf("%d", &n);

    i = n/5;

    if(n==(i*5))
    {
        printf("%d\n",i);
    }
    else{
        printf("%d\n", (i+1));
    }
    return 0;
}
