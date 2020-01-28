#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int x=0,y=0;
    char arr[1000];
    gets(arr);
    for(int i=0;i<strlen(arr);i++)
    {
        if(arr[i]=='L')
            x--;
        else if(arr[i]=='R')
        {
            x++;
        }
        else if(arr[i]=='U')
        {
            y++;
        }
        else if(arr[i]=='D')
        {
            y--;
        }
    }
    printf("%d %d",x,y);
    return 0;
}
