class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> ans;
        map<char, int> w1;
        map<int, char> w2;
        bool isSub;

        for (int i = 0; i < words1.size(); i++) {
            string word = words1[i];

            // Count characters in the current word of words1
            for (int k = 0; k < word.length(); k++) {
                w1[word[k]]++;
            }

            isSub = true; // Reset isSub for each word in words1

            // Check if the word is a superset of all words2
            for (int j = 0; j < words2.size(); j++) {
                string temp = words2[j];

                // Count characters in the current word of words2
                for (int l = 0; l < temp.length(); l++) {
                    w2[temp[l]]++;
                }

                // Check if current word of words1 contains all characters in current word of words2
                for (auto it : w2) {
                    bool found = false;
                    for (auto itt : w1) {
                        if ((it.first == itt.first) && (it.second <= itt.second)) {
                            found = true;
                            break;
                        }
                    }
                    if (!found) {
                        isSub = false; // If any character is not found or doesn't meet the count
                        break;
                    }
                }

                // Reset w2 for the next word in words2
                w2.clear();

                // If isSub is false, no need to check further for this word in words2
                if (!isSub) {
                    break;
                }
            }

            // If word satisfies all conditions, add to the result
            if (isSub) {
                ans.push_back(word);
            }

            // Reset w1 for the next word in words1
            w1.clear();
        }

        return ans;
    }
};
