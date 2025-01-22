#include <stdio.h>
void nemain();

int main(){
    int arr[] = {1, 12, 4, 5, 63, 9, 8, 10, 22, 14};
    int len_arr = sizeof(arr)/sizeof(arr[0]);
    printf("Array:\n");
    for(int i = 0; i < len_arr; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    int len_n = len_arr / 2;
    int new[len_n], c = 0;
    for(int i = 1; i < len_arr; i+= 2) {
        new[c++] = arr[i];         //по нечетным индексам
    }
    printf("New array: ");
    for(int i = 0; i < len_n; i++)
        printf("%d ", new[i]);
    //nemain();
    return 0;
}

void nemain(){
    int arr[] = {1, 12, 4, 5, 63, 9, 8, 10, 22, 14};
    int len_arr = sizeof(arr)/sizeof(arr[0]);
    int len_n = len_arr / 2;                //по нечетным местам
    int new[len_n], c = 0;
    for(int i = 0; i < len_arr; i+= 2) {
        new[c] = arr[i];
        c++;
    }
    printf("\nNew array: ");
    for(int i = 0; i < len_n; i++)
        printf("%d ", new[i]);
}
