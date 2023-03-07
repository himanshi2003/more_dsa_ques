// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int leftOccur(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            //yha ham esa isliye kar rhe h kuki hame  left occur nikal rhe hai 
            e=mid-1;
        }
        if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
        s=mid+1;
    
}
int rightOccur(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            //yha ham esa isliye kar rhe h kuki hame  left occur nikal rhe hai 
            s=mid+1;
        }
        if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
        s=mid+1;
    
}
int main() {

int even[6]={1,2,3,3,3,6};
cout<<leftOccur(even,6,3)<<endl;
cout<<rightOccur(even,6,3);
    return 0;
}