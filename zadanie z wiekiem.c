#include <stdio.h>

int main(void) {
    int a;

    printf("wiek: ");
    scanf("%d", &a);

 if(a>=18){
printf("Jest pelnoletnia");
 }
 
 else if (a<18){

 printf("Nie jest pełnoletnia");
 }

    return 0;
}
