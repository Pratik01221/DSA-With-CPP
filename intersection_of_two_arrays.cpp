#include <iostream>
using namespace std;


void Intersection_of_Arrays(int arr1[],int size1, int arr2[], int size2){
    cout<<"Intersection of two arrays";
    for (int i=0; i<size1; i++){
        for (int j=0; j<size2; j++){
            cout<<arr1[i]<<" ";
            break:
        }
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 6, 7};

    int size1 = sizeof(arr1) / sizeof(int);
    int size2 = sizeof(arr2) / sizeof(int);

    Intersection_of_Arrays(arr1, size1,arr2,size2);

    return 0;
}