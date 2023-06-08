#include<iostream>
using namespace std;
void update(int n){
    n++;
}
//!arument refrece dala h abki bar & se-----
     
void update1(int& n){
    n++;
}
int main(){
    
// !refrence variable
// int i=9;
// int &j=i;
// cout<<i<<endl;
// i++; 
// cout<<i<<endl;
// cout<<j<<endl;

int n=8;
cout<<n<<endl;
update1(n);
cout<<n<<endl;
    return 0;
 
}