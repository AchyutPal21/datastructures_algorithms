#include <bits/stdc++.h>

using namespace std;



void printTillNumber(int n) {
  if (n == 0) return;

  // cout << n << " "; // This prints before we print
  printTillNumber(n-1);
  cout << n << " "; // backtracking, this works when we are coming back
}


int main() {
  printTillNumber(5);
  return 0;
}
