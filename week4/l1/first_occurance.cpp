#include "iostream"
// finding first and last occurance using binary search
using namespace std;

// auto ans = std::lower_bound(v.begin(), v.end(),target);  // include algorithms
// return and-v.begin()

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
    int ans = -1; // if no value exists 

    while(start <= end){
        int mid = start + (end - start)/2;
        if(target == arr[mid]){
            // cout<<"Found at index "<<mid<<endl;
            ans = mid; // storing the result
            //end = mid - 1; // changing mid to search lesser index value
            start = mid +1;  // changing mid to search greater index value
            continue;
        }
        if(target < arr[mid]){
            end = mid -1; 
        }
        else{
            start = mid + 1;
        }
    }
    if(ans == -1){
        cout<<"Target value not found"<<endl;
        return -1;
    }
    cout<<"Found at index "<<ans<<endl;
    return 0;
}