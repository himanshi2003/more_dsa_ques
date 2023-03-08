#include<iostream>
using namespace std;
long long int sqrtInt(int n){
        int s=0; 
        int e=n;
        long long int mid=s+(e-s)/2;
        long long int ans=-1;
      while(s<=e){
            long long int square=mid*mid;
            if(square==n){
                return mid;
            }
            if(square<n){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
      }
      return ans;

    }

    double moreprec(int n,int prec,int temsol){
        double factor=1;
        double ans=temsol;
        for (int i = 0; i < prec  ; i++)
        {
            factor =factor/10;
            for (double j = ans; j*j < n; j=j+factor)
            {
                ans=j;
            }
            
        }
        return ans;

    }
int main(){
int n;
cout<<"enter the number"<<endl;
cin>>n;
int temsol=sqrtInt(n);
cout<<"ans is" << moreprec(n,3,temsol);
    return 0;
}