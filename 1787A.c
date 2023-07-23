#include<stdio.h>
int main()
{
    int x;

    scanf("%d", &x);

    for(int i=0; i<x; i++){
    int n;
    scanf("%d", &n);

      int a = 1;
      int b = n/2;

     if(n%2==0){
        printf("%d %d\n", a, b);
    }
    else{
        printf("-1\n");
    }
    }
}
