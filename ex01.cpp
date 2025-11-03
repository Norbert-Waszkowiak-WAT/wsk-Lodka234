#include <iostream>
using namespace std;
int main(){
    int x = 69;
    int* p = &x;
    cout << p << " " << *p << endl;
    *p =67;
    cout << *p << endl;
    return 0;
}