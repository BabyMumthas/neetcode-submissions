class Solution {
public:
    bool isPalindrome(string s) {

        int left = 0;
        int right = s.size() - 1;

        while (left < right) {

            while (left < right && !isalnum(s[left])) {
                left++;
            }

            while (left < right && !isalnum(s[right])) {
                right--;
            }

            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};

/*Pattern
left = 0
right = n - 1

Rules
1. Skip special characters
2. Convert to lowercase
3. Compare left and right
4. If different → false
5. Move inward
6. Finish → true

Tiny Template
while(left < right)
{
    skip bad chars;

    if(tolower(s[left]) != tolower(s[right]))
        return false;

    left++;
    right--;
}
return true;
Interview Trigger Words

If you see:

Palindrome
Same forwards and backwards
Compare both ends

Immediately think:

TWO POINTERS

left ←
→ right
One-line Memory Trick
Palindrome = Two Pointers + Skip symbols + Lowercase compare*/