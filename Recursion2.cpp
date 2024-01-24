// Climb Stairs Problem using Recursion
/*
#include<iostream>
using namespace std;
int ClimbStairs(int n) {
    // Base condition
    if(n==0) {
        // ways for 0th stair --> 1 way only
        return 1;
    }
    if(n==1) {
        // ways for 1st stair --> 1 way only
        return 1;
    }
    int Ans = ClimbStairs(n-1) + ClimbStairs(n-2);
    return Ans;
}
int main() {
    int n;
    cout << "Enter the Number of stairs " <<endl;
    cin>>n;

    int ans = ClimbStairs(n);
    cout << "Number of ways to Climb the Stairs are : " << ans <<endl;
    return 0;
}
*/
// Print array using Recursive function
/*
#include<iostream>
using namespace std;
void Print(int arr[],int n,int i) {
    // Base Case
    if(i >= n) {
        return;
    }
    // 1 case solve kardo
    cout << arr[i] << " ";
    // Baki recursion sambhal lega
    Print(arr,n,i+1);
}
int main() {
    int arr[5] = {10,20,30,40,50};
    int n = 5;
    int i =0;
    Print(arr,n,i); 

    return 0;
}
*/
// Maximum number in an array using Recursion
/*
#include<iostream>
#include<limits.h>
using namespace std;
void FindMax(int arr[] ,int i,int n,int& maxi) { // i have used referance by variable but not used  pass by value bcz pass by reference me copy nhi actual value pass hoti hai
    // pass by reference use kara jisse main function ke maxi ki copy nhi actual value me change kar payega void function isliye pass by reference use kra
    // Base Case
    if(i >= n) {
        return;
    }
    //1 case solve kardo
    // maxi = max(maxi,arr[i]);
    if(arr[i] > maxi) {
        maxi = arr[i];
    }
    // Baki recursion sambhal lega
    FindMax(arr,i+1,n,maxi);
}
int main() {

    int arr[5] = {10,20,30,40,50};
    int n = 5;
    int i = 0;
    int maxi = INT_MIN;
    FindMax(arr,i,n,maxi);

    cout <<"Maximum number in an array is : " << maxi <<endl;

    return 0;
}
*/
// Minimum number in an array using Recursion
/*
#include<iostream>
#include<limits.h>
using namespace std;
void FindMin(int arr[] ,int i,int n,int& mini) { // i have used referance by variable but not used  pass by value bcz pass by reference me copy nhi actual value pass hoti hai
    // pass by reference use kara jisse main function ke mini ki copy nhi actual value me change kar payega void function isliye pass by reference use kra
    // Base Case
    if(i >= n) {
        return;
    }
    //1 case solve kardo
    mini = min(mini,arr[i]);
    // Baki recursion sambhal lega
    FindMin(arr,i+1,n,mini);
}
int main() {

    int arr[5] = {10,20,30,40,50};
    int n = 5;
    int i = 0;
    int mini = INT_MAX;
    FindMin(arr,i,n,mini);

    cout <<"Minimum number in an array is : " << mini <<endl;

    return 0;
}
*/
// Check weather key is present or not in the given string using recursion
/*
#include<iostream>
using namespace std;
// pass by reference se hi pass kara karo ye ek achhi practice hoti hai agar kar sakte ho
// string ,i,n,key sabme reference se pass kar sakte ho copy ki koi need nhi hai
bool ChecKkey(string& str,int& i,int& n,char& key) {
    // Base Case
    if(i >= n) {
        return false;
    }
    // 1 case solve kardo 
    if(str[i] == key ) {
        return true;
    }
    //Baaki recursion sambhal lega
    int NEWi = i+1;// ye isliye lgaya bcz of i pass through reference , vrna aap i ko chod kar baki me pass by reference lga lo agar problem aa rhi hai to
    return ChecKkey(str,NEWi,n,key);
}
int main () {

    string str = "nimitdubey";
    int n = str.length();
    char key = 'u';
    int i = 0;
    bool ans = ChecKkey(str,i,n,key);
    cout << "Ans is : " << ans <<endl;

    return 0;
}
*/
// for storing these strings we use vector and pass by reference to the function always (remember it)
/*
#include<iostream>
#include<vector>
using namespace std;
bool ChecKkey(string& str,int i,int& n,char& key,vector<int>& ans) { // always pass by reference the variable which you want to store i.e., here vector wala ans
    // Base Case
    if(i >= n) {
        return false;
    }
    // 1 case solve kardo 
    if( str[i] == key) {
        ans.push_back(i);
    }
    //Baaki recursion sambhal lega
    return ChecKkey(str,i+1,n,key,ans);
}
int main () {

    string str = "nimitdubey";
    int n = str.length();
    char key = 'i';
    int i = 0;
    vector<int>ans;
    ChecKkey(str,i,n,key,ans);
    cout << "Ans is : " << endl;
    for(auto val : ans) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
*/
