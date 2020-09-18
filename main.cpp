#include <iostream>
#include<cmath>
#include <iomanip>
int main() {
    double x;         //variant 8 Shevchuk Pavel
    int k;
    std::cout<<"Vvedite x (-1<x<1) and tochnost k (k>1)"<<std::endl;
    std::cin>>x;
    std::cin>>k;
    int n=1;
    int m=4;
    double res= x/2 + 1;
    double slag= x/2;
    double zad=1;
    for (int i=1; i<=k; i++){
        zad=zad*0.1;
    }
while (fabs(slag)>=zad){
slag= -slag*x*n/m;
n= n+2;
m= m+2;
res=res+slag;
}
std::cout<<"Ryad Teylora raven "<<std::setprecision(k)<<res<<std::endl;
std::cout<<"Koren raven "<<std::setprecision(k)<<sqrt(x+1)<<std::endl;
return 0;
}