/*
#include <stdio.h>
void minor(int stroka, int stolbec, int n, int matrix[n][n], int result[n-1][n-1]);
int determinant(int n, int mat[n][n]);
void mat_al(int n,int mat[n][n], int al[n][n]);
int inverse(int n, int mat[n][n], float inv[n][n]);

int main(){
    int n;
    printf("Enter size of matrix:");
    scanf("%d", &n);
    int matrix[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Matrix: \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", matrix[i][j]);
            if(j + 1 == n)
                printf("\n");
        }
    }
    float inv[n][n];
    if(inverse(n, matrix, inv)){
        printf("Inversed matrix: \n");
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                printf("%.1f ", inv[i][j]);
                if(j + 1 == n)
                    printf("\n");
            }
        }
    }
    return 0;
}

void minor(int stroka, int stolbec, int n, int matrix[n][n], int result[n-1][n-1]){
    int a = 0, b = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i != stroka && j != stolbec){
                result[a][b++] = matrix[i][j];
                if(b == n - 1) {
                    b = 0;
                    a++;
                }
            }
        }
    }
}

void mat_al(int n,int mat[n][n], int al[n][n]) {
    if (n == 1) {
        al[0][0] = 1;
        return;
    }
    int sign;
    int temp[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            minor(i, j, n, mat, temp);
            if((i + j) % 2 == 0)
                sign = 1;
            else
                sign = -1;
            al[j][i] = sign * determinant(n-1, temp);
        }
    }
}

int determinant(int n, int mat[n][n]){
    if(n == 1){
        return mat[0][0];
    }
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

int inverse(int n, int mat[n][n], float inv[n][n]) {
    float det = (float)determinant(n, mat);
    if (det == 0) {
        printf("Inversed matrix doesn`t exist");
        return 0;
    }
    int al[n][n];
    mat_al(n,mat, al);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            inv[i][j] = (float)al[i][j] * 1/det;
    return 1;
}
*/