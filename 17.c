#include <stdio.h>
#include <string.h>

char *catstr(char a[], char b[], char res[]);

int main(){
    char str1[] = "Hello ";
    char str2[] = "world!";
    //printf("%s\n", strcat(str1, str2));
    int len = strlen(str1) + strlen(str2)+1;
    char res[len];
    catstr(str1, str2, res);
    printf("%s", res);
    return 0;
}

char *catstr(char a[], char b[], char res[]){
    int i = 0;
    char *ptr_a = a, *ptr_b = b;
    while(*ptr_a != '\0'){
        res[i] = *ptr_a;
        i++;
        ptr_a++;
    }
    while(*ptr_b != '\0'){
        res[i] = *ptr_b;
        i++;
        ptr_b++;
    }
    res[i] = '\0';
    return res;
}
