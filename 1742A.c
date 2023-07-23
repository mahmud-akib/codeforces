#include<stdio.h>
int main()
{
    int x, y, z;
    int n;

    scanf("%d", &n);

    for(int i=0; i<n; i++){

    scanf("%d%d%d", &x, &y, &z);

    if(x+y==z || y+z==x || z+x==y){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    }
    return 0;
}
