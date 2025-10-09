// [[file:../lecture.org::ofugsnuid_cpp][ofugsnuid_cpp]]
// [[file:lecture.org::pledge][pledge]]
// Matthew Younger (pledged)
// pledge ends here


#include <iostream>
#include <vector>

// reverseVec definition:
void reverseVec(std::vector<int>&);

// printVecLines definition:
void printVecLines(std::vector<int>);

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

    // Call to our reversing func:
    reverseVec(numberVec);

    // Call to print the vector line-wise:
    printVecLines(numberVec);

    // Exit normally
    return 0;
}

// [[file:lecture.org::fn_reverseVec][fn_reverseVec]]
// Description: Function prints reverse of supplied vec
void reverseVec(std::vector<int>& vec){
    // Grab vec.size(), it'll be used more than once
    size_t vecSize = vec.size();

    // leverage implicit conversion
    int reps = vecSize / 2;

    // Index value must persist across loops
    //   Specifically, the left index
    int index = 0;

    for (size_t i {}; i < vecSize; ++i) {
        int leftCopy = vec[index];

        // Replace left value with right
        vec[index] = vec[vecSize - index - 1];
        // Replace Right with left's copy
        vec[vecSize - index - 1] = leftCopy;

        // Move indices inward by 1
        ++index;
    }
}
// fn_reverseVec ends here

// [[file:lecture.org::fn_printVecLines][fn_printVecLines]]
// Description: Facilitates Efficient Printing of vec line-wise
void printVecLines(std::vector<int> vec){
    // it's more optimal to append a string 1\n2\n3\n... and print once.
    std::string outputString {};

    for (size_t index = 0; index < vec.size(); ++index) {
        outputString.append(std::to_string(vec[index]));
        outputString.push_back('\n');
    }

    // Print the string once:
    std::cout << outputString;
}
// fn_printVecLines ends here
// ofugsnuid_cpp ends here
