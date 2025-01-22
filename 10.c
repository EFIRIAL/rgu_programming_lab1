#include <stdio.h>
int main(){
    int str1, stc1;

    printf("Amount of strok(matrix 1): ");
    scanf("%d", &str1);
    if(str1 <= 0){
        printf("Uncorrect value");
        return 1;
    }

    printf("Amount of stolbcov(matrix 1): ");
    scanf("%d", &stc1);
    printf("\n");
    if(stc1 <= 0){
        printf("Uncorrect value");
        return 1;
    }

    int matrix1[str1][stc1];

    int str2, stc2;
    printf("Amount of strok(matrix 2): ");
    scanf("%d", &str2);
    if(str2 <= 0){
        printf("Uncorrect value");
        return 1;
    }

    printf("Amount of stolbcov(matrix 2): ");
    scanf("%d", &stc2);
    printf("\n");
    if(stc2 <= 0){
        printf("Uncorrect value");
        return 1;
    }

    int matrix2[str2][stc2];
    if(stc1 != str2){
        printf("Matrices cannot be multiplied");
        return 0;
    }
    for(int i = 0; i < str1; i++){
        for(int j = 0; j < stc1; j++){
            printf("Enter matrix 1 element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("\nMatrix 1: \n");
    for(int i = 0; i < str1; i++){
        for(int j = 0; j < stc1; j++){
            printf("%d ", matrix1[i][j]);
            if(j + 1 == stc1)
                printf("\n");
        }
    }
    printf("\n");
    for(int i = 0; i < str2; i++){
        for(int j = 0; j < stc2; j++){
            printf("Enter matrix 2 element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix2[i][j]);
        }
    }
    printf("\nMatrix 2: \n");
    for(int i = 0; i < str2; i++){
        for(int j = 0; j < stc2; j++){
            printf("%d ", matrix2[i][j]);
            if(j + 1 == stc2)
                printf("\n");
        }
    }
    printf("\n");
    int res_matrix[str1][stc2];
    for(int i = 0; i < str1; i++){
        for(int j = 0; j < stc2; j++){
            res_matrix[i][j] = 0;
            for(int c = 0; c < str2; c++) {
                    res_matrix[i][j] += matrix1[i][c]*matrix2[c][j];
            }
        }
    }
    printf("\nResult matrix: \n");
    for(int i = 0; i < str1; i++){
        for(int j = 0; j < stc2; j++){
            printf("%d ", res_matrix[i][j]);
            if(j + 1 == stc2)
                printf("\n");
        }
    }
}
