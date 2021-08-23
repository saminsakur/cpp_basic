#include <iostream>
using namespace std;

int mark = 70;

int main() {
    if (mark >= 80){
        cout<<"A+\n";
    }else if (mark>=50){
        cout<<"passed\n";
    }else {
        cout<<"FAIL!\n";
    }
}