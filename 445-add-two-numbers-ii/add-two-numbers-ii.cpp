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
    ListNode* insertattail(ListNode* &head,ListNode* &tail,int data){
        ListNode* ans=new ListNode(data);

        if(head==NULL){
            head=ans;
            tail=ans;
        }
        else{
            tail->next=ans;
            tail=ans;
        }
        return head;
    }

    ListNode*add(ListNode* list1,ListNode* list2){
        int carry=0;
        ListNode* anshead=NULL;
        ListNode* anstail=NULL;
        while(list1!=NULL||list2!=NULL||carry!=0){
            int val1=0;
            if(list1!=NULL){
                val1=list1->val;
            }
            int val2=0;
            if(list2!=NULL){
                val2=list2->val;
            }
            int sum=val1+val2+carry;
            int digit=sum%10;
            insertattail(anshead,anstail,digit);
            carry=sum/10;
            if(list1!=NULL)
                list1=list1->next;
            if(list2!=NULL)
                list2=list2->next;
        }
  
        return anshead;

    }

    ListNode* reverse(ListNode* head){
        ListNode* curr=head;
        ListNode* forward=NULL;
        ListNode* prev=NULL;

        while(curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }

        return prev;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* list1=reverse(l1);
        ListNode* list2=reverse(l2);
        ListNode*ans=add(list1,list2);
        return reverse(ans);
    }
};