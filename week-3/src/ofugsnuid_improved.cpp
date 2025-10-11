// [[file:../lecture.org::ofugsnuid_cpp_improved][ofugsnuid_cpp_improved]]
// [[file:lecture.org::ofugsnuid_cpp_improved][pledge]]
// Matthew Younger (pledged)
// pledge ends here


#include <iostream>
#include <bits/stdc++.h>

/*
Pseudocode:

ask for size (n number of nums to be received)
allocate sizeof(int) * n byte block of memory

fill IN REVERSE...

cout normally i = 0, 1, 2...
*/

int main(){

    // Trying to gain some efficiency (ChatGPT)
    // This alone seems to get the prog from 0.09 -> 0.03. BIG deal...
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // ChatGPT also recommended:
    static char outbuf[1 << 20];
    std::cout.rdbuf()->pubsetbuf(outbuf, sizeof(outbuf));

    // First, figure out the amount of memory we need to reserve for the numbers that will be received
    int SIZE {};
    std::cin >> SIZE;

    // Now, we set aside n slots of memory
    unsigned long long* numbers = nullptr;
    numbers = new unsigned long long[SIZE]; // dynamically allocate memory...

    // NOTE: AI recommended an interesting thing for this for loop...
    //       It's not very readable, but I see what it's doing, and it seems neat...
    // Decrementing for loop, because we're adding to the array BACKWARDS
    // range of loop: [0,n)
    for (int index = SIZE; index-- > 0;) {
        // numbers[n]    Add to the array in this manner:
        // numbers[n-1]
        // ...
        // numbers[0]
        std::cin >> numbers[index];
    }

    // Now, we just need to print the values...
    //for (int index = 0; index < SIZE; ++index) {
    //    std::cout << numbers[index] << '\n';
    //}

    std::string buffer;
    buffer.reserve(static_cast<size_t>(SIZE) * 12);  // ~= 10 digits + /n?

    for(int i = 0; i < SIZE; ++i) {
        buffer += std::to_string(numbers[i]);
        buffer.push_back('\n');
    }

    // write all at once:
    std::cout << buffer;

    // ALWAYS free up the chunk of heap we borrowed...
    delete [] numbers;
    numbers = nullptr;

    // Exit normally
    return 0;
}
// ofugsnuid_cpp_improved ends here
