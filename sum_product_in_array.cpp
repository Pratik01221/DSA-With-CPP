#include<iostream>
#include<algorithm>

using namespace std;


int sum_of_array(int arr[], int size){
    int sum=0;
    for (int i=0; i<size; i++){
        sum+=arr[i];
    }
    
    return sum;
}

int product_of_array(int arr[], int size){
    int product=1;
    for (int i=0; i<size; i++){
        product*=arr[i];
    }
    
    return product;
}





int main(){
    int arr[]={1,2,3,4,5,6};
    int size=sizeof(arr)/sizeof(int);

    int sum=sum_of_array(arr,size);

    cout<<"Sum of all elements in the array is:"<<sum<<endl;

    int product=product_of_array(arr,size);

    cout<<"Product of all elements in the array is:"<<product<<endl;
    return 0;
}