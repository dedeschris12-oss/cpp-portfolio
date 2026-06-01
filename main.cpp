//
//  main.cpp
//  Lab10
//
//  Created by CHRISTOPHER on 5/24/26.
//

#include <iostream>
#include <string>
#include <cctype> 

using namespace std;

// Function prototype as required
string titleCase(string originalText);

int main() {
    // Capture a string supplied by the keyboard
    string userInput;
    cout << "Enter a string to convert to Title-Case: ";
    getline(cin, userInput);

    // Call the function and print the result
    string result = titleCase(userInput);
    cout << "Result: \"" << result << "\"" << endl;

    return 0;
}

string titleCase(string originalText) {
    string processedText = "";
    bool newWord = true; // Tracks if the next alphabetic char should be capitalized

    for (size_t i = 0; i < originalText.length(); ++i) {
        char currentChar = originalText[i];

        if (isalpha(currentChar)) {
            if (newWord) {
                // Capitalize the first letter of a new word
                processedText += toupper(currentChar);
                newWord = false; // Any consecutive letters belong to this same word
            } else {
                // Ensure all other letters in the word are lowercase
                processedText += tolower(currentChar);
            }
        } else {
            // If it's a space, we only append it if we already have words in our result
            // AND the last appended character wasn't already a space
            if (currentChar == ' ') {
                if (processedText.length() > 0 && processedText[processedText.length() - 1] != ' ') {
                    processedText += ' ';
                }
            } else {
                // Append punctuation marks directly (e.g., '!')
                processedText += currentChar;
            }
            
            // Any non-alphabetic character resets the flag to look for a new word
            newWord = true;
        }
    }

    
    if (processedText.length() > 0 && processedText[processedText.length() - 1] == ' ') {
        // Build a new string without the last character to avoid forbidden string functions
        string trimmedText = "";
        for (size_t i = 0; i < processedText.length() - 1; ++i) {
            trimmedText += processedText[i];
        }
        processedText = trimmedText;
    }

    return processedText;
}
