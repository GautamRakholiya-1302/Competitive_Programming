class Solution
{
    public:
    Node* insertionSort(struct Node* head)
    {
        Node * cur = head;
        while(cur->next!=NULL){
            cur = cur->next;
            Node * ptr = head;
            while(ptr!=cur){
                if(ptr->data > cur->data){
                    
                    int temp = ptr->data;
                    ptr->data = cur->data;
                    cur->data = temp;
                }
                ptr = ptr->next;
            }
        }
        
        return head;
    }
    
};
