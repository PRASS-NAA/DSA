/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int>ans;

        ListNode* temp = head;

        while(temp!= nullptr)
        {
            ans.push_back(temp->val);
            temp = temp->next;
        }

        int n = ans.size();
        int i =0;
        int j = n-1;

        while(j>i)
        {
            if(ans[i] != ans[j])
            {
                return false;
            }
            i++;
            j--;
        }

        return true;
    }
};