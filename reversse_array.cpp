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

    int arr[]={1,2,3,4,5,6,8};
    int size=sizeof(arr)/sizeof(int);

    Reverse_array(arr, size);
    cout<<"Reverse of the Given Array:";

    for (int i=0; i<size; i++){
        
        cout<< arr[i]<< " ";
        
    }
    return 0;
}



@REM WAF to print all the unique values in an array.

@REM WAF to print intersection of 2 arrays.