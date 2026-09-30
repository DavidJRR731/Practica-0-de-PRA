#include<PRACT1.H>
#include<iostream>
using namespace std;
int main(){
cout<<"Imprimiendo caracteristicas: "<<"\n";
cout<<Robot1.RoboticArm();
cout<<Robot1.getX();
cout<<Robot1.getY();
cout<<Robot1.getZ();

if(Robot1.getsujetado()){
	return Robot1.grab();
	else{
		return Robot1.release();
	}
}
Robot1.move();
return 0;
}

