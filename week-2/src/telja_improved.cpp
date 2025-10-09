// [[file:../lecture.org::telja_cpp_new][telja_cpp_new]]
// [[file:lecture.org::telja_cpp_new][pledge]]
// Matthew Younger (pledged)
// pledge ends here


#include <iostream>

int main() {
    // Initialize empty number (user will specify)
    int number {};

    // perhaps it's more optimal to append a string 1\n2\n3\n... and print once?
    std::string outputString {};

    std::cin >> number;

    for (size_t i = 1; i <= number; ++i) {
        outputString.append(std::to_string(i));
        outputString.push_back('\n');
    }

    // Print the string once at the very end:
    std::cout << outputString;

    // Exit normally.
    return 0;
}
// telja_cpp_new ends here
