// [[file:../lecture.org::cpp_vidsnuningur_sizet][cpp_vidsnuningur_sizet]]
// [[file:lecture.org::cpp_vidsnuningur_sizet][pledge]]
// Matthew Younger (pledged)
// pledge ends here


#include <iostream>

int main() {

    // init a new char array and init it as empty:
    const int SIZE {1000};
    char strArr[1000] {};

    // Get input
    std::cin.getline(strArr, SIZE);

    // Calculate the length
    size_t len { 0 };
    while (strArr[len] != '\0')
        len++;

    // Print array in reverse
    for (size_t i = 0; len-i > 0; i++)
        std::cout << strArr[len-i-1];


    // lastly, flush buffer.  Weee....
    std::cout << std::endl;

    // Exit successfully
    return 0;
}
// cpp_vidsnuningur_sizet ends here
