// A word is considered valid if:

//     It contains a minimum of 3 characters.
//     It contains only digits (0-9), and English letters (uppercase and lowercase).
//     It includes at least one vowel.
//     It includes at least one consonant.

// You are given a string word.

// Return true if word is valid, otherwise, return false.

// Notes:

//     'a', 'e', 'i', 'o', 'u', and their uppercases are vowels.
//     A consonant is an English letter that is not a vowel.

 

// Example 1:

// Input: word = "234Adas"

// Output: true

// Explanation:

// This word satisfies the conditions.

// Example 2:

// Input: word = "b3"

// Output: false

// Explanation:

// The length of this word is fewer than 3, and does not have a vowel.

// Example 3:

// Input: word = "a3$e"

// Output: false

// Explanation:

// This word contains a '$' character and does not have a consonant.

 

// Constraints:

//     1 <= word.length <= 20
//     word consists of English uppercase and lowercase letters, digits, '@', '#', and '$'.


class Solution {
public:
    bool isValid(string word) {
        if (word.size() < 3) {
            return false;
        }
        unordered_set<char> v = {'a', 'e', 'i', 'o', 'u',
                                 'A', 'E', 'I', 'O', 'U'};
        bool arr[2] = {false, false};
        for (char& i : word) {
            if ((65 <= i && i <= 90) || (97 <= i && i <= 122)) {
                if (v.find(i) != v.end()) {
                    arr[0] = true;
                } else {
                    arr[1] = true;
                }
            } else if (48 <= i && i <= 57) {
                ;
            } else {
                return false;
            }
        }
        for (bool v : arr) {
            cout << v << " ";
            if (v == false)
                return false;
        }
        return true;
    }
};