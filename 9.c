#include <stdio.h>
void sort(double arr[], int len);

int main(){
    double arr[] = {1.5, 20.09, 14.73, 53.2,27.93, 7.14, 8.59, 14.4, 18.329, 91.91, 27.93, 8.59, 1.5};
    int count = 1, len = sizeof(arr)/sizeof(arr[0]);
    sort(arr, len);
    printf("Sorted array: ");
    for(int i = 0; i < len; i++){
        printf("%.3lf ", arr[i]);
    }
    for(int i = 1; i < len; i++){
        if(arr[i] != arr[i-1])
            count += 1;
    }
    printf("\n");
    double new[count];
    int c = 0;
    for(int i = 0; i < len; i++){
        if(arr[i] != arr[i-1]) {
            new[c] = arr[i];
            c++;
        }
    }
    printf("Sorted set of array values: ");
    for(int i = 0; i < count; i++)
        printf("%.3lf ", new[i]);
}

void sort(double arr[], int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                double temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
