#include<stdio.h>
int main(int argc, char const *argv[])
{
    
        long long int a,b,c;

        scanf("%lld %lld", &a, &b);

        if(a%2==0){
            c = a/2;
        }
        else{
            c = (a+1)/2;
        }
        if(b<=c){
            printf("%lld\n", (b*2)-1);
        }
        else{
            printf("%lld\n", (b-c)*2);
        }

    return 0;
}
