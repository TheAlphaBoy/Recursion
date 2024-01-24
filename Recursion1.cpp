// Simple recursive function
/*
#include<iostream>
using namespace std;
int factorial(int n) {
    cout << "Function is call for n : " << n <<endl;
    // base condition hai ye jisse recursive function rukega
    if(n==1)
    return 1;

    //int Ans = n * factorial(n-1);
    // return Ans;

    //in desi bhasa
    int ChotiProblemAns = factorial(n-1);
    int BadiProblemAns = n * ChotiProblemAns;

    return BadiProblemAns;
}
int main() {

    int n;
    cout << "Enter the Value of n : " <<endl;
    cin>>n;

    factorial(n);
    int ans = factorial(n);
    cout << "Ans for given Factorial is : " << ans <<endl;

    return 0;
}
*/
// Prinnting reverse counting
/*
#include<iostream>
using namespace std;
void PrintCount(int n) {
    // Base Condition
    if(n == 0) {
        return;
    }
    // Processing
    cout << n << " ";
    // Recursive call / recursive relation
    PrintCount(n-1);
}
int main() {
    int n;
    cout << "Enter the Value of n : " <<endl;
    cin >> n;
    PrintCount(n);
    return 0;
}
*/
// Fibonacci of a given term
/*
#include<iostream>
using namespace std;
int fib(int n) {
    // Base case
    if(n==1) {
        // 1st term
        return 0;
    }
    if(n==2) {
        //2nd term
        return 1;
    }
    int Ans = fib(n-1) + fib(n-2);

    return Ans;
}
int main() {
    int n;
    cout<<"Enter the term you want to see : "<<endl;
    cin>>n;
    int ans = fib(n);
    cout<<"Fibonacci of given term is : " << ans <<endl;

    return 0;
}
*/
