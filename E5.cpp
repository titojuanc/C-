#include <iostream>
using namespace std;

int main(){
    float h;
    float m;
    cout<<"Ingrese la cantidad de hombres: "<<endl;
    cin>>h;
    cout<<"Ingrese la cantidad de mujeres: "<<endl;
    cin>>m;
    float hp= (h*100)/(h+m);
    cout<<"El porcentaje de hombres es: "<<hp<<endl;
    float mp= (100-hp);
    cout<<"El porcentaje de mujeres es: "<<mp<<endl;
}