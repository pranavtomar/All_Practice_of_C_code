#include <stdio.h>

int main()
{
    // char ch[5] = "Alok";
    // printf("%d  ",ch[4]);
    // ch[5] = 'a';
    // printf("%d",ch[5]);
    
    int arr[5] = {80,90,75,54};
    printf("%ld ",sizeof(arr));
    printf("%d ",arr[3]);
    printf("%d ",arr[2]);
    arr[4] = 20;
    printf("%d ",arr[4]);
    printf("%d ",arr[5]);
    return 0;
    
    // int arr[9] = {1,2,88,66,69,43,4,84,99};
    // for(int i = 0; i < 9; i++){
    //     for(int j = i+1; j < 9; j++){
    //         if(arr[j] > arr[i]){
    //             int temp = arr[j];
    //             arr[j] = arr[i];
    //             arr[i] = temp;
    //         }
    //     }
    // }
    
    // for(int i = 0; i < 9; i++){
    //     printf("%d ",arr[i]);
    // }
    
    
}
