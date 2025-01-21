#include <stdio.h>
#include <stdlib.h>

void bubblesort(int arr[], int n);

int main(){
    int a;
    scanf("%d", &a);
    int arr[a];
    for(int i = 0; i < a; i++){
        arr[i] = rand();
    }
    bubblesort(arr, a);
    for(int i = 0; i < a; i++)
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
