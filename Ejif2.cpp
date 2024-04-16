#include <iostream>
using namespace std;

int main(){

    float n1;
    float n2;
    cout<<"Ingrese un número: "<<endl;
    cin>>n1;
    cout<<"Ingrese otro número: "<<endl;
    cin>>n2;
    float suma=n1+n2;
    float resta=n1-n2;
    float multi=n1*n2;
    cout<<"La suma da: "<<suma<<endl;
    cout<<"La resta da: "<<resta<<endl;
    cout<<"La multiplicación da: "<<multi<<endl;
    if(n2==0){
        cout<<"La división no se puede realizar"<<endl;
    }
    else{
        float div=n1/n2;
        cout<<"La división da: "<<div<<endl;
    }
}