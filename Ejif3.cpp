#include <iostream>
using namespace std;

int main(){
    int l250,l300,l,r1,r2;
    l250=250;
    l300=300;
    cout<<"¿Cuántos libros lleva? "<<endl;
    cin>>l;
    if (l<=0)
    {
        cout<<"Error 34"<<endl;
    }
    
    else if (l>5)
    {
        r1=l*l250;
        cout<<"El total es de $"<<r1<<endl;
    }
    else{
        r2=l*l300;
        cout<<"El total es de $"<<r2<<endl;
    }
    
}