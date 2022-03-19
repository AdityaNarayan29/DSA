#include<stdio.h>
void main(){



int k,sum = 0,temp,n;

printf("n kya hai?");
// scanf("%d",&n);
n = 121;
temp = n ;
while (n!=0)
{
        k = n%10;
        sum = sum*10+k;
        n= n/10;
}

if (sum == temp)
{
        printf("True pdrome");
}
else{
        printf("Fuck  off");
}


        
        // int n,i,sum=0,k,factorial=0;
        // printf("Enter value of n : ");
        // scanf("%d",&n);
        // while (n/10==0)
        // {       
        //         k = n%10;
        //         n = n/10;

        //         for(k;k>0;k--){
        //                 factorial *= k;
        //         } 
        //         printf("%d",factorial);
        //         sum = sum + factorial;
                
        // }
        // if(sum == n){
        //         printf("It's a Strong Number");
        // }else{
        //         printf("It's not a Strong Number");
        // }
}