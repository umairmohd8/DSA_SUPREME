// square root  of a number using binary search

// search space

#include <bits/stdc++.h>
using namespace std;

int main() {
    int sqare_num = 25;
    int arr[sqare_num];

    iota(arr,arr+sqare_num,1);

    int start = 0; 
    int end = sqare_num-1;

    while(start <= end){
        int mid = start + (end-start)/2;
        if(arr[mid]*arr[mid] == sqare_num){
            cout << "Found  " << arr[mid] << endl;
            return 0;
        }
        else if(arr[mid]*arr[mid] > sqare_num){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
}


