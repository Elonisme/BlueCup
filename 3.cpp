#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x = 2.0;
    double i = 0;
    for (; i < 1 && (pow(x+i,x+i) < 10.0); i=i+0.0000001);

    printf("%f",x+i);
}