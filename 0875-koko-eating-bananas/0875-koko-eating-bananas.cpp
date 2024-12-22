class Solution {
public:
    bool isPossible(vector<int>& piles, int mid, int h){
        int count = 0;
        for(int i=0;i<piles.size();i++){
            count += piles[i]/mid;
            if(piles[i] % mid){
                count++;
            }
        }

        if(count <= h) return true;
        return false;
    }


    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());
        
        while(low<high){
            int mid = low+(high-low)/2;
            if(isPossible(piles,mid,h)){
                high = mid;
            }else{
                low = mid+1;
            }
        }

        return low;
    }
};