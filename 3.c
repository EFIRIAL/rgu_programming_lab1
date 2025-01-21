#include <stdio.h>
void change_values(int *a, int *b);

int main(){
    int a, b;
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);
    change_values(&a, &b);
    printf("a is %d \nb is %d", a, b);
}


void change_values(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
