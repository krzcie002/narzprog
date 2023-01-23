#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /* //Zadanie 1
    int i, tab[5];
    for(i=0;i<5;i++){
        printf("Podaj %d liczbe \n",i+1);
        scanf("%d", &tab[i]);
    }
    printf("Wpisane liczby w odwrotnej kolejnosci: \n");
    printf("[");
    for(i=4;i>=0;i--){
        printf("%d ", tab[i]);
    }
    printf("]");

    //Zadanie 2
    int i, j, tab[3][3], licznik=1;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Podaj %d liczbe \n",licznik);
            scanf("%d", &tab[i][j]);
            licznik++;
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d", tab[i][j]);
        }
        printf("\n");
    }

    //Zadanie 3
    int a, b;
    int *wskaa=&a;
    int *wskab=&b;
    printf("Podaj wartosc pierwszej liczby\n");
    scanf("%d",&a);
    printf("Podaj wartosc drugiej liczby\n");
    scanf("%d",&b);
    printf("Suma tych liczb wynosi %d.",*wskaa+*wskab);
    */

    //Zadanie 5
    int i, j, cal[10];
    float rzecz[10];
    srand(time(0));
    for(i=0;i<10;i++){
        cal[i] = 50 + rand() % 30;
    }
    for(i=0;i<10;i++){
        printf
    }
    return 0;
}
