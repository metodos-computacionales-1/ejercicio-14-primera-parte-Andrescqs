#include <iostream>
#include <cmath>

using namespace std;
double f0(double t, double y0, double y1); 
double f1(double t, double y0, double y1); 

const double K = 100;
const double M = 2;
const double LAMBDA = 1;
const double Dt = 0.01;

int main(void)
    
    
{
    double x, v, t;
    x=1;
    v=0;
    for(t=0; t <= 1000; t+=Dt){
        
        cout << t << f0(i, )
    }
    return 0;
}

double f0(double t, double y0, double y1)
{
  return y1;
}

double f1(double t, double y0, double y1)
{
  return (-K/M)*pow(y0, LAMBDA);
    
}

double Vn(double v, v0, x){
    
}


