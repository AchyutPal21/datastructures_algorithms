#include <bits/stdc++.h>

using namespace std;

// TC: O(n)
// SC: O(n)
void reverseArray(int arr[], int i, int n) {
  if (i >= n) {
    return;
  }

  int temp = arr[i];
  arr[i] = arr[n];
  arr[n] = temp;
  reverseArray(arr, i+1, n-1);
}

// TC: O(n)
// SC: O(n)
bool isPalindrome(string &str, int i, int n) {
  if (i >= n/2) {
    return true;
  }

  if (str.at(i) != str.at(n)) {
    return false;
  }

  return isPalindrome(str, i+1, n-1);
}

int main(int argc, char const *argv[]) {
  int arr[] = {1, 3, 5, 7, 0};
  int n = 5;
  // reverseArray(arr, 0, n-1);

  // for (int i : arr) {
  //   cout << i << " ";
  // }
  
  string str {""};
  cout << "Enter the palindrome string: ";
  getline(cin, str);
  bool result = isPalindrome(str, 0, str.size() - 1);
  if (result) {
    cout << str << " is palindrome string: " << endl;
  } else {
    cout << str << " is not palindrome." << endl;
  }


  return 0;
}
