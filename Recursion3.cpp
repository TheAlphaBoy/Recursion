// Array is sorted or not using Recursion
/*
#include<iostream>
#include<vector>
using namespace std;
bool CheckSorted(vector<int>& arr,int i,int& n) {
    // Base Case
    if(i == n-1) {
        return true;
    }
    // 1 case solve kardo 
    if(arr[i] > arr[i+1]) {
        return false;
    }
    // Baki recursion sambhal lega
    CheckSorted(arr,i+1,n);
}
int main () {

    vector<int>v{10,20,30,50,40};
    int n = v.size();
    int i = 0;
    bool isSorted = CheckSorted(v,i,n);
    if(isSorted) {
        cout << "Array is sorted" << endl;
    }
    else {
        cout << "Array is not sorted" << endl;
    }

    return 0;
}
*/
// Binary Search of an array to find the target element using Recursion
/*
#include<iostream>
#include<vector>
using namespace std;
// vector is pass by reference jisse memory kam lgegi(see in video)
int BinarySearch(vector<int>& arr , int s , int e , int key) {
    // Base Case
    // case - 1 : key not found
    if(s > e) {
        return -1;
    }
    // case - 2 : key founded
    int mid = s + (e-s) /2;
    if(arr[mid] == key ) {
        return mid;
    }
    // 1 case solve kardo baki Recursion sambhal lega
    // left search
    if(arr[mid] > key ) {
        return BinarySearch(arr,s,mid-1,key);
    }
    // Right search
    if(arr[mid] < key) {
        return BinarySearch(arr,mid+1,e,key);
    }
}
int main() {
    vector<int>v{1,2,3,4,5,9,13,25,36};
    int target = 13;
    int n = v.size();
    int s = 0;
    int e = n-1;

    int ans = BinarySearch(v,s,e,target);
    cout << "Answer is " << ans <<endl;

    return 0;
}
*/
// Subsequences of a string 
/*
#include<iostream>
using namespace std;
void PrintSubsequences ( string str,int i,string output) {
    // Base case
    if(i >= str.length() ) {
        cout << output << endl;
        return;
    }
    // Exclude
    PrintSubsequences(str,i+1,output);

    // Include
    output.push_back(str[i]);
    PrintSubsequences(str,i+1,output);
}
int main () {

    string str = "abc";
    string output = "";

    int i = 0;

    PrintSubsequences (str,i,output);

    return 0;
}
*/
// For storing the above string (subsequences wale question ko store karoge)

#include<iostream>
#include<vector>
using namespace std;
void PrintSubsequences ( string str,int i,string output,vector<string>& v) {
    // Base case
    if(i >= str.length() ) {
        v.push_back(output);
        return;
    }
    // Exclude
    PrintSubsequences(str,i+1,output,v);

    // Include
    output.push_back(str[i]);
    PrintSubsequences(str,i+1,output,v);
}
int main () {

    string str = "abc";
    string output = "";

    int i = 0;
    vector<string>v;

    PrintSubsequences (str,i,output,v);

    for(auto val : v) {
        cout << val << " ";
    }

    return 0;
}
