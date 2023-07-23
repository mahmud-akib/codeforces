#include<stdio.h>
int main()
{
    int num1, value=0, i, j;
    char s[4];

    scanf("%d", &num1);

    gets(s);

    for(i=0; i<num1; i++){
        gets(s);
        for(j=0; j<3; j++){
            if(s[j] == '+'){
                value++;
                break;
            }
             else if(s[j] == '-'){
                value--;
                break;
            }
        }
    }

    printf("%d\n", value);

    return 0;
}
