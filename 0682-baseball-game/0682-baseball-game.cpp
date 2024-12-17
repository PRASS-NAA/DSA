class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>ansarr;

        for(int i =0;i<operations.size();i++)
        {
            if(operations[i] == "D")
            {
                if(!ansarr.empty())
                {
                    int x = ansarr.back()*2;
                    ansarr.push_back(x);
                }

            }else if(operations[i] == "C")
            {
               if(!ansarr.empty())
               {
                    ansarr.pop_back();
               }

            }else if(operations[i] == "+")
            {
                if(ansarr.size() >=2)
                {
                    int y = ansarr[ansarr.size()-1];
                    int z = ansarr[ansarr.size()-2];
                    ansarr.push_back(y+z);
                }else{
                    ansarr.push_back(stoi(operations[i]));
                }
            }else
            {
                ansarr.push_back(stoi(operations[i]));
            }  
        }

        int sum = 0;
        for(int i =0;i<ansarr.size();i++)
        {
            sum += ansarr[i];
        }

        return sum;
    }
};