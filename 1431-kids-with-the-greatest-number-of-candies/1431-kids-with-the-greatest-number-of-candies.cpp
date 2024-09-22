class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int most = INT_MIN;
        vector<bool>ans;

        for(int i =0;i<candies.size();i++)
        {
            if(candies[i] > most)
            {
                most = candies[i];
            }
        }

        for(int i =0;i<candies.size();i++)
        {
            int isbig = candies[i]+extraCandies;

            if(isbig >= most)
            {
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
        }

        return ans;
    }
};