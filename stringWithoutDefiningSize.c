#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Hihinih";

    printf("size of str : %ld ",sizeof(str));
    printf(" %s  ",str);
    str[7]='k';
    str[4]='\0';
    printf(" %s  ",str);
    printf("size of str : %ld",sizeof(str));
    return 0;
}