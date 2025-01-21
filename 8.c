#include <stdio.h>
int main(){
    int arr[] = {1, 12 ,6, 7, 74, 5, 33, 11, 28, 9, 67, 81};
    int count = 0;
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < len; i++){
        if(arr[i] % 2 == 0)
            count += 1;
    }
    int new[count], a = 0;
    for(int j = 0; j < len; j++){
        if(arr[j] % 2 == 0) {
            new[a] = arr[j];
            a++;
        }
    }
    printf("Array of even digits: ");
    for(int i = 0; i < count; i++)
        printf("%d ", new[i]);
}
