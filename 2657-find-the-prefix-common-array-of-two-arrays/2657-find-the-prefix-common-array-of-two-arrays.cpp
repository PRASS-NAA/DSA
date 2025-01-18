class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> ans;
        int n = 0;

        while (n < A.size()) {
            int cnt = 0;

            for (int i = 0; i <= n; i++) {
                for (int j = 0; j <= n; j++) { 
                    if (A[i] == B[j]) {
                        cnt++;
                        break; 
                    }
                }
            }
            ans.push_back(cnt); 
            n++;
        }

        return ans;
    }
};
