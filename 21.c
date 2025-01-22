#include <stdio.h>
#include <string.h>
#include <math.h>

int id(char a[], char b);
int ten(char str[], int cc, int len);

int main(){
    char symbols[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char str[100];
    printf("Enter your number: ");
    fgets(str, sizeof(str), stdin);
    int cc;
    int len = strlen(str);
    if(str[len-1] == '\n') {
        str[len-1] = '\0';
        len--;
    }
    for(int i = 0; i < len; i++){
        if(id(symbols, str[i]) == -1){
            printf("There is no such digits");
            return 1;
        }
    }
    printf("Enter number system: ");
    scanf("%d", &cc);
    for(int i = 0; i < len; i++){
        if(id(symbols, str[i]) >= cc){
            printf("Value can`t be in this number system");
            return 1;
        }
    }
    if(cc < 2){
        printf("Such number system doesn`t exist");
        return 0;
    }
    if(cc > 36){
        printf("Programm doesn`t work with number system >36");
        return 0;
    }
    printf("%d", ten(str, cc, len));
    return 0;

}

int ten(char str[], int cc, int len){
    char symbols[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int total = 0;
    for(int i = len-1, j = 0; i >= 0; i--, j++){
        total += (int)pow(cc, j) * id(symbols,str[i]);
    }
    return total;
}

int id(char a[], char b){
    int j = 0;
    while(a[j] != '\0') {
        if(a[j] == b)
            return j;
        j++;
    }
    return -1;
}
