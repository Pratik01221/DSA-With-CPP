# include <iostream>
# include <algorithm>
using namespace std;



void Reverse_array( int arr[],int size){
    int start=0 , end=size-1;

    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){

    int arr[]={9,8,7,6,5,4,3,2,1};
    int size=sizeof(arr)/sizeof(int);

    Reverse_array(arr, size);
    cout<<"Reverse of the Given Array:";

    for (int i=0; i<size; i++){
        
        cout<< arr[i]<< " ";
        
    }
    return 0;
}



 

