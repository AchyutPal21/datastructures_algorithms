#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
A vector represents a dynamic sized array in the Standard Template Library(STL) 
that automatically grows when elements are added beyond current capacity.
*/

void vectorDeclaration() {
  // Declaration and Initialization of a Vector
  // A vector is defined as the std::vector class template in the <vector> header file.
  // vector<T> v;

  // Declare an empty vector
  vector<int> v1;

  // Declare vector with given size
  // and fills it with a value
  vector<int> v2 (3, 5);
  
  for (int x : v2) {
    cout << x << " ";
  }
    
  cout << endl;

  // Initializes vector using 
  // initializer list.
  vector<int> v3 = {1, 2, 3};

  // Print items of v3
  for (int x : v3) {
      cout << x << " ";
  }
}

int vectorOperations() {
  vector<char> v = {'a', 'f', 'd'};

  // Inserting 'z' at the back
  v.push_back('z');

  // Inserting 'c' at index 1
  v.insert(v.begin() + 1, 'c');

  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }

  

  return 0;
}

int accessElement() {
  vector<int> v = {10, 20, 30, 40};
    
    // Accessing using operator[]
    cout << "Element at index 2 using []: " << v[2] << endl;
    
    // Accessing using at()
    cout << "Element at index 3 using at(): " << v.at(3) << endl;
    
    // Uncommenting the next line will throw an 
    // out_of_range exception 
    // cout v.at(10)<<endl;
    return 0;
}

int updateElement() {
  vector<int> v = {10, 20, 30};
  cout << "Original value at index 1: " << v[1] << endl;

  // Updating the element at index q
  v[1] = 50;

  cout << "Updated value at index 1: " << v[1] << endl;
  return 0;
}

int vectorSize() {
  vector<char> v = {'a', 'c', 'f', 'd', 'z'};
  // Finding size
  cout << v.size();
}

int traverseVector() {
  vector<char> v = {'a', 'c', 'f', 'd', 'z'};

  // Traversing vector using range based for loop
  for (int i = 0; i < v.size(); i++)
      cout << v[i] << " ";
  return 0;
}

void deleteElements() {
  vector<char> v = {'a', 'c', 'f', 'd', 'z'};

  // Deleting last element 'z'
  v.pop_back();

  // Deleting element 'f'
  v.erase(find(v.begin(), v.end(), 'f'));
  
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
}

void vectorIsEmpty() {
  vector<int> v;
    
  // Check if the vector is empty
  if(v.empty()){
    cout<<"Vector is empty."<<endl;
  }
  
  // Add an element
  v.push_back(100);
  if(!v.empty()){
    cout<<"Vector is not empty. First element "<<v[0]<<endl;
  }
}

void declaration2DVector() {
  vector<vector<int>> matrix;
  vector<vector<int>> matrix = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };

  // 3 rows , 4 columns all initialized to 0
  vector<vector<int>> matrix2 (3,vector<int>(4,0));
  cout << matrix2[1][2];  

}

void traversing2DVector() {
  vector<vector<int>>matrix={
    {1,2,3},
    {4,5,6},
    {7,8,9}
  };
  cout<<"Traversing 2D vector using index-based loop:\n";
  
  // Traversing using index-based for loop
  for(int i=0;i<matrix.size();i++){
    for(int j=0;j<matrix[i].size();j++){
      cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
  }

}


int main(int argc, char const *argv[]) {
   


  return 0;
}
