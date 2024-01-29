#include <stdio.h>

int main()
{
    char op;
    int a, b, c;
    printf("Enter opertor: ");
    scanf("%c",&op);
    printf("Enter value of a and b: ");
    scanf("%d%d",&a, &b);
    
    
    switch(op){
        case '+':
            c = a+b;
            break;
        case '-':
            c = a-b;
            break;
        case '*':
            c = a*b;
            break;
        case '/':
            c = a%b;
            break;
        case '%': 
            c = a%b;
            break;
        default:
            printf("Invalid Input");
            break;
    }
    printf("%d",c);
}

