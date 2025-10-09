#include "vectorfunctions.h"

// void backwards(std::vector<int>& vec){
// }

// std::vector<int> everyOther(const std::vector<int>& vec){
//     return std::vector<int>();
// }

// int smallest(const std::vector<int>& vec){
//     return -1;
// }

// int sum(const std::vector<int>& vec){
//     return -1;
// }

// int veryOdd(const std::vector<int>& suchVector){
//     return -1;
// }



// Begin Implementation of Requested Functions:
// Matthew Younger - Pledged

// Function reverses a given vector of any length:
void backwards(std::vector<int>& vec) {
    std::vector<int> copy(vec);

    // My implementation of a decrementing for loop:
    for (size_t i {}; i < copy.size(); ++i) {
        int rev_index = vec.size() - i - 1;
        // first = last, etc, until end.
        vec[i] = copy[rev_index];
    }
}

// Function returns a new vector of every other element...
std::vector<int> everyOther(const std::vector<int>& vec){
    // New empty vector that'll store evens...
    std::vector<int> evens {};

    for(size_t i {}; i < vec.size();) {
        // push to back if index is even, else do nothing
        evens.push_back(vec[i]);

        // Increment by 2 ensures i always stays even.
        i += 2;
    }

    // Return evens vec to caller.
    return evens;
}

// Function returns the smallest value in the vector
int smallest(const std::vector<int>& vec){
    // Blindly assign first vec member as smallest.
    int min {vec[0]};

    // Eval each element of vec, replace min as necessary:
    for (int item: vec) {
        if (item < min) {
            min = item;
        }
    }

    // Return minimum value to caller
    return min;
}

// Function returns the sum of all the items in the vector
int sum(const std::vector<int>& vec){
    // New empty variable to hold the sum
    int s {};

    // Loop thru vec and append members to s sum
    for(int item: vec) s+= item;

    // return sum
    return s;
}

// Function returns count of very odd ints
int veryOdd(const std::vector<int>& suchVector){
    //Empty vector to hold oddest values
    int odd_count {};

    for (size_t i = 1; i < suchVector.size();) {
        if (suchVector[i] % 2 != 0) ++odd_count;

        // Keep i odd by adding 2
        i += 2;
    }

    // Return count of very odds
    return odd_count;
}
