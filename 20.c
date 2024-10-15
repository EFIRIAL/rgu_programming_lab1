/*
#include <stdio.h>

int cc(int a, int b, char res[]);

int main(){
    int a = 1234, b;
    char res[100];
    printf("What number system should i convert to?\n");
    scanf("%d", &b);
    int g = cc(a, b, res);
    for(int i = g-1; i >= 0; i--)
        printf("%c", res[i]);
    return 0;
}

int cc(int a, int b, char res[]){
    char symbols[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    if(b > 36){
        printf("Programm doesn`t work with number system >36");
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
*/