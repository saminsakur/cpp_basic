#include <iostream>
using namespace std;

int maint(){
    int ex = 9;
    switch (ex){
        case 18:
            cout<<"adult";
            break;
        case 10:
            cout<<"Kid";
            break;
        case 12:
            cout<<"eligable";
            break;
        default:
            cout<<"Not allowed";
            break;
    }
    return 0;
}