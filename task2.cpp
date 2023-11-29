#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(nullptr)));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    std::cout << "Welcome to the Guessing Game!\n\n";

    do {
        std::cout << "Guess the number (between 1 and 100): ";
        std::cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            std::cout << "Too high! Try a lower number.\n";
        } else if (guess < secretNumber) {
            std::cout << "Too low! Try a higher number.\n";
        } else {
            std::cout << "\nCongratulations! You guessed the correct number in " << attempts << " attempts!\n";
        }
    } while (guess != secretNumber);

    return 0;
}
