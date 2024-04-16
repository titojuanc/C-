#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Ingrese un número"<<endl;
    cin>>num;

    if (num<0)
    {
        num=num*(-1);
    }
    
    if(num%2==0)
    {
        cout<<"Par :)"<<endl;
    }
    else
    {
        cout<<"Impar ;("<<endl;
    }
    
}