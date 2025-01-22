#include <stdio.h>
int cc(int a, int b, char res[]);

int main(){
    int a, b;
    printf("Enter the number: ");
    scanf("%d", &a);
    char res[100];
    printf("What number system should i convert to?\n");
    scanf("%d", &b);
    if(b > 36 || b < 2){
        printf("Programm doesn`t work with this number system");
        return 1;
    }
    int g = cc(a, b, res);
    for(int i = g-1, j = 0; i >= j; i--, j++) {
        char temp = res[i];
        res[i] = res[j];
        res[j] = temp;
    }

    printf("We get this number: %s", res);
    return 0;
}

int cc(int a, int b, char res[]){
    char symbols[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    if(b > 36 || b < 2){
        printf("Programm doesn`t work with this number system");
        return -1;
    }
    int i = 0;
    while(a > 0){
        int ostatok = a % b;
        res[i] = symbols[ostatok];
        i++;
        a /= b;
    }
    res[i] = '\0';
    return i;
}
