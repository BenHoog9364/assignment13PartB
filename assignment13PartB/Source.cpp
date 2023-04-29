// Ben Hoogsteden
// CIS 1202 C++ Software Development 
// April 29, 2023

#include <iostream>

using namespace std;
 
// Define a template function for floating-point types
template <typename T>
T half(T num) {
    return num / 2;
}

// Define a function for integer types
int half(int num) {
    return static_cast<int>(num / 2);
}

int main() {
    // Test the half function with different types
    float f = 10.5;
    double d = 20.5;
    int i = 30;

    cout << "Half of " << f << " is " << half(f) << endl;
    cout << "Half of " << d << " is " << half(d) << endl;
    cout << "Half of " << i << " is " << half(i) << endl;

    return 0;
}