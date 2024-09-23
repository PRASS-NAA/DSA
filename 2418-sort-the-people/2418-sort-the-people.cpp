class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        for(int i =0;i<heights.size();i++)
        {
            for(int j=i;j<heights.size();j++)
            {
                if(heights[i] < heights[j])
                {
                    string temp = names[i];
                    names[i] = names[j];
                    names[j] = temp;

                    int anotemp = heights[i];
                    heights[i] = heights[j];
                    heights[j] = anotemp;
                }
            }
        }

        return names;
    }
};