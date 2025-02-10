#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    string clearDigits(string s) {
        // Create a stack to store our good characters (we'll remove digits and keep the good ones!) 🧺✨
        stack<char> characterStack;  
        
        // Loop through the string like we're sorting through a messy bag of stuff 🛍️
        for(const char& ch: s) {
            // If we find a letter (yay!), we add it to the stack for safekeeping 🏋️‍♂️
            if(ch >= 'a' && ch <= 'z') {
                characterStack.push(ch);  // Stack it up! 📦
            } 
            // If we find a digit (boo!), we remove the most recent letter from the stack (bye-bye, buddy!) 👋
            else if(!characterStack.empty()) {
                characterStack.pop();  // Poof! Gone like magic! 🎩✨
            }
        }

        // Now we need to rebuild our string from the stack, carefully one character at a time 🧵🪡
        string clearedString = "";
        while(!characterStack.empty()) {
            clearedString = characterStack.top() + clearedString;  // Add the top of the stack to the front 🏗️
            characterStack.pop();  // Pop it off after we're done 🎯
        }

        // Return the final string without digits, just the good stuff left behind! 🎉
        return clearedString;
    }
};    