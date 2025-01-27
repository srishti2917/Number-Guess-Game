#include <bits/stdc++.h>

void guessTheNumber() {
    std::cout << "Welcome to the Guess the Number game!" << std::endl;
    std::cout << "I am thinking of a number between 1 and 100." << std::endl;

    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(0)));
    int targetNumber = std::rand() % 100 + 1;

    // Initialize variables
    bool guessedCorrectly = false;

    while (!guessedCorrectly) {
        std::cout << "Take a guess: ";
        int guess;
        std::cin >> guess;

        // Validate input
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << " Enter a valid number." << std::endl;
            continue;
        }

        // Provide feedback
        if (guess < targetNumber) {
            std::cout << "Your guess is too low. Try again." << std::endl;
        } else if (guess > targetNumber) {
            std::cout << "Your guess is too high. Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the correct number." << std::endl;
            guessedCorrectly = true;
        }
    }
}

int main() {
    guessTheNumber();
    return 0;
}
