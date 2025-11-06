#include<iostream>
using namespace std;
int my_strlen(const char* s) {
    int a = 0;
    while (*s != '\0') {
        a++;
        s++;
    }
    return l;
}
int main() {
    string s1 = "wedgfjk fnerjtk";
    string s2 = "erfnef wretwf";
    string s3 = "rwef fwerfwef-";
    cout << my_strlen(s1.c_str()) << endl;
    cout << my_strlen(s2.c_str()) << endl;
    cout << my_strlen(s3.c_str()) << endl;
    return 0;
}