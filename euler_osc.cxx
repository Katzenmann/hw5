#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main(void){
const double pi=3.141;
const double dt=pi/10;
const double T=20*pi;
const double N=T/dt;
double tempf;
double yf[2];
double yb[2];
yf[0]=1;
yb[0]=1;
yf[1]=0;
yb[1]=0;
for(int i=0; i<N; i++){
tempf=yf[0];
yf[0]=yf[0]+dt*yf[1];
yf[1]=yf[1]-dt*tempf;
yb[1]=yb[1]-dt*yb[0];
yb[0]=yb[0]+dt*yb[1];
cout<< dt*i <<"	"<<yf[0]<<"	"<<yb[0] << endl;
}




































return 0;
}
