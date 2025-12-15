# include<iostream>
using namespace std;



void changeArr(int arr[],int  sizeof_arr){
    cout<<"In the Function"<<endl;
    for(int i=0; i<sizeof_arr; i++){
        arr[i]=2*arr[i];
    }
}


int main(){
    int arr[]={24,25,26,27,28};
    int sizeof_arr=5;9

    cout<<"After apply Function";

    changeArr(arr,sizeof_arr);

    for (int i=0; i<sizeof_arr; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}