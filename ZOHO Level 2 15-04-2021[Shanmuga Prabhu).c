#include<stdio.h>
void startmiddle(char a[], int len, int mid)
{
    int c = mid;
    int d  = 0;
    for(int i = 0; i < len; i++)
    {
        for(int j = len-1; j > i; j--)
        {
            printf(" ");
        }
        if(c > len)
        c = len-1;
        for(int k = mid; k <= c; k++)
        {
            if(a[k]!='\0')
             printf("%c", a[k]);
        }
        if(c <= len-1 && d == 0)
        {
        printf("\n");
        }
        c++;
        if(i > mid)
        {
            for(int g = 0; g <= d; g++)
         {
             printf("%c", a[g]);
         }
         d++;
        printf("\n");
        }
    }
}
int main()
{
    char a[50];
    scanf("%s",a);
    int len = 0;
    for(int i=0;a[i];i++)
    {
        len++;
    }
    int mid = len/2;
    startmiddle(a,len,mid);
return 0;
}
