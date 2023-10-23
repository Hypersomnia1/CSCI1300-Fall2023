#include <iostream>
#include <cassert> // Use this library for using the assert macro

using namespace std;

// Function Prototyping
// Remember to write the function prototypes always
int findTheWordInSentence(string, string);

string correctTheWord(string, int, string, string);

void testFindTheWordInSentence();

void testCorrectTheWord();

int main() {
    // Variables section
    string sentence = "The projct is for the class CSCII 1300";
    string misspelt_word = "projct";
    string correct_word = "project";

    cout << "------ Find and Replace String Program -------" << endl << endl;
    cout << "Original Sentence: " << sentence << endl;

    // // Fix the sentence below
    int position_of_the_word = findTheWordInSentence(sentence, misspelt_word);

    // // I know the position here, so lets correct the word
    sentence = correctTheWord(sentence, position_of_the_word, correct_word, misspelt_word);

    cout << "Correct Sentence: " << sentence << endl;

    // --------------------- --------------------- ---------------------

    // So far we have provided an input sentence, and corrected the misspelt word and displayed the correct one
    
    // Below we are calling two more "TEST" functions, that tests whether what we did so far works as we expected
    
    // The below function tests if 'findTheWordInSentence' function works as expected
    testFindTheWordInSentence();

    // The below function tests if 'correctTheWord' function works as expected
    testCorrectTheWord();

    return 0;
}

/*
This function finds a word (or a substring) in a sentence and returns the first character position of the 
matched word.
params sentence: The sentence that contains the word we are looking for
params misspelt_word: The word we are trying to find

returns position_of_the_word: The first index of the word when it's found in the sentence
*/
int findTheWordInSentence(string sentence, string misspelt_word) {
    // This function finds the word in that sentence and returns the first character position
    int position_of_the_word = sentence.find(misspelt_word);
    return position_of_the_word;
}


/*
This function replaces a word (or a substring) in a sentence and returns the new sentence
params sentence: The sentence that we will be replacing with the correct word
params position_of_the_word: The position of the misspelt word in the sentence
params correct_word: The word we will replace the misspelt word with in the sentence
params misspelt_word: The word we know is misspelt incorrectly in the sentence

returns position_of_the_word: The new corrected sentence
*/
string correctTheWord(string sentence, int position_of_the_word, string correct_word, string misspelt_word) {
    // Try to only understand what the arguments to the replace function does!
    sentence.replace(position_of_the_word, misspelt_word.length(), correct_word);
    return sentence;
}


/*
This function hypothetically tests the working of the findTheWordInSentence function
The way you do this is think about some inputs to the function and what the output should be
Then use the assert statement to verify if the function returned what you expected
*/
void testFindTheWordInSentence() {
    // We hypothetically test for 3 cases. Try to add more assert statements here.

    // Test Case 1: Word is found in the middle of the sentence
    assert(findTheWordInSentence("The quick brown fox", "quick") == 4);

    // Test Case 2: Word is found at the beginning of the sentence
    assert(findTheWordInSentence("The quick brown fox", "The") == 0);

    // Test Case 3: Word is not found in the sentence
    assert(findTheWordInSentence("The quick brown fox", "apple") == -1);

    cout << "All test cases for find the word passed!" << endl;
}


/*
This function hypothetically tests the working of the findTheWordInSentence function
The way you do this is think about some inputs to the function and what the output should be
Then use the assert statement to verify if the function returned what you expected
*/
void testCorrectTheWord() {
    // Test Case 1: Replace a misspelt word in the middle of the sentence
    assert(correctTheWord("The quick brwn fox", 10, "brown", "brwn") == "The quick brown fox");

    // Test Case 2: Replace a word at the beginning of the sentence
    assert(correctTheWord("The quick brown fox", 0, "A", "The") == "A quick brown fox");

    // Test Case 3: Replace a word with a longer word
    assert(correctTheWord("The quick brown fox", 4, "very quick", "quick") == "The very quick brown fox");

    cout << "All test cases for replace the sentence passed!" << endl;
}