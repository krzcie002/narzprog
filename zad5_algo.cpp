#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int minimum;
    int tab[8] = {5, 2, 6, 4, 8, 1, 7, 3};
    for(int i=0;i<7;i++){
        minimum = i;
        for(int j=i;j<8;j++){
            if(tab[j]<tab[minimum]){ //�eby by�o na odwr�t zmieni� znak
                minimum = j;
            }
        }
        swap(tab[minimum], tab[i]);
    }
    for(int z=0;z<=7;z++){
        cout<<tab[z]<<" ";
    }

    return 0;
}
