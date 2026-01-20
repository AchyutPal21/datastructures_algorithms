#include <iostream>
#include <vector>

#define ABC "HELLO FROM ABC";

using namespace std;

int global_var{1000};
int main(int argc, char **argv) {
  //	int a; // unitialized
  //    int b = 1; // c-link initialized
  //    int c (30); // constructor style
  //    int d {34}; // c++11 standard initalided
  //    std::cout << a << b << c << d;

  // CHARACTER DATA TYES
  //    char  1byte | 8bits
  //    char16_t // At least 16bits
  //    char32_t // At least 32 bits
  //    wchar_t  Can represent the largest available character set

  // INTEGER DATA TYPES
  //    signed short int -> Atleast 16 bits
  //    signed int -> Atleast 16 bits
  //    signed long int -> Atleast 32 bits
  //    signed long long int -> Atleast 64 bits
  //
  //    unsigned short int -> Atleast 16 bits
  //    unsigned int -> Atleast 16 bits
  //    unsigned long int -> Atleast 32 bits
  //    unsigned long long int -> Atleast 64 bits

  // FLOATING POINT INTEGER
  //    float -> / 7 decimal digits
  //    double -> / 15 decimal digits
  //    long double -> / 19 decimal digits

  // BOOLEAN TYPES
  //    bool -> usually 8bits true or false

  // SIZE OF A VARIABLE
  // sizeof -> operator determines the size in bytes of a type or variable
  //    sizeof (int)
  //    sizeof (double)
  //    sizeof (some_variable)
  //    sizeof some_variable

  //  <climits> and <cfloat>
  //  The climit and cfloat include files contian size and precision infromationo
  //  about your implementation of c++
  //    INT_MAX INT_MIN LONG_MIN LONG_MAX FLT_MIN FLT_MAX

  //    CONSTANTS
  //    Literal constants
  //        The most obvious kind of constants
  //        x=12;
  //        y=2.54;
  //        name="Frank"
  //        middle_initial='J'
  //
  //        Integer Literal constants
  //        12 - an integer
  //        12U - an unsigned integer
  //        12L - a long integer
  //        12LL - a long long integer
  //        12.1 - a double
  //        12.1F - a float
  //        12.1L - a long double
  //
  //
  //    Declared constants
  //        const keyword
  //
  //        Constants declared using the const keyword
  //
  //        const double pi {3.1415}
  //        const int months_in_years {12};
  //        pi = 2.5 <- compiler error
  //
  //    Constants expressions
  //        const expr keyword
  //
  //    Enumerated constants
  //        enum keyword
  //
  //    Defined constants
  //        #define
  //

  // ARRAY & VECTOR
  //    int test_scores [5] {100, 99, 95, 89, 20};
  //    int hight_score_per_level [10] {23, 34};
  //    const int days_in_year {365};
  //    double heigh_temperatures [days_in_year] {0};
  //    int elements_values [] {2,3,35,1,9,234};
  //
  //    test_scores[0] = 200;
  //    std::cout << test_scores[0] << std::endl;
  //    std::cout << "size of test_scores: " << sizeof test_scores << std::endl;
  //    std::cout << "size of test_scores items: " << sizeof test_scores[0] << std::endl;
  //    std::cout << "count of test_scores: " << sizeof test_scores/sizeof test_scores[0] << std::endl;
  //
  //    int matrix [2][2] = {
  //        {1,2},
  //        {3,4}
  //    };
  //
  //    std::cout << matrix[0][0] << std::endl;

  //    vector<char> vowels;
  //    vector<char> characters (5);
  //    vector<int> characters (5);

  //    vector<char> letters {'a', 'b', 'c', 'd', 'e'};
  //    vector<int> count_vector {100, 98, 89, 85, 93};
  //    vector<double> test_scores (214, 80.0); // (size, value)
  //
  //    count_vector[0] = 200;
  //    std::cout << count_vector[0] << ", " << count_vector[1] << std::endl;
  //    std::cout << test_scores[0] << std::endl;
  //
  //    count_vector[0] = 34333;
  //    cout << count_vector[0] << "  " << endl;

  // STRING
  string s1;
  string s2{"Achyut"};
  string s3{s2};
  string s4{"TEST STRING", 8};

  cout << s2.at(0) << s2[2] << endl;

  return 0;
}
