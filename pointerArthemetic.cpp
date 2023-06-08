#include<iostream>
using namespace std;
int main(){

    //addition
    int i=9;
    int *t=&i;

    // cout<<( *t)++ <<endl; 

    *t=*t+1;
    cout<<*t<<endl;
    
    t=t+1;
    cout<<t<<endl;

    

    
    

    return 0;

}