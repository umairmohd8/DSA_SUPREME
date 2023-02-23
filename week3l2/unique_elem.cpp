#include "iostream"
#include<vector>

using namespace std;


// all the elements in an array are repeated except one element
// find that unique element
int find_unique(vector<int> elements){
    if(elements.size() == 0){
        return -1;
    }
    int answer;
    for(int i=0; i<elements.size();i++){
        answer ^= elements[i]; // important step
    }
    return answer;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    cout<<find_unique(v)<<endl;
    return 0;
}

//what if there are no unique values