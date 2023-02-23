// peak element in a moutain array


#include "iostream"

using namespace std;

int main()
{
    int arr[10] = {1,2,3,4,9,10,6,7,8,3};

    int start = 0;
    int end = 9;
    int mid = start + (end - start)/2;

    while(start < end){
        
        if(arr[mid] < arr[mid+1])
            start = mid + 1; // mid = start is not valid cuz the condition 
            // clearly staes arr[mid] < arr[mid+1] and peak cannot be less, hence start = mid + 1
        
        else 
            end = mid; // cuz peak can be on end 
        mid = start + (end - start) / 2;

    }
    cout << "The peak element is " << arr[mid] << endl;
}