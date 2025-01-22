#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void bubblesort(int arr[], int n);

int main(){
    int arr[SIZE];
    for(int i = 0; i < SIZE; i++){
        arr[i] = rand();
    }
    bubblesort(arr, SIZE);
    for(int i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);
}

void bubblesort(int arr[], int n){
    for(int j = 0; j < n-1; j++ ){
        for(int i = 0; i < n-1; i++){
            int temp = arr[i];
            if(arr[i+1] < arr[i]){
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }

        }
    }

}
