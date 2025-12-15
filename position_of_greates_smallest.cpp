# include<iostream>
#include <climits>
using namespace std;


int main(){
    int arr[]={65,98,89,34,65,88};
    int size=sizeof(arr)/sizeof(int);
    int smallest= INT_MAX;
    int greatest= INT_MIN;

    int Posi_smallest=-1;
    int Posi_greatest=-1;


 
    for(int i=0; i<size; i++){
        if (arr[i]<smallest){
            smallest=arr[i];
            Posi_smallest=i;
        } 
           
          if (arr[i]>greatest){
            greatest=arr[i];
            Posi_greatest=i;
          }

    }

    cout<< "The Smallest No of the Array is:"<<smallest<<endl;
    cout<<"Possition Of samallest Element is:"<<Posi_smallest<<endl;
    cout<< "The Greatest No of the Array is:"<<greatest<<endl;
    cout<<"Possition Of Greatest Element is:"<<Posi_greatest<<endl;
    return 0;
}