#include <iostream>
#include <cmath>
using namespace std;
double f0(double t, double y0, double y1); //Returns derivative of y0
double f1(double t, double y0, double y1); //Returns derivative of y1

const double K = 50;
const double M = 2;
const double LAMBDA = 1;
const double DeltaT = 0.01;

int main(void)
{
    float t=0;
    float v=0;
    float x=1;
    for(int i=0;i<1000;i++){
        
      double tr = t + i*DeltaT;
      double old_x=x;
      double old_v=v;
      x = x + DeltaT * f0(tr,old_x,old_v);
      v = v + DeltaT * f1(tr,old_x,old_v);
      std::cout<<tr<<"\t"<<x<<"\t"<<v<<std::endl;
      
    }
    
    return 0;
}

double f0(double t, double y0, double y1)
{
  return y1;
}

double f1(double t, double y0, double y1)
{
  return (-K/M)* std::pow (y0, LAMBDA);
}