// [[file:../challenge.org::cpp_my_solution][cpp_my_solution]]
// [[file:challenge.org::pledge][pledge]]
// Matthew Younger (pledged)
// pledge ends here


#include <iostream>

// Contents of array don't matter, just that we can reverse...
void reverse(int[] , const int);

int main() {
    // Init C-style array length SIZE
    const int SIZE = 5;
    int a[SIZE] { 100, 200, 300, 400, 500 };

    // print Array
    for (int item: a) std::cout << item << ' ';
    std::cout << '\n';

    reverse(a, SIZE);

    // print Array
    for (int item: a) std::cout << item << ' ';
    std::cout << '\n';
}

// Define function
void reverse(int array[], const int size) {

    // Purposefully leverage implicit conversion :)
    int reps = size/2;

    // Define our index
    int l_ind {};

    for (size_t i {}; i <= reps; ++i) {
        int l_copy { array[l_ind] };    // Couldn't think of a way to NOT need a copy of one variable

        // Swap left for right
        //   r_ind = size-1 - l_ind
        array[l_ind] = array[size-l_ind-1]; array[size-l_ind-1] = l_copy;

        // Move indices inward by 1
        ++l_ind;
    }
}
// cpp_my_solution ends here
