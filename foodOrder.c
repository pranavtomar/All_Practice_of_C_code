#include <stdio.h>

int main()
{
    char type;
    int quant;
    int dist;
    int price;
    int deliCh;
    printf("Enter type of food, Quantity, Distance: ");
    scanf("%c %d %d", &type, &quant, &dist);
    if(type == 'V'){
        price = 75;
    }else if(type == 'N'){
        price = 125;
    }else{
        printf("Invalid Input");
        return 1;
    }
    
    if(dist <= 3){
        deliCh = 0;
    }else if(dist > 3 && dist < 10){
        deliCh = (dist-3)*15;
    }else{
        deliCh = 15*7 + (dist - 10)*20;
    }
    int totalPrice = quant*price + deliCh;
    printf("Final bill: %d",totalPrice);
}

