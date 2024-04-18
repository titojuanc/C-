#include <iostream>
using namespace std;

int main(){

    string pal="" , aux="" ; //pal_cambiada="";
    //char letra;
    int num=0 , lpal=0;
    cout<<"Ingrese una palabra: "<<endl;
    cin>>pal;
    cout<<"Ingrese un número: "<<endl;
    cin>>num;

    lpal=pal.length();
    int r= (lpal-num);
    for (int i=0; i!=lpal; i++){
        aux=aux+pal[r];
        if(r==lpal-1){
            r=0;
        }
        else{
            r=r+1;
        }
    }
    cout<<aux<<endl;
}