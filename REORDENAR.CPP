#include<iostream>
#ifndef REDORDENACION_H
#define REDORDENACION_H
using namespace std;

int main(){
    RedOrdenacion mired(5);
    mired.input();
    cout<<"Vector inicial: "<<"\n";
    mired.print();
    mired.sort();
    cout<<"Mostrar vector ordenado: "<<"\n";
    return 0;
}