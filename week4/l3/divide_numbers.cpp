// divide two number using binary search 

#include<bits/stdc++.h>

using namespace std;

int divide(int dividend, int divisor) {
    int arr[dividend];
    iota(arr, arr+dividend, 0);
    int start =0 ;
    int end = dividend-1;
    int ans = -1;
    while(start <= end){

        int mid = start + (end - start) / 2;
        int quo = divisor*mid;
        if(quo == dividend){
            return mid;
        }
        else if(quo > dividend){
            end = mid - 1;
        }
        else{
            ans = mid;
            start = mid + 1;
        }
    }
    return ans;
}

int main() {
    int a = -64;
    int b = -5;
    int quotient = divide(abs(a),abs(b)); // abs() cuz wer're using dividend to size the array, which can't be negative 
    if((a<0) ^ (b<0))
        quotient *= -1;
    cout << quotient << endl;
    return 0;
}