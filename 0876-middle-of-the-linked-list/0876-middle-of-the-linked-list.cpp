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
    ListNode* middleNode(ListNode* head) {
    // Brute-force
        // ListNode* temp = head;
        // vector<int> nodeVec;
        // while(temp != NULL){
        //     nodeVec.push_back(temp -> val);
        //     temp = temp->next;
        // }
        // int mid = nodeVec.size()/2;
        // int count = 0;
        // ListNode* temp2 = head;
        // while(count < mid){
        //     temp2 = temp2->next;
        //     count++;
        // }
        // return temp2;
        
    // Slow Fast ptr
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};