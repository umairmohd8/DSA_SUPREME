#include "iostream"
#include "algorithm" // inbuilt binary search algorithm

// binary_search(v.begin(), v.end(),)

using namespace std;

int main(int argc, char argv[]){
    int n;
    cout << "Enter the capacity of the array: " << endl;
    cin>> n;
    int arr[n];

    cout<<"Enter the array values"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the target value"<<endl;
    int target;
    cin>>target;
    int start = 0; 
    int end = n-1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(target == arr[mid]){
            cout<<"Found at index "<<mid<<endl;
            return 0;
        }
        if(target < arr[mid]){
            end = mid -1; 
        }
        else{
            start = mid + 1;
        }
    }
}

