int main(){
    int a1[10][10];
    int a2[10][10];
    int rows, cols;
    
    printf("Enter the rows:\n");
    scanf("%d",&rows);
    printf("Enter the cols:\n");
    scanf("%d",&cols);
    printf("Enter a1[][] values:\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            scanf("%d",&a1[i][j]);
        }
    }
    printf("Enter a2[][] values:\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            scanf("%d",&a2[i][j]);
        }
    }
    
    printf("Sum of matrix:\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%d ",a2[i][j]+a1[i][j]);
        }
        printf("\n");
    }
    
    printf("Subtraction of matrix:\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%d ",a2[i][j]-a1[i][j]);
        }
        printf("\n");
    }
    
    printf("Multiplication of matrix:\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%d ",a2[i][j]*a1[i][j]);
        }
        printf("\n");
    }
}