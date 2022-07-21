 ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* n = new ListNode();
        vector<int> a;
        ListNode* temp1 = l1;
        while(temp1!=NULL){
            a.push_back(temp1->val);
            temp1 = temp1->next;
        }
        vector<int> b;
        ListNode* temp2 = l2;
        while(temp2!=NULL){
            b.push_back(temp2->val);
            temp2 = temp2->next;
        }
        int i=0;
        int j=0;
        vector<int> c;
        int carry = 0;
        while(i!=a.size() || j!=b.size()){
         c.push_back((a[i]+b[j]+carry)%10);
         carry = (a[i]+b[j]+carry)/10;
            i++;
            j++;
        }
        if(a.size() < b.size()){
            while(j!=b.size()){
                c.push_back((b[j]+carry)%10);
                carry = (b[j]+carry)/10;
                j++;
            }
            if(carry!=0){
                c.push_back(carry);
            }
        }
        if(a.size() > b.size()){
            while(i!=a.size()){
                c.push_back((a[i]+carry)%10);
                carry = (a[i]+carry)/10;
                i++;
            }
            if(carry!=0){
                c.push_back(carry);
            }
        }
    
        n->val = c[0];
        ListNode* temp = n;
        int k = 1;
        while(k!=c.size()){
            ListNode* m = new ListNode(c[k]);
            temp->next = m;
            temp = temp->next;
            k++;
        }
    return n;
    }