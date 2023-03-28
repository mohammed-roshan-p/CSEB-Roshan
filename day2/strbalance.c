#include<stdio.h>
#include<string.h>
int main()
{
    char str[25];
    int star=0;
    printf("Entrer the array : ");
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]=='*')
        {
            star++;
        }
        else{
            star--;
        }
    }
    printf("star = %d\n",star);
    if(star==0)
    {
        printf("String is balanced\n");
    }
    else
    {
        printf("String not Balanced \n");
    }
}