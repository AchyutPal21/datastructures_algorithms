#include <bits/stdc++.h>

using namespace std;

// Q. 1
void printNTimes(string name, int count) {
  if (count == 0) {
    return;
  }

  cout << name << endl;
  printNTimes(name, count-1);

}

// Q. 2
void helperPrint1ToN(int n, int k) {
  if (k > n) {
    return;
  }

  cout << n << " ";
  helperPrint1ToN(n, k+1);
}

void print1ToN(int n) {
  helperPrint1ToN(n, 1);
}

// Q. 3
void printNTo1(int n) {
  if (n == 0) {
    return;
  }

  cout << n << " ";
  printNTo1(n-1);
}

// Q. 4
void print1ToNByBT(int n) {
  if (n == 0) {
    return;
  }

  print1ToNByBT(n-1);
  cout << n << " ";
}

// Q. 5
void printNTo1ByBT(int n) {
  if (n == 0) {
    return;
  }

  cout << n << " ";
  printNTo1ByBT(n-1);
}

int main() {
  print1ToNByBT(5);
}