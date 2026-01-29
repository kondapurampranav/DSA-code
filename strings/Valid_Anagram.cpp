// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

// Example 1:

// Input: s = "anagram", t = "nagaram"
// Output: true

// Example 2:

// Input: s = "rat", t = "car"
// Output: false

 
// Constraints:

// 1 <= s.length, t.length <= 5 * 104
// s and t consist of lowercase English letters.


#include <iostream>
#include <string>
#include <cctype>

bool areAnagrams(std::string str, std::string str2){
    if(str.length() != str2.length()){
        return false;
    }
    
    int arr[26]={0};
    int i=0,j=0;

    while(i<str.length()){
        arr[str[i]-'a']++;
        i++;
    }
    while(j<str2.length()){
        arr[str2[j]-'a']--;
        j++;
    }
    for(int i=0;i<26;i++){
        if(arr[i]!=0){
            return false;
        }
    }
    
    return true;
}

int main(){
    std::string str, str2;
    
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    std::cout << "Enter a string2: ";
    std::getline(std::cin, str2);

    if(areAnagrams(str,str2)){
        std::cout << "Anagrams";
    }
    else std::cout << "Not Anagrams";

    return 0;
}