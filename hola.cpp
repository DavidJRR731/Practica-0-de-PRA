#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Introduce un valor para un primer número:";
    cin>>a;
    cout<<"Introduce un valor para un segundo número:";
    cin>>b;
    c=a+b;
    if(c>=20){
        cout<<"No me jodas mi negro te pasaste de lanza"<<"\n";
    }else{
    cout<<"El valor total de ambos valores es:"<<c<<"\n";
    }
    return 0; 
}


