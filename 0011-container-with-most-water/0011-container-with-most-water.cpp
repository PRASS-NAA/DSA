class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        int max_area = INT_MIN;
        int temp_area = 0;
        
        while(i<j)
        {
            if(height[i] > height[j])
            {
                temp_area = height[j]*(j-i);
                j--;
            }else{
                temp_area = height[i]*(j-i);
                i++;
            }
            max_area = max(temp_area,max_area);
        }

        return max_area;
    }
};