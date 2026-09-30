#include<iostream>
#ifndef REDORDENACION_H
#define REDORDENACION_H
using namespace std;
class RedOrdenacion{
    private:
    int*datos;
    int tamanyo;

    public:
    RedOrdenacion(int tamanyo_){
        tamanyo=tamanyo_;
        datos=new int[tamanyo];
    }
    ~RedOrdenacion(){
        delete[]datos;
    }

    void print(){
        for(int i=0;i<tamanyo;i++){
            cout<<datos[i]<<"\n";
        }
    }

   void input(){
    for(int i=0;i<tamanyo;i++){
        cin>>datos[i];
    }
    }
    void swap(int i,int j){
        int temp;
        if(datos[i]>datos[j]){
            temp=datos[i];
            datos[i]=datos[j];
            datos[j]=temp;
        }
    }

    void sort(){
        
        for(int ronda=0;ronda<tamanyo;ronda++){

        for(int i=0;i+1<tamanyo;i+=2){
            swap(i,i+1);
        }
        for(int=1;i+1<tamanyo;i+=2){
            swap(i,i+1);
        }
    }
}



};