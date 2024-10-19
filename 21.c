/*
#include <stdio.h>
#include <math.h>

int id(char a[], char b, int len);
int ten(char str[], int cc, int len);

int main(){
    char str[] = "58F";
    int cc;
    int len = sizeof(str)/sizeof(str[0])-2;
    char symbols[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("Enter number system: ");
    scanf("%d", &cc);
    if(cc < 2){
        printf("Such number system doesn`t exist");
        return 0;
    }
    if(cc > 36){
        printf("Programm doesn`t work with number system >36");
        return 0;
    }
    for(int i = 0; i < len+1; i++){
        if(id(symbols, str[i], 36) >= cc){
            printf("Value can`t be in this number system");
            return 0;
        }
    }
    printf("%d", ten(str, cc, len));
    return 0;

}

int ten(char str[], int cc, int len){
    char symbols[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int total = 0;
    for(int i = len, j = 0; i >= 0; i--, j++){
        total += (int)pow(cc, j) * id(symbols,str[i], 36);
    }
    return total;
}

int id(char a[], char b, int len){
    int j = 0;
    while(a[j] != b) {
        j++;
        if (j == len) {
            return -1;
        }
    }
    if(a[j] == b)
        return j;
}
*/