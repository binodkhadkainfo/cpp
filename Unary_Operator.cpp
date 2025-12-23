#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b = a--;

    cout<<"a= " <<a <<endl; //10
    cout<<"b =" <<b <<endl; //9
    return 0;
}