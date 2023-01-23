#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

bool pierwsza(int liczba){
    if (liczba < 2){
        return false;}
    for(int i=2;i<=sqrt(liczba);i++){
        if(liczba%i==0){
            return false;
        }
    }
    return true;
}

int main()
{
    //Zadanie 7
    int liczba;
    cout<<"Podaj liczbe to sprawdzenia"<<endl;
    cin>>liczba;
    if(pierwsza(liczba)==true){
        cout<<"Liczba jest pierwsza"<<endl;
    }else{
        cout<<"Liczba nie jest pierwsza";
    }
    /*Zadanie 1
    int a, b, c, obw, pole;
    cout<<"Podaj boki trojkata"<<endl;
    cin>>a>>b>>c;
    if(a+b>c && a+c>b && b+c>a){
        cout<<"Podane boki tworza trojkat"<<endl;
        obw = a + b + c;
        cout<<"Obwod trojkata wynosi: "<<obw<<endl;
        obw = obw/2;
        pole = sqrt(obw*(obw-a)*(obw-b)*(obw-c));
        cout<<"Pole trojkata wynosi: "<<pole<<endl;
    }else{
        cout<<"Podane boki nie tworza trojkata"<<endl;
    }
    */
    /*Zadamnie 3
    int n, a=0, b=1, stare_b=0;
    cout<<"Program wypisujacy n pierwszych znakow ciagu Fibonacciego"<<endl;
    cout<<"Podaj n: ";
    cin>>n;
    for (int i=0;i<n;i++){
        cout<<" "<<b;
        stare_b = b;
        b = a + b;
        a = stare_b;
    }
    */
    /*Zadanie 4
    int a, b, suma, roznica, iloczyn, iloraz;
    cout<<"Podaj wartosc liczb"<<endl;
    cin>>a>>b;
    suma = a + b;
    roznica = a - b;
    iloczyn = a * b;
    cout<<"Suma liczb wynosi "<<suma<<endl;
    cout<<"Roznica liczb wynosi "<<roznica<<endl;
    cout<<"Iloczyn liczb wynosi "<<iloczyn<<endl;
    if (b == 0){
        cout<<"Nie mozna dzielic przez zero!"<<endl;
    }else{
        iloraz = a / b;
        cout<<"Iloraz liczb wynosi "<<iloraz<<endl;
    }
    */
   /*Zadanie 5
    int liczba, proba=0, pretender;
    srand(time(NULL));
    liczba = (rand() % 15) + 1;
    cout<<"Zgadnij liczbe z zakresu <1;15>"<<endl;
    do {
        cout<<"Podaj pretendera"<<endl;
        cin >>pretender;
        proba++;
        if (pretender > 15 || pretender < 1 ){
                cout<<"Pretender wychodzi poza zakers!"<<endl;
        }else{
            if (liczba > pretender){
                cout<<"Za mala!"<<endl;
                cout<<" To byla twoja "<<proba;
                cout<<" proba"<<endl;
            }else if(liczba < pretender) {
                cout<<"Za duza!"<<endl;
                cout<<" To byla twoja "<<proba;
                cout<<" proba"<<endl;
            }
        }
    }
    while(liczba != pretender);
    cout<<"Zgadles liczbe w "<<proba;
    cout<<" prob"<<endl;
*/
    
    return 0;
}

