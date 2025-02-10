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