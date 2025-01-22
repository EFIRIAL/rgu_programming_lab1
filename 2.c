#include <stdio.h>
void reverse(char* str, int length);
int main(){
    char s[] = "bal siht gniod etah I";
    int len = sizeof(s)/sizeof(s[0])-1;
    reverse(s, len);
    printf("%s", s);
}

void reverse(char* str, int length){
    for(int i = 0, id = length-1; i < length/2; i++, id--){
        char temp = str[i];
        str[i] = str[id];
        str[id] = temp;
    }
}