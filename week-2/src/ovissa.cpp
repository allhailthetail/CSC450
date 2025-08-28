// [[file:../lecture.org::ovissa_cpp][ovissa_cpp]]
// [[file:lecture.org::ovissa_cpp][pledge]]
// Matthew Younger (pledged)
// pledge ends here


#include <iostream>
#include <string>

int main() {
    std::string input {};
    int count {};

    std::cin >> input;

    for (auto c: input) {
        count++;
    }

    std::cout << count << '\n';

    return 0;
}
// ovissa_cpp ends here
