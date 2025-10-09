// [[file:../lecture.org::ofugsnuid_cpp][ofugsnuid_cpp]]
// [[file:lecture.org::ofugsnuid_cpp][pledge]]
// Matthew Younger (pledged)
// pledge ends here


#include <iostream>
#include <vector>

// printVecLines definition:
void printVecRev(std::vector<int>);

int main(){
    // Number of inputs user plans to send to vec
    int numInputs {};
    std::cin >> numInputs;

    // Empty vec to hold values, set to appropriate size:
    // Define size now for efficiency vs continually resizing it
    //   with each entry:
    std::vector<int> numberVec(numInputs);

    for (size_t i = 0; i < numInputs; ++i){
        std::cin >> numberVec[i];
    }

    // Call to print the vector reversed line-wise:
    printVecRev(numberVec);

    // Exit normally
    return 0;
}

// [[file:lecture.org::fn_printVecRev][fn_printVecRev]]
// Description: Facilitates Efficient Printing of vec line-wise
void printVecRev(std::vector<int> vec){
    for (auto it = vec.rbegin(); it != vec.rend(); ++it) {
        std::cout << *it << '\n';
    }
}
// fn_printVecRev ends here
// ofugsnuid_cpp ends here
