#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void zad1(){
    int tab[5];
    printf("prosze podac liczby:\n");
    for(int i = 0; i < 5; i++){
        scanf("%d",&tab[i]);
    }
    for(int i = 4; i >= 0; i--){
        printf("\n%d",tab[i]);
    }
}

void zad2(){
    int maciez[3][3];
    printf("prosze podac liczby:\n");
    for(int i = 0; i < 3; i++){
        printf("wiersz %d\n",i+1);
        for(int j = 0; j < 3; j++){
            scanf("%d",&maciez[i][j]);
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
             printf("%d ",maciez[i][j]);
        }
        printf("\n");
    }
}


int zad3(){
    int a, b;
    int *wska = &a, *wskb = &b;

    printf("prosze podac liczbe a: \n");
    scanf("%d",&a);

    printf("prosze podac liczbe b: \n");
    scanf("%d",&b);

    return *wska+*wskb;
}

void zad4(){
     int tab[10];
     int *wska, *wskb;
    printf("prosze podac liczby:\n");
    for(int i = 0; i < 10; i++){
        scanf("%d",&tab[i]);
    }

    //sortowanie
    for(int i = 0; i<10; i++){
       for(int j = 1; j<10; j++){
            *wska = &tab[j-1];
            *wskb = &tab[j];
          if(*wskb < *wska) {
                tab[j] = *wska;
                tab[j-1] = *wskb;
          }
       }
    }

      for(int i = 0; i < 10; i++){
        printf("\n%d",tab[i]);
    }
}

void zad5tab(int *wsk,int *wskTab, int *min, int *max){
    *wsk += *wskTab;
    if(*wskTab < *min) *min = *wskTab;
    if(*wskTab > *max) *max = *wskTab;
}
void zad5tabZ(float *wsk,float *wskTab, float *min, float *max){
    *wsk += *wskTab;
    if(*wskTab < *min) *min = *wskTab;
    if(*wskTab > *max) *max = *wskTab;
}

void zad5(){

    //dodanie losowoœci
   srand(time(NULL));

    //tablica w zakresie 0 - 100
    int tab[10];
    int *wskTab = &tab[0];
    int wynik = 0, min = 100, max = 0;

    printf("tablica liczb z zakresu 0 - 100:\n");

    for (int i = 0; i < 10; i++){
        //stworzenie losowego elementu z zakresu 0 - 1
        tab[i] = rand()%101;

        //wypisanie elementu
        printf("%d\n",tab[i]);

        //dodawanie elementu do sumy
        zad5tab(&wynik,&tab[i],&min,&max);
    }

    printf("suma: %d\nwartosc minimalna: %d\nwartosc maksymalna %d\n",wynik, min, max);


    wskTab += 4;
    printf("5 element tablicy: %d\n",*wskTab);
    wskTab += 5;
    printf("10 element tablicy: %d\n",*wskTab);

    //tablica w zakresie 0 - 1
    float tabZ[10];
    float wynikZ = 0, minZ = 1, maxZ = 0;
    float *wskTabZ = &tabZ[0];

    printf("\ntablica liczb z zakresu 0 - 1:\n");

    for (int i = 0; i < 10; i++){
        //stworzenie losowego elementu z zakresu 0 - 1
        tabZ[i] = rand()%101/100.0;

        //wypisanie elementu
        printf("%.2f\n",tabZ[i]);

        //dodawanie elementu do sumy
        zad5tabZ(&wynikZ,&tabZ[i],&minZ,&maxZ);
    }
    printf("suma: %.2f\nwartosc minimalna: %.2f\nwartosc maksymalna %.2f\n",wynikZ, minZ, maxZ);
    wskTabZ += 4;
    printf("5 element tablicy: %.2f\n",*wskTabZ);
    wskTabZ += 5;
    printf("10 element tablicy: %.2f\n",*wskTabZ);
}

int main(){

    printf("%d",zad3());
    return 0;
}
