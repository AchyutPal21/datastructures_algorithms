#include <deque>
#include <iostream>
using namespace std;


/*
Deque stands for Double-Ended Queue. 
It's a sequence container that allows 
you to add or remove elements efficiently 
from both the front and the back.

*/

void declaringDequeue() {
  // Declare an empty deque of integers
  deque<int> d1;

  // Declare and initialize a deque with some values
  deque<int> d2 = {10, 20, 30, 40};
  for (int val : d2) {
      cout << val << " ";
  }
  cout << endl;
}

void insertElement() {
  deque<int> d;
    
  // Adding elements at the back
  d.push_back(10);
  d.push_back(20);
  d.push_back(30);
  
  // Displaying elements
  cout << "Elements in deque (added using push_back): ";
  for (int val : d) {
    cout << val << " ";
  }
  cout << endl;

  // Adding elements at the front
  d.push_front(30);
  d.push_front(20);
  d.push_front(10);
  
  // Displaying elements
  cout << "Elements in deque (added using push_front): ";
  for (int val : d) {
    cout << val << " ";
  }
  cout << endl;

  cout << "Original deque: ";
  for (int val : d) {
    cout << val << " ";
  }
  cout << endl;
  
  // Removing the last element
  d.pop_back();
  
  cout << "Deque after pop_back(): ";
  for (int val : d) {
      cout << val << " ";
  }
  cout << endl;

  cout << "Original deque: ";
  for (int val : d) {
      cout << val << " ";
  }
  cout << endl;
  
  // Removing the first element
  d.pop_front();
  
  cout << "Deque after pop_front(): ";
  for (int val : d) {
      cout << val << " ";
  }
  cout << endl;

  // Accessing the front element
  cout << "The first element (front) is: " << d.front() << endl;

  // Accessing the last element
  cout << "The last element (back) is: " << d.back() << endl;

  // Get the size of the deque
  cout << "The number of elements in the deque is: " << d.size() << endl;

  // Returns true if deque is empty.
  if (d.empty()) {
    cout << "Deque is empty." << endl;
  } else {
    cout << "Deque is not empty." << endl;
  }

  // Add an element and check again
  d.push_back(100);

  if (d.empty()) {
    cout << "Deque is empty." << endl;
  } else {
    cout << "Deque is not empty." << endl;
  }

  // Removes all elements from deque.
  cout << "Before clear(), size: " << d.size() << endl;
    
  // Clear all elements from deque
  d.clear();
  
  cout << "After clear(), size: " << d.size() << endl;

  if (d.empty()) {
      cout << "Deque is now empty." << endl;
  }
    
}



int main(int argc, char const *argv[]) {
  
  return 0;
}
