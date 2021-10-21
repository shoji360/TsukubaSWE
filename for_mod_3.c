#include <stdio.h>
int main(){
    char str[9] = "123456789";
    printf("dont input longer than 9 letters:");
    scanf("%s", &str);
    printf("%s", str);
}
