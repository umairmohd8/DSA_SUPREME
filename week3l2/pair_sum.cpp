// interview imp
// two sum brute force

#include "iostream"

using namespace std;

int main()
{
    int arr[] = {0,3,5,7,2,4,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int sum = 9;
    for (int i = 0; i < n-1; i++){
        int difference = sum - arr[i];
        for (int j = i+1; j < n; j++){
            if(arr[j] == difference){
                cout<<arr[i]<<" "<<arr[j]<<"\n";
                break;
            }
        }
    }
}
