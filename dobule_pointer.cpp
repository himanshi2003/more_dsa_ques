#include<iostream>
using namespace std;
void update(int **p){
    p=p+1;
    //kuch change hoga??- no need to
    *p=*p+1;
    //kuch change hoga??-yes
    **p=**p+1;
    //kuch change hoga?? -yes  
}
int main(){

int i=6;
int *ptr=&i;
int **p=&ptr;



//  cout<<p<<endl;
// cout<<&p<<endl;
// cout<<ptr<<endl;
// cout<<*p<<endl;


// cout<<i<<endl;
// cout<< *ptr<<endl;
// cout<<**p<<endl;

  cout<<endl<<endl;
  cout<<i<<endl;
  cout<<ptr<<endl;
  cout<<p<<endl;
  update(p);
  cout<<i<<endl;
  cout<<ptr<<endl;
  cout<<p<<endl;
    

return 0;
}
    