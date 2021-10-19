#include <stdio.h>
#include <string.h>

int main(){
    char str[10] = "1234567890";
    int n;
    printf("don't input longer than 10 letters:");
    scanf("%s", &str);
    n = strlen(str);
    if(n<=10){
        printf("your input was %s", str);
    }
    if(n>10){
        printf("!warn your input was %d letters", n);
    }
}
