// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

// Given a string s, return true if it is a palindrome, or false otherwise.

 

// Example 1:

// Input: s = "A man, a plan, a canal: Panama"
// Output: true
// Explanation: "amanaplanacanalpanama" is a palindrome.
// Example 2:

// Input: s = "race a car"
// Output: false
// Explanation: "raceacar" is not a palindrome.
// Example 3:

// Input: s = " "
// Output: true
// Explanation: s is an empty string "" after removing non-alphanumeric characters.
// Since an empty string reads the same forward and backward, it is a palindrome.


#include <iostream>
#include <string>

bool isPalindrome(std::string str){
    int i = 0,j = str.length()-1;
    
    while(i<j){
        while(!isalnum(str[i]) && i<j){
            i++;
        }
        while(!isalnum(str[j]) && i<j){
            j--;
        }
        if(tolower(str[i]) != tolower(str[j])){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}

int main(){
    std::string str;
    
    std::cout << "Enter the string: ";
    std::getline(std::cin , str);
    
    if(isPalindrome(str)){
        std::cout << "Palindrome";
    }
    else{
        std::cout << "Not Palindrome";
    }
    
    return 0;
}