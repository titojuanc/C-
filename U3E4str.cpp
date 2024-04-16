#include <iostream>
using namespace std;

int main(){
    string pal= "";
    int c= 0;
    char vocales[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I','O', 'U'};
    cout<<"ingresá una palabra: "<<endl;
    cin>>pal;
    int l= pal.length();

    for (int i=0; i<=l-1; i++){
        for(int x=0;x<=9;x++){
            if(pal[i]==vocales[x]){
                c++;
            }
        }
    }
    cout<<"su palabra tiene "<< c <<" vocales"<<endl;
}