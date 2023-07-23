#include <stdio.h>
#include<string.h>
 
int main()
{
    int n;
    scanf("%d", &n);
    char a[33] = "314159265358979323846264338327";
 
    for (int i = 0; i < n; i++)
    {
           char b[35];
            scanf("%s", b);
          
          int c = 0;

        for (int j = 0; j < strlen(b); j++) 
        {
            if (b[j] == a[j])
            {
                c++;
            } else {
                break;
            }
        }
        printf("%d\n", c);
    }
 
    return 0;
}
