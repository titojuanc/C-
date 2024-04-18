#include <iostream>
using namespace std;

int main(){

string pal_comas="" , aux="";
cout<<"Ingrese una palabra con comas: "<<endl;
cin>>pal_comas;

for(int i=0 ; i<pal_comas.length() ; i++ ){
    if(pal_comas[i]!=','){
        aux=aux+pal_comas[i];
    }
    else{
        aux=aux+" ";
    }
}
cout<<"Su palabra sin comas es: "<<aux<<endl;
}