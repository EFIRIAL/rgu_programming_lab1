/*
#include <stdio.h>
#include <ctype.h>
int digit(char a);
void sort(char arr[], int len);

int main(){
    char str[] = "wdWSFDCAvjw v2374t72t34 27!!  !392873{].>,^243efc)";
    int len = 0, i = 0, d = 0, a = 0;
    while(str[i] != '\0'){
        if(digit(str[i]))
            d += 1;
        if(isalpha(str[i]))
            a += 1;
        len += 1;
        i++;
    }
    int s = len - d - a;
    char digits[d];
    char *ptr = str;
    i = 0;
    int i1 = 0;
    while(*(ptr + i) != '\0') {
        if (digit(str[i])) {
            digits[i1] = *(ptr + i);
            i1++;
        }
        i++;
    }
    digits[i1] = '\0';
    char bukvs[a];
    i = 0;
    int i2 = 0;
    while(*(ptr + i) != '\0'){
        if(isalpha(str[i])){
            bukvs[i2] = *(ptr + i);
            i2++;
        }
        i++;
    }
    char other[s];
    i = 0;
    int i3 = 0;
    while(*(ptr + i) != '\0'){
        if(!isalpha(str[i]) && !digit(str[i])){
            other[i3] = *(ptr + i);
            i3++;
        }
        i++;
    }
    sort(digits, d);
    sort(other, s);
    sort(bukvs, a);
    char res[len+1];
    int jres = 0;
    for(int j1 = 0; j1 < d; j1++){
        res[jres] = digits[j1];
        jres++;
    }
    for(int j2 = 0; j2 < a; j2++){
        res[jres] = bukvs[j2];
        jres++;
    }
    for(int j3 = 0; j3 < s; j3++){
        res[jres] = other[j3];
        jres++;
    }
    res[jres] = '\0';
    printf("%s", res);
}

int digit(char a){
    if(a == '0' || a == '1' || a == '2' || a == '3' || a == '4' || a == '5' || a == '6' || a == '7' || a == '8' || a == '9')
        return 1;
    else
        return 0;
}

void sort(char arr[], int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - 1; j++) {
            if ((int)arr[j] > (int)arr[j + 1]) {
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
*/