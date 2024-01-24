// Minimum number of element required to reach target sum
/*
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int solve (vector<int>arr,int target) {
    // Base case
    if(target == 0) {
        return 0;
    }
    if(target < 0) {
        return INT_MAX;
    }
    // Solve 1 case baki recursion sambhal lega
    int mini = INT_MAX;
    for(int i=0;i<arr.size();i++) {
        int Ans = solve(arr,target - arr[i]);
        if(Ans != INT_MAX) // valid case
        mini = min(mini,Ans + 1); // Ans + 1 isliye bcz Ans is answer for target - 1 element (isliye ek or element add kiya jisse vo target element aa jaye)
    }
    return mini;
}
int main() {

    vector<int>v{1,2};
    int target = 5;

    int ans = solve(v,target);

    cout << "Answer is " << ans << endl;

    return 0;
}
*/
// Maximum sum of non - adjacent elements 
/*
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
void Solve (vector<int>& arr,int i,int sum , int& maxi) {
    // base case
    if(i >= arr.size() ) {
        //maxi update
        maxi = max(sum,maxi);
        return;
    }
    // include
    Solve(arr,i+2,sum + arr[i] , maxi);
    //exclude
    Solve(arr,i+1,sum,maxi);
}
int main () {
    vector<int>v{2,1,4,9};
    int i = 0;
    int maxi = INT_MIN;
    int sum = 0;

    Solve ( v,i,sum,maxi );

    cout << maxi <<endl;

    return 0;
}
*/

