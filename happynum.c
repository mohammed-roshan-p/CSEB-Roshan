#include<stdio.h>
void main()
{
    int num, sum=0, r;
    printf("Enter number : ");
    scanf("%d", &num);
    while(num>9)
    {
        sum = 0;
        while (num!=0)
        {
            r = num%10;
            sum+=r*r;
            num=num/10;
        }
        num=sum;        
    }
    if(num==1)
        printf("Happy Number");
    else
        printf("Not Happy Number");
}