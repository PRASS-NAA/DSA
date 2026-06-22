class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.lower()


        l = 0
        r= len(s)-1

        while l<r:
            while s[l] == " ":
                l += 1

            while s[r] == " ":
                r -= 1

            while not s[l].isalnum():
                l += 1

                if l >= len(s):
                    return True

            while not s[r].isalnum():
                r -= 1

                if r <= 0:
                    return True

            if l < len(s) and r > 0:
                if s[l] != s[r]:
                    return False

            l += 1
            r -= 1

        return True                
