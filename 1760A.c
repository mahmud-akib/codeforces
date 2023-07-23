#include<stdio.h>
int main()
{
    int num1,num2,num3, a;
    scanf("%d", &a);
    for(int i=0; i<a; i++){
    scanf("%d %d %d",&num1,&num2,&num3);

    if(num2>num1 && num1>num3 || num3>num1 && num1>num2){
        printf("%d\n",num1);
    }
  
    if(num1>num2 && num2>num3 || num3>num2 && num2>num1){
        printf("%d\n",num2);
    }
  
    if(num1>num3 && num3>num2 || num2>num3 && num3>num1){
        printf("%d\n",num3);
    }
    }
    return 0;
}
