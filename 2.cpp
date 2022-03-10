#include <iostream>
using namespace std;

int main(){
    double x = 0;
    double i = 1.0;
    while (1)
    {
        x= x + 1/i;
        i++;
        if(x > 15.0) break;
    }
    printf("%f",i);
    
}