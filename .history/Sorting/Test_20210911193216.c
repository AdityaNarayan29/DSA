#include <stdio.h>
void main()
{

        int n, sum = 0, k, temp, c;
        printf("n ?");
        scanf("%d", &n);
        while (n >= 0)
        {
                k = n%10;
                c = k*k*k;
                sum += c;
        }
}