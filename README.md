# [3174. Clear Digits](https://leetcode.com/problems/clear-digits)? More Like Digit Detox! 🧼📉😂

**Difficulty 🏔️:** Even Your Grandma Could Do It! 👵💻 <br>
**Topics Need to Know 🎓:** <br>
    **- String:** The Endless Knot You’ll Untangle for Fun! 🧵🤯 <br>
    **- Stack:** Because Who Doesn’t Love a Good Tower of Chaos? 🏗️😅 <br>
    **- Simulation:** It’s Like Playing God, But With Fewer Consequences! 🎮👾
<hr>

### Problem Statement 📝❓🔧
You're given a string, and your mission (should you choose to accept it) is to kick out all the digits! 😎🔢 The plan: grab the first digit, find the closest non-digit pal to its left, and poof—they’re both outta here! 👋🎯 Repeat until the digits are gone and you’re left with a clean, digit-free masterpiece. ✨💪
<hr>

### Examples 📚💡✨
- **Example 1:** <br>
**Input:** `s = "abc"` <br>
**Output:** `"abc"` <br>
**Explanation:**
Well, look at that! No digits in this string. It’s just chilling, doing its thing. No need for any drama here—just pure, peaceful characters living their best lives. 😌✨

- **Example 2:** <br>
**Input:** `s = "cb34"` <br>
**Output:** `""` <br>
**Explanation:** <br>
First, you spot the digit '3' at index 2, and its non-digit friend 'b' (index 1). Together, they vanish, and the string becomes "c4". <br>
Then, you repeat the same magic trick on the new string—‘4’ disappears with 'c', and poof, you’re left with an empty string. 🧙‍♂️💨
<hr>

### Constraints 🚧⚙️📏
- **1 <= s.length <= 100** <br>
So, your string can be as short as a tweet or as long as a novella. 📜🖋️

- `s` **consists only of lowercase English letters and digits.** <br>
It’s like a secret mix of letters and numbers—your string is basically a school exam with both ABCs and 123s. 😜🅰️1️⃣

- **The input is generated such that it is possible to delete all digits.** <br>
Don’t worry, the string isn’t too wild. There are no impossible situations—just an easy mission to clear out those digits like a ninja. 🥷✨
<hr>

### Hints 🧠💡🔍
1. Start from the left of the string, like a treasure hunt! 🏴‍☠️
2. When you hit a digit (🤯), find the nearest non-digit character to its left, and mark it like you're tagging your bestie in a photo! 📸👯‍♂️
3. Now, the fun part: delete all the digits AND the marked characters! 🗑️💥 Bye-bye, clutter!

Repeat until you have a nice, clean string with no digits—just pure character goodness! ✨😎
<hr>