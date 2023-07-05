#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> words; // Vector to store the words
    std::string word; // String to store each word read from input

    std::cout << "Enter a sequence of words separated by whitespace, including newline. Enter 'Quit' to terminate input:\n";

    // Read words from input until 'Quit' is entered
    while (std::cin >> word && word != "Quit") {
        words.push_back(word); // Add word to vector
    }

    // Print the unique words in the order they were entered
    std::cout << "Unique words entered:\n";
    for (size_t i = 0; i < words.size(); ++i) {
        bool isDuplicate = false;
        for (size_t j = 0; j < i; ++j) {
            if (words[j] == words[i]) { // Check for duplicates
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) { // If not a duplicate, print the word
            std::cout << words[i] << "\n";
        }
    }

    return 0;
}