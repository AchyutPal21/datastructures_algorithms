#include <iostream>
#include <vector>
#include <stdexcept>


using namespace std;
void func(int a);

void increaseValue(int &num) {
  num++;
  return;
}

void increaseValue(int *num) {
  (*num)++;
  return;
}

int *getArray(size_t size, int initial_value = 0) {
  int *create_array {nullptr};

  create_array = new int[size];
  for (size_t i {0}; i < size; i++) {
    // create_array[i] = initial_value;
    *(create_array + i) = initial_value; // with pointer operations
  }

  return create_array;
}

int main(int argc, char const *argv[]) {
  // Temp variable int pointer
  // int *val {nullptr}; // declare a default value
  // val = &num; // declare num address to pointer val

  // Declare pointers
  // int num{1000};
  // increaseValue(num);
  // cout << "By reference: " << num << endl;

  // increaseValue(&num);
  // cout << "By pointer: " << num << endl;

  
  // Pointing an vector in the to the pointer
  // vector<int> nums{10, 20, 30, 40, 50};
  // vector<int> *nums_ptr{nullptr};
  // nums_ptr = &nums;

  // cout << "Pointer: " << nums_ptr << " Value at pointer: " << ((*(nums_ptr)).at(0)) << endl;
  // cout << "Pointer: " << nums_ptr << " Value at pointer: " << nums_ptr << endl;
  // bool first = true;
  // for (int n : *nums_ptr) {
  //   if (!first)
  //     cout << ", ";
  //   cout << n;
  //   first = false;
  // }
  // cout << endl;

  // Dynamic memory allocation in cpp
  // int *dynamic_int_ptr {nullptr};
  // dynamic_int_ptr = new int();
  // *dynamic_int_ptr = 100;
  // cout << "Dynamic Int Pointer Value: " << *dynamic_int_ptr << endl;
  // delete dynamic_int_ptr;

  // int *dynamic_arr_ptr {nullptr};
  // int size {0};

  // cout << "How big size of array does you need? ";
  // cin >> size;
  // dynamic_arr_ptr = new int[size];
  // delete[] dynamic_arr_ptr;

  // const & pointers
  /* <---- Multiline comment starts
  // ======================================================================
  // 1. Pointers to constants
    // The data pointed to by the pointers is constants and cannot be changed.
    // The pointer itself can change and point somewhere else.
  int high_score {100};
  int low_score {34};
  const int *score_ptr {&high_score};
  *score_ptr = 91; // ERROR
  score_ptr = &low_score; // OK


  // 2. Constant pointers
    // The data pointed to by the pointers can be changed.
    // The pointer itself cannot change and point somewhere else.
  
  int high_marks {98};
  int low_marks {31};
  int *const marks_ptr {&high_marks};

  *marks_ptr = 99; // OK
  marks_ptr = &low_marks; // ERROR


  // 3. Constant pointers to constants
    // The data pointed to by the pointer is constant and cannot be changed.
    // The pointer itself cannot change and point somewhere else.
  int high_speed {78};
  int low_speed {24};
  const int *const speed_ptr {&high_speed};

  *speed_ptr = 87; // ERROR
  speed_ptr = &low_speed; // ERROR

  // ======================================================================
  */ //<---- Multiline comment ends


  // Return pointer from a function
  // int *roll_numbers = getArray(5, 0);
  // for (int roll {0}; roll < 5; ++roll) {
  //   cout << roll << " ";
  // }

  // delete []roll_numbers;

  func(0);

  

  return 0;
}


void func(int a) {
  try {
    if (a == 0) {
      throw runtime_error("Divide by 0 error");
    }
    std::cout << "Func value: " << 10 / a << std::endl;
  } 
  catch (const std::runtime_error& e) {
    std::cout << e.what() << std::endl;
  }
}

