// [[file:../lecture.org::cpp_vidsnuningur][cpp_vidsnuningur]]
// [[file:lecture.org::pledge][pledge]]
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
    for (int i = len - 1; i >= 0; i--)
        std::cout << strArr[i];


    // lastly, flush buffer.  Weee....
    std::cout << std::endl;

    // Exit successfully
    return 0;
}
// cpp_vidsnuningur ends here
