// [[file:../lecture.org::cpp_average_character][cpp_average_character]]
// [[file:lecture.org::pledge][pledge]]
// Matthew Younger (pledged)
// pledge ends here

// [[file:lecture.org::pseudocode_average_character][pseudocode_average_character]]
// recieve input from STDIN -> myStrig
// for loop through myString, append ASCII value to an int
// floor divide by the length (string)? print character value
// pseudocode_average_character ends here


#include <iostream>
#include <string>

int main() {
    // Initialize empty string:
    std::string myString {};

    // Gather input from user:
    std::cin >> myString;

    int stringLength = myString.length();

    int asciiSum = 0;

    for (char character: myString) {
        asciiValue = std::static_cast<int>(character);
        asciiSum += asciiValue;
    }

    std::cout << "Sum: " << asciiSum << '\n';

    return 0;
}
// cpp_average_character ends here
