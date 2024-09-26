#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    // Create the vector to store the FizzBuzz results for numbers 1 to 100
    vector<string> fizzBuzz(100);

    // Fill the vector with FizzBuzz results by looping through numbers 1 to 100
    for (int i = 1; i <= 100; ++i) {
        // If the number is divisible by both 3 and 5, store "FizzBuzz"
        if (i % 3 == 0 && i % 5 == 0)
            fizzBuzz[i-1] = "FizzBuzz";
        // If the number is divisible by 3, store "Fizz"
        else if (i % 3 == 0)
            fizzBuzz[i-1] = "Fizz";
        // If the number is divisible by 5, store "Buzz"
        else if (i % 5 == 0)
            fizzBuzz[i-1] = "Buzz";
        // If the number is not divisible by 3 or 5, store the number as a string
        else
            fizzBuzz[i-1] = to_string(i);
    }

    // Print each FizzBuzz result from the vector
    for (int i = 0; i < 100; i++) {  
        cout << fizzBuzz[i] << endl; 
    }

    return 0;
}
