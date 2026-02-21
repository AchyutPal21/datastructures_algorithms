#include <bits/stdc++.h>

using namespace std;


// TC: O(2^n) (form a tree with n = 4, 2^n is 16 calls made)
// SC: O(n) (max stack calls)
int getFib(int n) {
  if (n <= 1) {
    return n;
  }

  if (n == 2) {
    return 1;
  }

  return getFib(n-1) + getFib(n-2);
}

int main(int argc, char const *argv[]) {
  cout << getFib(10);
  return 0;
}
