/* Link list Node 
struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; */
class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        // Your code here
         //when LL is empty
     if(head == NULL){
    return -1;
}
    // when LL has 1 node
    if(head->next == NULL){
        return head->data;
    }

    // when LL has more than 1 node
    Node* slow = head;
    Node* fast = head;
   

    while(slow != NULL && fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow->data;
    }
};
