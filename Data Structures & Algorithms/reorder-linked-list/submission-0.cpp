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
    void reorderList(ListNode* head) {
        if(!head) return;

        vector<ListNode*>nodeads;
        ListNode* curr = head;

        while(curr){
            nodeads.push_back(curr);
            curr = curr->next;
        }

        int i=0,j=nodeads.size()-1;

        while(i<j){
            nodeads[i]->next = nodeads[j];
            i++;
            if(i>=j){
                break;
            }
            nodeads[j]->next = nodeads[i];
            j--;
        }
        nodeads[i]->next = nullptr;
    }
};
