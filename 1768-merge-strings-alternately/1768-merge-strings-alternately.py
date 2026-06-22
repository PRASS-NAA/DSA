class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        
        ans = ""

        pt1 = 0
        pt2 = 0

        while pt1 < len(word1) and pt2 < len(word2):
            ans += word1[pt1]
            ans += word2[pt2]

            pt1 += 1
            pt2 += 1


        while pt1 < len(word1):
            ans += word1[pt1]
            pt1 += 1

        while pt2 < len(word2):
            ans += word2[pt2]
            pt2 += 1


        return ans            