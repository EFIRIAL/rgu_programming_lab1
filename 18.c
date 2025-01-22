#include <stdio.h>
int main(){
    int n, m;
    printf("Enter amount of strok: ");
    scanf("%d", &n);
    if(n <= 0){
        printf("Uncorrect value");
        return 1;
    }
    printf("Enter amount of stolbcov: ");
    scanf("%d", &m);
    if(m <= 0){
        printf("Uncorrect value");
        return 1;
    }
    int matrix[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("Enter element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nMatrix: \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", matrix[i][j]);
            if(j + 1 == m)
                printf("\n");
        }
    }
    printf("\n");
    int new_matrix[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            new_matrix[i][j] = matrix[j][i];
        }
    }
    printf("Transposed matrix: \n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", new_matrix[i][j]);
            if(j + 1 == n)
                printf("\n");
        }
    }
}
