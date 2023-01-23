#include <stdio.h>
#include <stdlib.h>

#define ROZMIAR 30

struct Zbiorka{
        char imie[ROZMIAR];
        char grupa[ROZMIAR];
        float kwota;
    };

struct Kolo{
    int numer;
    char nazwa[ROZMIAR];
    int a;
    int b;
    float r1;
};

//zadanie 1
void zad1(){
    int n;
    puts("podaj ile osob chcesz dodac do listy.");
    scanf("%d",&n);

    struct Zbiorka zbiorka[n];
    for(int i = 0;i < n;i++){
        printf("podaj dane osoby nr %d w kolejnosci: imie, nazwa grupy, kwota\n",i+1);
        scanf("%s",&zbiorka[i].imie);
        scanf("%s",&zbiorka[i].grupa);
        scanf("%f",&zbiorka[i].kwota);
    }
    printf("wpisane osoby:\n");
    for(int i = 0;i < n;i++){
        printf("\nosoba nr %d: imie: %s, grupa: %s, kwota: %.2f\n",i+1,zbiorka[i].imie,zbiorka[i].grupa,zbiorka[i].kwota);
    }
}

//zadanie 2
void zad2(){
    int punktA, punktB;
    struct  Kolo k1 = {
        1,
        "kolo1",
        5,
        8,
        8.0
    };

    struct  Kolo k2 = {
        2,
        "kolo2",
        2,
        4,
        3.0
    };

    struct  Kolo k3 = {
        3,
        "kolo3",
        8,
        2,
        5.0
    };

    printf("prosze podac wsporzedne a i b:\n");

    scanf("%d",&punktA);
    scanf("%d",&punktB);

    float zasieg1 = (float)k1.a-k1.r1;
    float zasieg2 = (float)k1.a+k1.r1;

    if(punktA >= zasieg1 && punktA <= zasieg2 && punktB >= zasieg1 && punktB <= zasieg2){
        printf("gites");
    }
    else{
        printf("nie gites");
    }
}
int main(){
    zad2();
    return 0;
}
