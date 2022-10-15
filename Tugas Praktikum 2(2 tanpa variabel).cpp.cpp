#include<iostream>
using namespace std;

int main (){
    int x = 10, y = 2, temp ;
    cout<<"Nilai X = "<<x<<" Dan Y = "<<y<<endl;
    x = x+y;
    y = x-y;
    x = x-y;

    cout<<" Nilai Setelah Ditukar X = "<<x<<endl;
    cout<< " Nilai Setelah Ditukar Y = " <<y<<endl;

    return 0;
}
