#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Ingrese un número: "<<endl;
    cin>>n;

    if(n%2==0) {
        cout<<"El número es par"<<endl;
    }  
    else
        cout<<"El número es impar"<<endl;
}