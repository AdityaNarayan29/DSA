#include <stdio.h>
void main()
{

        int n, sum = 0, k, temp, c;
        n = 153;
        temp = n;
        while (n >= 0)
        {
                k = n%10;
                c = k*k*k;
                sum += c;
                n=n/10;
        }
        if(sum==temp){
                printf("Amstrong");
        }
        else{
                printf("not amstrong");
        }

}