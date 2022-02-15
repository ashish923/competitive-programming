 bool hasCycle(ListNode *head) {
        ListNode *slow = head;
        ListNode *fast = head;
        if(fast==NULL) return false;
        
        while(fast !=NULL && fast->next!=NULL ){
            slow = slow->next;
            fast = fast->next->next;
            if(fast == slow)
                return true;
        }
        
        return false;
            
        
        
    }