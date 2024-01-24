// done many questions on leetcode and gfg related to it


#include<bits/stdc++.h>
using namespace std;

// Function prototype
void solve(int open, int close, string op, vector<string>& v);

int main() {
  vector<string> v;
  string op = "";
  int n;
  cin >> n;
  int open = n;
  int close = n;
  solve(open, close, op, v);
  for (const auto& str : v) {
    cout << str << endl;
  }
}

void solve(int open, int close, string op, vector<string>& v) {
    if(open == 0 && close == 0) {
        v.push_back(op);
        return;
    }
    if(open != 0) {
        string op1 = op;
        op1.push_back('(');
        solve(open - 1, close, op1, v);
    }
    if(close > open) {
        string op2 = op;
        op2.push_back(')');
        solve(open, close - 1, op2, v);
    }
}
