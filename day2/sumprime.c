#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,sum=0;
    printf("Enter Array length : \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Array Elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("Sum : %d \n",sum);
    for ( i = sum/2; i >=2 ; i--)
    {
        if(sum%i==0)
        {
            printf("Sum is Not a prime \n");
            exit(1);
        }
    }
    printf("Sum is prime");
    
}