# include<iostream>
using namespace std;


int Linear_Search(int arr[],int size, int target){
    for (int i=0; i<size; i++){
        if( arr[i]==target){
        cout<<"The Target Found at Possition:";
        return i;
        }
    }

    return -1;

}


int main(){
    int arr[]={4,2,7,8,1,2,5};
    int target=8;
    int size=6;

    cout<<Linear_Search(arr, size, target)<<endl;

    
}