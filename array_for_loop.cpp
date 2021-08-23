#include <iostream>

int main(){
    int MyArr[5];
    for(int i = 0; i<5; i++){
        MyArr[i] = 42;
        std::cout << i << " : " << MyArr[i] << std::endl;
    }
}