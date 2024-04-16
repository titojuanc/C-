#include <iostream>
using namespace std;

int main(){
    float n1, n2;

    cout<<"Ingrese 2 números"<<endl;
    cin>>n1;
    cin>>n2;
    if (n1>n2)
    {
        cout<<n1<<" es mayor que "<<n2<<endl;
    }
    else if (n2>n1)
    {
        cout<<n2<<" es mayor que "<<n1<<endl;
    }
    else{
        cout<<n1<<" y "<<n2<<" son iguales"<<endl;
    }
}