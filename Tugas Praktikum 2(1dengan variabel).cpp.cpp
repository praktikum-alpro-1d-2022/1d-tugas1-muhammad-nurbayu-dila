#include<iostream>
using namespace std;

int main (){
    int x=27, y=9, temp;
    cout<<"Nilai Awal X = "<<x<<" Dan Y = "<<y<<endl;
    temp = x;
    x = y ;
    y = temp ;
    cout<<"Setelah Ditukar X = "<<x<<" Dan Y =  " <<y<<endl;
    cout<<endl;

    return 0 ;

}
