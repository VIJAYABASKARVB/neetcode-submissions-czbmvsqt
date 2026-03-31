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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        //reverse the LL
        ListNode* prevnode = nullptr;
        ListNode* curr = head;

        while(curr){
            ListNode* temp = curr->next;
            curr->next = prevnode;
            prevnode = curr;
            curr = temp;
        }

        head = prevnode;

        //removing the Nth Node
        int cnt = 1;
        curr = head;
        prevnode = nullptr;

        while(curr){
            if(cnt == n){
                if(prevnode==nullptr){
                    head = curr->next;
                }
                else{
                    prevnode->next = curr->next;
                }
                delete curr;
                break;
            }
            prevnode = curr;
            curr = curr->next;
            cnt++;
        }

        //again reverse the LL
        prevnode = nullptr;
        curr = head;

        while(curr){
            ListNode* temp = curr->next;
            curr->next = prevnode;
            prevnode = curr;
            curr = temp;
        }

        return prevnode;
    }
};
