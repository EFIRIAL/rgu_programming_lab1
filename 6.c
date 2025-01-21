#include <stdio.h>

void minor(int stroka, int stolbec, int n, int matrix[n][n], int result[n-1][n-1]);
int determinant(int n, int mat[n][n]);

int main(){
    int n;
    printf("Enter size of matrix: ");
    scanf("%d", &n);
    int matrix[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("Element [%d][%d] is:", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Matrix: \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", matrix[i][j]);
            if(j+1 == n)
                printf("\n");
        }
    }
    int det = determinant(n, matrix);
    printf("Determinant is %d", det);
    return 0;
}

void minor(int stroka, int stolbec, int n, int matrix[n][n], int result[n-1][n-1]){
    int a = 0, b = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i != stroka && j != stolbec){
                result[a][b] = matrix[i][j];
                b++;
                if(b == n - 1) {
                    b = 0;
                    a++;
                }
            }
        }
    }
}

int determinant(int n, int mat[n][n]){
    if(n == 1)
        return mat[0][0];
    if(n == 2)
        return mat[0][0]*mat[1][1]-mat[0][1]*mat[1][0];
    int det = 0;
    int sign = 1;
    int temp[n-1][n-1];
    for(int i = 0; i < n; i++){
        minor(0, i, n, mat,temp);
        det += sign * mat[0][i] * determinant(n-1, temp);
        sign = -sign;
    }
    return det;
}
