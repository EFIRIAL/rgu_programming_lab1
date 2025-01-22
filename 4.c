#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LENGTH 15
int max(int arr[], int n);
int min(int arr[], int n);
int id(int a,int arr[], int n);

int main(){
    srand(time(NULL));
    int arr[LENGTH];
    int max_value = -10001, min_value = 10001;
    int max_id = -1, min_id = 15;
    for(int i = 0; i < LENGTH; i++){
        arr[i] = rand()%20000-10000;
    }
    printf("Array: ");
    for(int i = 0; i < LENGTH; i++)
        printf("%d ", arr[i]);
    printf("\n");
    for(int i = 0; i < LENGTH; i++){
        if(arr[i] > max_value){
            max_value = arr[i];
            max_id = i;
        }
        if(arr[i] < min_value){
            min_value = arr[i];
            min_id = i;
        }
    }
    printf("Maximum: %d\n", max_value);
    printf("Minimum^ %d\n", min_value);
    printf("Id of maximum: %d\n", max_id);
    printf("Id of minimum: %d\n", min_id);
    return 0;
}


