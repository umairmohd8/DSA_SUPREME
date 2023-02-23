// all the elements in an array occur even number of time 
// repeating occurrences of an element appears in pair, pairs are not adjacent , [2,2,2,2] is wrong but [2,2,3,2,2] possible
// except one odd occuring element, find that element 

// can be solved usign XOR, but time complexity is O(n)

// [1 1 2 2 3 3 4 4 3 600 600 4 4]
// all the pairs to the left of the answer have indices pairs(even index, odd index)
// .... to the right of the answer have indices pairs as (odd, even)

#include<bits/stdc++.h>

using namespace std;

int odd_occuring(vector<int> arr, int n){
    int start = 0; 
    int end = n-1;

    while(start <= end){
        if(start == end)
            return start;
        int mid = start +(end-start)/2;

        if(mid %2 == 0){ // mis on even 
            if (arr[mid] == arr[mid+1]) // pair in left side
                start = mid+2;
            else if(arr[mid] == arr[mid-1]) // pair in right side
                end = mid-2;
            else 
                return mid;
        }
        else {
            if (arr[mid] == arr[mid+1]) // right phase
                end = mid-1;
            else if(arr[mid] == arr[mid-1]) // left phase 
                start = mid+1;
        }
    }
}

int main() {
    vector<int> arr= {7,3,3};
    int ans = odd_occuring(arr, arr.size());
    cout<<"Odd occuring element is: "<<arr[ans]<<endl;
    return 0;
}