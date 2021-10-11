#include <stdio.i>
int main(){
    char str[] = "1234567890";
    printf("dont input longer than 9 letters:");
    scanf("%s", &str);
    printf("%s", str);
}
