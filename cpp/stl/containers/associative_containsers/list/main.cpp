#include <list>
#include <iostream>
#include <algorithm>
using namespace std;


/*

A list in C++ is a sequence container that allows you to store elements one after another.

Implemented as a doubly linked list and maintains both front and back for fast operations on both the ends.
Data is stored in non-contiguous memory, allowing fast insertion and deletion anywhere in the list (beginning, middle, or end).

*/

void methodsInList() {
  list<int> myList;

  myList.push_back(10);
  myList.push_back(20);
  myList.push_front(5);

  cout << "List elements: ";
  for (int n : myList){
    cout << n << " ";
  }
  cout << endl;


  // insert() is used for fast insertion if the position iterator is known; otherwise, traverse the list to reach the position.
  // push_front() is used to insert at the beginning and push_back() to insert at the end.
  list<int> l = {3, 2};
  l.push_back(5);
  l.push_front(1);
  auto it = l.begin();
  advance(it, 2);
  l.insert(it, 4);

  for (auto i : l)
    cout << i << " ";

  // Lists do not allow random access, so to get an element at a specific position, you need to go through the list one by one from the start or end.
  // The first and last elements can be accessed quickly using front() and back() methods.
  cout << l.front() << endl;
  cout << l.back() << endl;
  cout << *next(l.begin(), 2);

  // List elements can be updated by accessing them with an iterator and using the assignment operator (=) to set a new value.
  // Since lists do not support random access, you must use an iterator to reach the element you want to update.
  l.front() = 11;
  auto it = l.begin();
  advance(it, 2);
  
  *it = 10;

  for (auto i : l)
    cout << i << " ";

  // To find an element in a list, you can use the find() function from the <algorithm> library.
  // find() returns an iterator to the element if it is found, or the end iterator if it is not found.
  // Finding 4
  auto it = find(l.begin(), l.end(), 4);
  if (it != l.end())
    cout << *it;
  else
    cout << "Element Not Found!";

  // Traversing
  // A list can be traversed using begin() and end() iterators in a loop.
  // Start from begin() and keep moving the iterator until it reaches end(), accessing each element along the way.
  // Traversing using iterators
  for (auto it = l.begin(); it != l.end(); ++it)
    cout << *it << " ";

  // Deleting Elements
  // erase() deletes an element from the list using an iterator to its position.
  // pop_front() and pop_back() quickly delete the first and last elements of the list.

  l.pop_back();
  l.pop_front();
  
  auto it = l.begin();
  advance(it, 2);
  l.erase(it);

  for (auto i : l)
      cout << i << " ";





}



int main(int argc, char const *argv[]) {
  
  return 0;
}


