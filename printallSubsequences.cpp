#include <iostream>
#include <vector>
using namespace std;

void printf(int ind , vector<int> &s, int arr[] , int n){
    if(ind == n){
        for(auto i : s){
            cout << i <<" ";
        }
        if(s.size() == 0){
            cout << "{}";
        }
        cout<< endl;
        return;
    }
    // take or pick a particular index into a subsequence
    s.push_back(arr[ind]);
    printf(ind+1, s , arr , n);
    s.pop_back();
    // not pick or not take condition this element is not added to your subsequence
    printf(ind+1 , s , arr , n);
}


int main(){
    
    int arr[] = { 3, 1 , 2};
    int n = 3;
    vector<int> s;
    printf(0, s , arr , n);
    return 0;
    
}