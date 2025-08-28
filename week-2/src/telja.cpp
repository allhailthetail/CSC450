// [[file:../lecture.org::telja_cpp][telja_cpp]]
// [[file:lecture.org::pledge][pledge]]
// Matthew Younger (pledged)
// pledge ends here


#include <iostream>

int main() {
    int num {1};

    int n {};

    std::cin >> n;

    for (auto i = 0; i < n; i++) {
        std::cout << num << '\n';
        num++;
    }

    return 0;
}
// telja_cpp ends here
