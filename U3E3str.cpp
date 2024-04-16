#include <iostream>
using namespace std;

int main(){
    string pal1="";
    string pal2="";
    cout<<"Ingrese la primer palabra: "<<endl;
    cin>>pal1;
    cout<<"Ingrese la segunda palabra: "<<endl;
    cin>>pal2;

    if(pal1==pal2){
        cout<<"Son iguales :)"<<endl;
    }
    else{
        cout<<"No son iguales :("<<endl;
    }
}