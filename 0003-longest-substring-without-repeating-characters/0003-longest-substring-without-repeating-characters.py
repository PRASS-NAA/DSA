from collections import defaultdict

class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:

        left = 0
        d = defaultdict(int)
        maxval = 0
        localsum = 0

        for right in range(len(s)):

            d[s[right]] += 1
            localsum += 1
            if not self.isuniquedict(d):
                while not self.isuniquedict(d):
                    d[s[left]] -= 1

                    if d[s[left]] == 0:
                        del d[s[left]]

                    left += 1
                    localsum -=1 

            maxval = max(localsum, maxval)


        return maxval                


    def isuniquedict(self, d):
        flag = True

        for key in d:
            if d[key] > 1:
                flag = False
                break


        return flag                