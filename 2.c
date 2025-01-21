#include <stdio.h>
int main(){
    char s[] = "bal siht gniod etah I";
    int len = sizeof(s)/sizeof(s[0])-1;
    int len_copy = len-1;
    for(int i = 0; i < len/2; i++){
        char temp = s[i];
        s[i] = s[len_copy];
        s[len_copy] = temp;
        len_copy--;
    }
    printf("%s", s);
}
