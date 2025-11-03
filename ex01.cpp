#include <iostream>
using namespace std;
sum_array(int* a, int size){
    int suma = 0;
    for(int i = 0; i< size; i++){
        suma += *(a+1);
    }
    return suma;
}
int main(){
    int tab[5]= {8,9,7,6,3}
    cout << sum_array(&tab[0], 5) << endl;
    return 0;
}