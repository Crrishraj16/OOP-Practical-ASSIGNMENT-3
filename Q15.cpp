#include <iostream>
#include <string>
using namespace std;

int main() {
  // declare a string
  string sentence = "This is a sentence.";

  // declare variables to store the number of words and characters
  int num_words = 0;
  int num_characters = 0;

  // iterate over the string
  for (int i = 0; i < sentence.length(); i++) {
    // if the current character is a space, increment the number of words
    if (sentence[i] == ' ') {
      num_words++;
    }

    // increment the number of characters
    num_characters++;
  }

  // print the number of words and characters
  cout << "The sentence has " << num_words << " words and " << num_characters << " characters." << endl;

  return 0;
}
