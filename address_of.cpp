#include<iostream>

int main(){
    int x = 8;
    std::cout<<&x<<std::endl;
    int *y = new int;
    *y = 5;
    std::cout<<*y;

}
