#include<stdio.h>
int main(int argc, char* argv[])
{
    printf("You have entered %d arguments:\n", argc);

    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

    printf("File name: %s\n", argv[0]);
    if(argc < 2)
    {
        printf("No argument passed.\n");
    }
    else
    {
        printf("Argument 1: %s\n", argv[1]);
    }

    return 0;
}
