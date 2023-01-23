#include <iostream>

using namespace std;

int main()
{
    int tab[8]={7, 3, 5, 1, 6, 4, 8, 2};
    for(int j=0;j<7;j++){
        for(int i=0;i<7;i++){
            if(tab[i]<tab[i+1]){
                swap(tab[i], tab[i+1]);
            }
        }
    }
    for(int z=0;z<8;z++){
        cout<<tab[z]<<" ";
    }

    return 0;
}
