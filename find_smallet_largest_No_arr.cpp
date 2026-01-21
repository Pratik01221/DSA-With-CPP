# include<iostream>
#include <climits>
using namespace std;


int main(){
    int arr[]={65,98,23,1,0,-4,56,89,34};
    int size=sizeof(arr)/sizeof(int);
    int smallest= INT_MAX;
    int greatest= INT_MIN;

    for(int i=0; i<size; i++){
    //    if (arr[i]<smallest){
    //        smallest=arr[i];
    //    }
           
    //      if (arr[i]>greatest){
    //        greatest=arr[i];
    //      }



        smallest=min(arr[i],smallest);
        greatest=max(arr[i],greatest);
    }

    cout<< "The Smallest No of the Array is:"<<smallest<<endl;
    cout<< "The Greatest No of the Array is:"<<greatest<<endl;
    return 0;
}