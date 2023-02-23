// find an element in sorted and rotated array 

// eg: 4 5 6 7 0 1 2 3 
// [7 1 2 3 4 5 6] 


// find pivot first then find the element 

#include <vector>
#include <iostream>

using namespace std;

int find_pivot(vector<int> arr, int start, int end) {
    int mid = start + (end - start) / 2;
    if(arr[mid] > arr[mid+1])
        return mid;
    else if(arr[mid -1] > arr[mid])
        return mid-1;
    else if(arr[mid] < arr[start])
        find_pivot(arr, start, mid-1);
    else
        find_pivot(arr, mid+1, end);
}
int find_element(vector<int> arr, int target){
    int pivot = find_pivot(arr, 0, arr.size()-1);
    int mid = pivot;
    int s = 0;
    int e  = arr.size()-1;
    while(s<=e) {
        if(arr[mid] == target)
            return mid;
        else if(target < arr[e])
            s = mid+1;
        else
            e = mid-1;
        mid =  s+ (e-s)/2;
    }
}

int main(){
    vector<int> arr{7,8,9,1,2,3,4,5,6};
    cout<< "Enter the target element"<<endl;
    int target;
    cin >> target;
    int index = find_element(arr,target);
    cout<<"the target element index is "<<index<<endl;
}
