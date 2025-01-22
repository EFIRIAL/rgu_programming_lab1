#include <stdio.h>

int max(int arr[], int len);
int min(int arr[], int len);
int main(){
    int count = 0;
    FILE *file = fopen("C:/Users/Sirgay/CLionProjects/16octlab/txt/array.txt", "r");
    if(file == NULL){
        printf("Open error");
        return 0;
    }
    int temp;
    while (fscanf(file, "%d", &temp) == 1) {
        count++;
    }
    if(count == 0){
        printf("File is empty");
        fclose(file);
        return 1;
    }
    int arr[count];
    rewind(file);
    for(int i = 0; i < count; i++)
        fscanf(file, "%d", &arr[i]);
    printf("Array:\n");
    for(int i = 0; i < count; i++)
        printf("%d ", arr[i]);
    printf("\nMin value of array is %d\n", min(arr, count));
    printf("Max value of array is %d", max(arr, count));
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
