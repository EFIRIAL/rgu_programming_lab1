/*
#include <stdio.h>
void sort(int arr[], int len);
int binary(int arr[], int len, int isk);

int main(){
    int arr[] = {1, 23, 5, 3, 10, 12, 8, 74, 81};
    int len = sizeof(arr)/sizeof(arr[0]);
    sort(arr, len);
    printf("Array: ");
    for(int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    int isk;
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
*/
