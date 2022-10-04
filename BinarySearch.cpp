#include<iostream>
using namespace std;

void binarySearch(int arr[], int n, int search){
    int start = 0, end = n-1, mid = (start+end)/2;

    while (start <= end && arr[mid] != search){
        if (search > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    if (arr[mid] == search){
        cout<<"Element found at location: "<<mid+1<<endl;
    }
    else{
        cout<<"Not Found!"<<endl;
    }
}

int main(){
    int n = 5, arr[] = {3, 5, 8, 13, 2}, search = 8;
    binarySearch(arr, n, search);
    return 0;
}
