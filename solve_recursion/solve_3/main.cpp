#include <bits/stdc++.h>

using namespace std;


// Q. 1 parameter way
int sumByP(int n, int sum = 0) {
  if (n == 0) {
    return sum;
  }

  return sumByP(n-1, sum+n);
}

// Q. 2 functional way
int sumF(int n) {
  if (n <= 1) {
    return 1;
  }

  return n + sumF(n-1);
}

// Q. 3 factorial of n
int factorial(int n) {
    if (n == 0) {
      return 0;
    }

    if (n <= 2) {
    return n;
  }

  return n * factorial(n-1);
}

int main(int argc, char const *argv[]) {
  // cout << "Sum of 1...5: " << sumByP(5) << endl;
  // cout << "Sum of 1...5: " << sumF(3) << endl;
  cout << "Factorial of 5: " << factorial(5) << endl;


  return 0;
}
