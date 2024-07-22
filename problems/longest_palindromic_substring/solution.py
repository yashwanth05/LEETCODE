class Solution:
    def longestPalindrome(self, s: str) -> str:
        res = ""
        stlen = 0

        for i in range(len(s)):
            # Odd length palindromes
            l, r = i, i
            while l >= 0 and r < len(s) and s[l] == s[r]:
                len_palindrome = r - l + 1
                if len_palindrome > stlen:
                    res = s[l:r+1]
                    stlen = len_palindrome
                r += 1
                l -= 1

            # Even length palindromes
            l, r = i, i + 1
            while l >= 0 and r < len(s) and s[l] == s[r]:
                len_palindrome = r - l + 1
                if len_palindrome > stlen:
                    res = s[l:r+1]
                    stlen = len_palindrome
                r += 1
                l -= 1

        return res