/*
#include <stdio.h>
#include <string.h>

char *strf(char a[], char b[]);

int main(){
    char *a = strstr("Hello world", "world");
    printf("%s\n", a);
    char *a1 = strf("Hello world", "world");
    printf("%s", a1);
}

char *strf(char a[], char b[]){
    if(*b == '\0')
        return (char *)b;
    for(int i = 0; a[i] != '\0'; i++){
        int j = 0;
        while(b[j] != '\0' && a[i+j] == b[j])
            j++;
        if(b[j] == '\0')
            return (char *)b;
    }
    return NULL;
}
*/