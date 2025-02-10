# Clear Digits, Clear Mind: Stack Solutions in Python & C++ 💻🐍
### 🧑‍💻 GitHub Repository: Clear Digits Solution
Check out my GitHub repository for a complete solution to the **Clear Digits** problem, along with detailed unit test cases! 🚀

🔗 **Repo Link:** **[Clear Digits](https://github.com/madiv9820/10_02_2025--3174_Clear_Digits)**

**What’s Included:**
- **Python and C++ Solutions:** Both languages are covered with an efficient stack-based approach to clear digits while preserving the string’s structure. 💻🐍
- **Unit Test Cases:** A comprehensive suite of test cases to ensure your solution works perfectly! 🔍✅
- **Documentation:** Easy-to-follow instructions and explanations of the approach. 📚

Feel free to check it out, clone it, and try out the solution on your own. I’d love to hear feedback or suggestions! 🤖💬

### 🧠 Intuition
We need to remove digits from the string, but here’s the catch: When we find a digit, we need to remove it *and* the closest non-digit character to its left! 🧐  
It’s like a magic trick: one disappears, and the other follows. 🎩✨  
To make this happen, we use a stack to keep track of characters, and whenever we hit a digit, we pop the last character from the stack (the non-digit) and skip the digit. 🔮

### 🚀 Approach
1. Loop through each character in the string.
2. If it’s a letter (non-digit), push it onto the stack.
3. If it’s a digit, pop the last character from the stack (goodbye closest non-digit! 👋).
4. After looping through, the stack holds all the good characters (non-digits) that survived, in order.
5. Rebuild the final string from the stack. 🧵🎉

### ⏱️ Time Complexity
We go through the string once, character by character, checking each one and either pushing or popping from the stack. Both push and pop are **$O(1)$** operations. So, it’s as simple as a single pass through the string.

**Time Complexity: $O(n)$** where **$n$** is the length of the string.

### 💾 Space Complexity
We’re using a stack to store the characters. In the worst case (if there are no digits), we store all characters in the stack. So, the space we need grows with the size of the input string.

**Space Complexity: $O(n)$** where **$n$** is the length of the string.

### 📝 Code Implementation
Now that we've covered the theory and complexities, here's how we implemented this using a stack! 💻🚀
- **Python Solution 🐍💡**
    ```python3 []
    class Solution:
        def clearDigits(self, s: str) -> str:
            # We need a stack to store our characters as we process them, like a little basket 🧺 for our goodies!
            characterStack = []  
            
            # Let's go through each character in the string like we're sorting through a messy drawer 🧦🔍
            for ch in s:
                # If it's a letter, we add it to the stack! (Nothing to worry about here, just good ol' alphabet)
                if ch >= 'a' and ch <= 'z':
                    characterStack.append(ch)  # Add this character to the stack 🏋️‍♂️
                # If it's a digit, we need to remove the most recent letter (pop the last one off the stack) 🤯
                elif characterStack:
                    characterStack.pop()  # Bye bye! 💨 We just kicked out the closest letter to this digit 🚪

            # Now, let's stitch the result back together, like crafting a sweater with all the leftover yarn 🧶
            clearedString = ''  
            for ch in characterStack:
                clearedString += ch  # Adding each character to form the final cleaned-up string 🧵

            # Return the newly cleared string without any digits! 🎉
            return clearedString
    ```
- **C++ Solution 🅲➕➕**
    ```cpp []
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
    ```