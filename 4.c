#include <stdio.h>
#include <stdlib.h>
int max(int arr[], int n);
int min(int arr[], int n);
int id(int a,int arr[], int n);

int main(){
    int len;
    printf("Enter length of array: ");
    scanf_s("%d", &len);
    int arr[len];
    for(int i = 0; i < len; i++){
        arr[i] = rand()%20000-10000;
    }
    printf("Array: ");
    for(int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    int maximum = max(arr, len);
    printf("\n");
    printf("Maximum: %d\n", maximum);
    int minimum = min(arr, len);
    printf("Minimum: %d\n", minimum);
    int id_min = id(minimum, arr,len);
    int id_max = id(maximum, arr,len);
    printf("Id of maximum: %d\nId of minimum: %d", id_max, id_min);
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

int id(int a,int arr[], int len) {
    for (int i = 0; i < len; i++) {
        if (arr[i] == a) {
            return i;
        }
    }
    printf("There is no such variables in this array");
    return -1;
}



