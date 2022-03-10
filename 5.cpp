#include <iostream>
using namespace std;

int main(){
    int z=0;
    cin>>z;
    int n=0;
    for (int i = 0; i < z; i++)
    {
        for (int  j = 0; j < z; j++)
        {
           if(i*i+j*j==z*z){
               n++;
           }
        }
    }
    
    cout<<n/2<<endl;
    return 0;
}