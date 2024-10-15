/*
#include <stdio.h>

int max(int arr[], int len);
int min(int arr[], int len);

int main(){
    int arr[10];
    FILE *file = fopen("array.txt", "r");
    if(file == NULL){
        printf("error");
        return 0;
    }
    for(int i = 0; i < 10; i++)
        fscanf(file, "%d", &arr[i]);
    printf("Min value of array is %d\n", min(arr, 10));
    printf("Max value of array is %d", max(arr, 10));
    fclose(file);
    return 0;
}

int max(int arr[], int len){
    int max = -11000;
    for(int i = 0; i < len; i++){
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}
int min(int arr[], int len){
    int min = 11000;
    for(int i = 0; i < len; i++){
        if(arr[i] < min)
            min = arr[i];
    }
    return min;
}
*/