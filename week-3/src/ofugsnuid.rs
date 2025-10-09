use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();
    let handle = stdin.lock();

    // Read the first line, which indicates the number of entries
    let mut lines = handle.lines();
    let num_inputs: usize = lines.next().unwrap().unwrap().parse().unwrap();

    // Initialize a vector to hold the numbers
    let mut number_vec: Vec<i32> = Vec::with_capacity(num_inputs);

    // Read the following numbers
    for _ in 0..num_inputs {
        let line = lines.next().unwrap().unwrap();
        let number: i32 = line.parse().unwrap();
        number_vec.push(number);
    }

    // Reverse the vector
    number_vec.reverse();

    // Print each number in the reversed vector
    for number in number_vec {
        println!("{}", number);
    }
}
