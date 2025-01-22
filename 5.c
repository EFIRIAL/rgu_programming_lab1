#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LENGTH 15
void sort(int arr[], int len);
int binary(int arr[], int len, int isk);

int main(){
    srand(time(NULL));
    int len = LENGTH;
    int arr[LENGTH];
    int isk;
    for(int i = 0; i < len; i++){
        arr[i] = rand()%100;
    }
    sort(arr, len);
    printf("Array: ");
    for(int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\nEnter value to find it: ");
    scanf("%d", &isk); //вводим искомое число
    int id_isk = binary(arr, len, isk);
    if(id_isk != -1)
        printf("Id of this element is %d", id_isk);
    else
        printf("This element is not exist in this array");
    return 0;
}


void sort(int arr[], int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int binary(int arr[], int len, int isk) {
    int left = 0, right = len - 1;
    while (left <= right) {
        int mid = left + ((right - left) / 2);
        if (arr[mid] == isk)
            return mid;
        else if (arr[mid] < isk)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

