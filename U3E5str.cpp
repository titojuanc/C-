#include <iostream>
using namespace std;

int main(){
    string pal="";
    string aux="";
    cout<<"ingresá una palabra: "<<endl;
    cin>>pal;
    int l= pal.length()-1;

    for(int i=l; i>=0; i--){
        aux=aux+pal[i];
    }
    if(aux==pal){
        cout<<"Se lee igual :)"<<endl;
    }
    else{
        cout<<"Nao nao :("<<endl;
    }
}
