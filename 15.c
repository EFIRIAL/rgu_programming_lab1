#include <stdio.h>
#include <ctype.h>

int main(){
    char str[] = "wdWSFDCAvjw v2374t72t34 27!!  !392873{].>,^243efc)";
    printf("String: %s\n", str);
    char *main_pointer = str;
    for (char *ptr = str; *ptr != '\0'; ptr++) {
        if (isdigit(*ptr)) {
            *main_pointer = *ptr;
            main_pointer++;
        }
    }
    for (char *ptr = str; *ptr != '\0'; ptr++) {
        if (isalpha(*ptr)) {
            *main_pointer = *ptr;
            main_pointer++;
        }
    }
    for (char *ptr = str; *ptr != '\0'; ptr++) {
        if (!isdigit(*ptr) && !isalpha(*ptr)) {
            *main_pointer = *ptr;
            main_pointer++;
        }
    }
    *main_pointer = '\0';
    printf("New string: %s", str);
}



