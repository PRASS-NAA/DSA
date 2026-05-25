from collections import defaultdict

class Solution:
    def totalFruit(self, fruits: List[int]) -> int:

        left = 0
        d = defaultdict(int)
        maxval = 0

        for right in range(len(fruits)):
            d[fruits[right]] += 1

            if len(d) > 2:
                while len(d) > 2:
                    d[fruits[left]] -= 1

                    if d[fruits[left]] == 0:
                        del d[fruits[left]]

                    left += 1

            maxval =  max(maxval, right - left + 1)


        return maxval                               
