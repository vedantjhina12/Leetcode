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
    ListNode* reverse(ListNode* temp){
        ListNode* curr=temp;
        ListNode* prev=NULL;
        ListNode* forward=NULL;

        while(curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;

    }
    void inserAtTail(ListNode* &head, ListNode* &tail,int data){
        ListNode* ans=new ListNode(data);
        if(head==NULL){
            head=ans;
            tail=ans;
        }
        else{
            tail->next=ans;
            tail=ans;
        }
    }
    ListNode* add(ListNode* list1, ListNode* list2){
        int carry=0;
        ListNode* ansHead=NULL;
        ListNode* ansTail=NULL;
        while(list1!=NULL&&list2!=NULL){
            int sum=list1->val+list2->val+carry;
            int digit=sum%10;
            inserAtTail(ansHead,ansTail,digit); 
            carry=sum/10;
            list1=list1->next;
            list2=list2->next;
        }
        while(list1!=NULL){
            int sum=list1->val+carry;
            int digit=sum%10;
            inserAtTail(ansHead,ansTail,digit); 
            carry=sum/10;
            list1=list1->next;
            // list2=list2->next;
        }

        while(list2!=NULL){
            int sum=list2->val+carry;
            int digit=sum%10;
            inserAtTail(ansHead,ansTail,digit); 
            carry=sum/10;
            // list1=list1->next;
            list2=list2->next;
        }
        while(carry!=0){
            int sum=carry;
            int digit=sum%10;
            inserAtTail(ansHead,ansTail,digit); 
            carry=sum/10;
        }
        return ansHead;

    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* list1=reverse(l1);
        ListNode* list2=reverse(l2);

        ListNode* ans=add(list1,list2);
        
        return reverse(ans);
        
    }
};