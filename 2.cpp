//First ver.
class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        int sum, carry, val1, val2;
        ListNode *s1 = l1, *s2 = l2, *s3, *temp;
        s3 = new ListNode();
        temp = s3;
        sum = l1->val + l2->val;
        carry = sum / 10;
        temp->val = sum % 10;
        s1 = s1->next;
        s2 = s2->next;
        while (carry != 0 || s1 != nullptr || s2 != nullptr) {
            temp->next = new ListNode();
            temp = temp->next;
            if (s1 == nullptr) {
                val1 = 0;
            } else {
                val1 = s1->val;
            }
            if (s2 == nullptr) {
                val2 = 0;
            } else {
                val2 = s2->val;
            }
            sum = val1 + val2 + carry;
            carry = sum / 10;
            temp->val = sum % 10;
            if(s1!=nullptr){
            s1 = s1->next;
            }
            if(s2!=nullptr){
            s2 = s2->next;
            }
        }
        return s3;
    }
};

//Last ver.
class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        int sum, carry = 0, val1, val2;
        ListNode *s1 = l1, *s2 = l2, s3, *temp;
        temp = &s3;
        while (carry != 0 || s1 != nullptr || s2 != nullptr) {
            temp->next = new ListNode();
            temp = temp->next;
            if (s1 == nullptr) {
                val1 = 0;
            } else {
                val1 = s1->val;
                s1 = s1->next;
            }
            if (s2 == nullptr) {
                val2 = 0;
            } else {
                val2 = s2->val;
                s2 = s2->next;
            }
            sum = val1 + val2 + carry;
            carry = sum / 10;
            temp->val = sum % 10;
        }
        return s3.next;
    }
};