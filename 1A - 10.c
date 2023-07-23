#include<stdio.h>
#include<math.h>
int main()
{
    double n, m, a;

    scanf("%lf%lf%lf", &n, &m, &a);

    double x = ceil(n/a);
    double y = ceil(m/a);

    double result = x * y;

    printf("%.lf\n", result);

    return 0;

}
