// to find single pivot in an acsending array 

// does it work for pivot in a descending array?

#include "iostream"
#include<vector>

using namespace std;

// wrong answer for 7,6,5,4,3,2,10,11
// fails for repetition too 1,1,1,1,1,1,7,8
int find_pivot(vector<int> arr, int s, int e){
    int mid = s + (e-s)/2;
    if((mid +1 <= e) && (arr[mid] > arr[mid + 1])){
        return mid;
    }
    else if((mid-1 >= s) && (arr[mid-1] > arr[mid])){
        return mid-1;
    }
// pivot is the higest value index 

    if(arr[s] >= arr[mid] ){
        // if our current location is to the right of pivot, our value will be
        // <= to the first element, hence we change end to mid-1
        return find_pivot(arr, s, mid-1);
    }
    else 
    // if our current location is to the left of pivot
        return find_pivot(arr, mid+1, e);

}

int main()
{
    vector<int> arr{1,1,1,1,1,1,7,8};
    int n = arr.size();
    int start = 0;
    int end = n-1;
    int pivot = find_pivot(arr, start, end);
    cout << "pivot is " << arr[pivot] << endl;
    return 0;
}
