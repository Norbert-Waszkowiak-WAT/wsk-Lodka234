#include <iostream>
using namespace std;
void min_max(int* arr, int size n, int* min, int* max){
    int* min = arr[0];
    int* max = arr[0];
    for(int i = 0; i < size; i++){
        if(arr[i]< *min) *min = arr[i];
        if(arr[i]> *max) *max = arr[i];
    }
    return min_max;
}
int main(){
    int tab1[5] = {1,2,3,4,5};
    int tab2[5] = {6,7,8,9,5};
    int min = -1;
    int max = -1;
    return 0;
}