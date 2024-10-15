/*
#include <stdio.h>
#include <string.h>

int lenstr(char s[]);

int main(){
    char s[] = "A B C D E F";
    unsigned long long len1 = strlen(s);
    printf("%llu ", len1);
    int len2 = lenstr(s);
    printf("%d", len2);
    return 0;
}

int lenstr(char s[]){
    int l = 0;
    while(s[l] != '\0')
        l += 1;
    return l;
}
*/