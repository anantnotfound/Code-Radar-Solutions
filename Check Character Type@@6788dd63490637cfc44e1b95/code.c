#include <stdio.h>
int main() {
    char c;
    scanf("%c" , &c);
    if((c >= 'A' && c <='Z') || (c >= 'a' && c <= 'z')){
        printf((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') ? "Vowel" : "constant");
    } else if (c >= '0' && c <= '9') {
        printf("Digit");
    } else {
        printf("Special Character");
    }  
    return 0;
}
