// [[file:../lecture.org::cpp_average_character][cpp_average_character]]
// [[file:lecture.org::pledge][pledge]]
// Matthew Younger (pledged)
// pledge ends here

// [[file:lecture.org::pseudocode_average_character][pseudocode_average_character]]
// recieve input from STDIN -> myStrig
// for loop through myString, append ASCII value to an int
// floor divide by the length of string
// print character value
// exit
// pseudocode_average_character ends here


#include <iostream>
#include <string>

int main() {
    // Initialize empty string
    std::string myString {};

    // Gather input from user
    std::getline(std::cin, myString);

    // Fetches the string length
    int stringLength = myString.length();

    // Empty ascii sum for use in the for loop
    int asciiSum = 0;
    // Range-based is fine, don't care about indices of string
    for (char character: myString) {
        // Hold asciiValue temporarily (for readability, could remove for a marginal efficiency bump?)
        int asciiValue = static_cast<unsigned int>(character);
        // add asciiValue to persistent sum:
        asciiSum += asciiValue;
    }

    // Find the average ascii value:
    int asciiAverage = asciiSum / stringLength;

    // DEBUG: Helper code
    //std::cout << "Numerical Sum: " << asciiSum << '\n';
    //std::cout << "Numerical Average: " << static_cast<char>(asciiAverage) << '\n';

    // Output the resulting average character:
    std::cout << static_cast<char>(asciiAverage) << '\n';

    // Exit normally
    return 0;
}
// cpp_average_character ends here
