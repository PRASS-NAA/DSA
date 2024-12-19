class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        map<int,int>mpp;
        int percent = (arr.size())*(0.25);
        int element = 0;

        for(int i =0;i<arr.size();i++)
        {
            mpp[arr[i]]++;
        }

        for(auto it:mpp)
        {
            if(it.second > percent)
            {
                element = it.first;
            }
        }

        return element;
    }
};