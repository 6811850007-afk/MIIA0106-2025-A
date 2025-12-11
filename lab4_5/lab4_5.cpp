#include <iostream>
#include <cstdlib> 
#include <ctime>  

void guess_the_number_game_cpp() {
    std::srand(std::time(0));
    const int target_number = (std::rand() % 100) + 1;
    int guess = 0;
    int guesses_taken = 0;

    std::cout << "--- 🎲 Guess the Number Game (1-100) 🎲 ---" << std::endl;
    std::cout << "I have chosen a number between 1 and 100. Try to guess it!" << std::endl;

    while (guess != target_number) {
        std::cout << "Enter your guess: ";

        if (!(std::cin >> guess)) {
            std::cout << "❗ Invalid input! Please enter a whole number only." << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            continue; 
        }

        guesses_taken++;
        if (guess < target_number) {
            std::cout << "🚨 Too Low! Try a higher number." << std::endl;
        }
        else if (guess > target_number) {
            std::cout << "🚨 Too High! Try a lower number." << std::endl;
        }
    }
    std::cout << "\n🎉 Congratulations! You guessed the number!" << std::endl;
    std::cout << "The correct number was: " << target_number << std::endl;
    std::cout << "You took: " << guesses_taken << " guesses" << std::endl;
}

int main() {
    guess_the_number_game_cpp();
    return 0;
}