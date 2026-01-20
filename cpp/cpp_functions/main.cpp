#include <iostream>
#include <vector>

// PASS BY VALUE
// need to declare the function when you have defined the
// function below you have called because the compiler
// goes from top to bottom compiling your code and compiler 
// doesn't found your function.

int sumUp(int a, int b); // Declare the function (function prototype)

int multipleUp(int a = 1, int b = 1) {
  return a*b;
}

// PASS BY REFERENCE
void passByReference(int &num) {
  std::cout << (&num) << std::endl;
  std::cout << "Original value received: " << num << std::endl;
  num *= 10;
  std::cout << "Multiplied by 10: " << num << std::endl;
  return;
}

// Function overloading
void sayHello() {
  std::cout << "Hello!";
}

void sayHello(std::string greet) {
  std::cout << greet << std::endl;
  return;
}



int main(int argc, char const *argv[]) {
  std::cout << "Sum value: " << sumUp(234, 334) << std::endl; // Function calling
  std::cout << "Mult value: " << multipleUp(234, 334) << " mult value:" << multipleUp() << std::endl;

  int num = 20;
  std::cout << (&num) << std::endl;
  passByReference(num);
  std::cout << "Calling num from original: " << num << std::endl;

  return 0;
}

// Function defination
int sumUp(int a, int b) {
  return a+b;
}
    