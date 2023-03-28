#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[20],sum=0, len, check=0;
    char new[20];
    printf("Enter len : ");
    scanf("%d", &len);
    printf("Enter Array :\n");
    for(int i=0; i<len; i++)
    {
        scanf("%d", &arr[i]);
        sum+= arr[i];
    }
    new[len] = '\0';
    for(int i=0, j=len-1; i<=len-1; i++, j--)
    {
        if(arr[i]!=0)
            new[j] = arr[i]+'0';
        else
            new[j] = '$';
    }
    printf("%s", new);
    return 0;
}