#include <stdio.h>
#include <string.h>




void strCharge()
{
    char name [7];
    int code;
    printf("Please insert your name user: ");
    gets(name);
    fflush(stdin);
    printf("Please insert your name code");
    scanf("%i",&code);
    printf("User name: %s User code: %i ", name , code);

}
int main ()
{
    strCharge();
}