#include <stdio.h>
#include <ctype.h>
int nemain();

int main(){
    char str[] = "Hello world!";
    char *ptr = str;
    int len = 0;
    while(*ptr != '\0' && *(ptr + 1) != '\0'){
        *ptr = toupper(*ptr);           //меняет по нечетным местам
        ptr += 2;
    }
    printf("%s\n", str);
    nemain();
    return 0;
}

int nemain(){
    char str[] = "Hello world!";
    char *ptr1 = str, *ptr2 = str;
    int len = 0;
    while(*ptr1 != '\0' && *(ptr1 + 1) != '\0') {                      //меняет по нечетным индексам
        len += 1;
        ptr1++;
    }
    for(int i = 1; i < len; i += 2)
        *(ptr2 + i) = toupper(*(ptr2 + i));
    printf("%s", str);
    return 0;
}

