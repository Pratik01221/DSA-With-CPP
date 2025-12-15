# include <iostream>

using namespace std;

void Unique_values(int arr[],int size){
    cout<<"Unique Elements Are:";
    for (int i=0; i<size; i++){
        int count=0;
        for (int j=0; j<size; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }

        if(count==1){
            cout<<arr[i]<<" ";
        }
    }
}

int main(){

    int arr[] = {1,1,2,3,4,2,5};

    int size=sizeof(arr)/sizeof(int);

    Unique_values(arr,size);
    return 0;
}