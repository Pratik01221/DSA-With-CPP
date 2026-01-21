# include<iostream>
# include<climits>
using namespace std;


int main(){
    int arr[]={1,2,3,4,5,456,23,12,34,67,89,90};
    int size=sizeof(arr)/sizeof(int);

    int smallest=INT_MAX;
    int greatest=INT_MIN;
    int minIndex = 0, maxIndex = 0;


    
    cout<<"Before swaping elements::";
    

    for (int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    
    for (int i=0; i<size; i++){
        if (arr[i]<smallest){
        smallest=arr[i];
        minIndex=i;
    }

    if (arr[i]>greatest){
        greatest=arr[i];
        maxIndex=i;
    }
    }
    

    cout<< endl;
    swap(arr[minIndex],arr[maxIndex]);
    cout<<"After swaping elements::";
    for (int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}