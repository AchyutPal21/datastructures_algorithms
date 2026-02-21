#include <bits/stdc++.h>

using namespace std;

// print subsequence
template <typename T>
void printSubSequence(vector<T> &array, int array_size, vector<T> &container, int idx) {

  if (idx >= array_size) {
    for (T i : container) {
      cout << i << " ";
    }
    cout << endl;
    return;
  }

  // include the index element of array to temp array
  // and call the function with the next array index
  container.push_back(array.at(idx));
  printSubSequence(array, array_size, container, idx+1);
  // removed the element because in next function call
  // we will not include this element in the temp array
  container.pop_back();

  // Call the fn with next index by +1
  printSubSequence(array, array_size, container, idx+1);
}

int main(int argc, char const *argv[]) {
  vector<string> tempArr;
  vector<string> arr = {"1", "2", "3"};
  printSubSequence(arr, arr.size(), tempArr, 0);
  return 0;
}
