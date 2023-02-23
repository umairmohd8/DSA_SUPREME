#include "iostream"

#include<bits/stdc++.h>

using namespace std;
int nearly(){
    vector<int> arr{10,3,40,50,80,70};
    int target = 200;

    int n = arr.size();
    int start = 0;
    int end = n - 1;
//In a nearly sorted array, the actual value will be either in i-1, i or i+1th index

    while(start <= end){
        int mid = start + (end - start) / 2;

        if(target == arr[mid])
            return mid;
        else if(mid-1 >= 0 && target == arr[mid-1])
            return mid-1;
        else if(mid+1 <= n-1 && target == arr[mid+1])
            return mid+1;
        else if(target < arr[mid])
            end = mid-2; // cuz we are aleady checking i-1th index
        else
            start = mid+2;
    }
    return -1;
}

int main(){
    int ans = nearly();
    cout <<"The target is at the index: " << ans << endl;
    return 0;
}
