#include<stdio.h>
int main()
{
    int m, n, s;
    scanf("%d%d", &m, &n);

    if(m>=1 && n<=16){
        s=(m*n)/2;

    }
    printf("%d\n", s);

    return 0;
}  
