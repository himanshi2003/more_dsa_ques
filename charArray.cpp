#include<iostream>
using namespace std;
int main(){
int arr[5]={1,2,3,4,5};
char ch[6] ="abcde";

cout<<arr<<endl;
cout<<ch<<endl;


//integer and char array kelie cout function diffrent implmentation deta h
 

 char *c=&ch[0];
 //printing entire string 
 cout<< c<<endl;

 //if null char not present
 char temp='h';
 char *p=&temp;
 cout<<p<<endl; 



return 0;
}
   