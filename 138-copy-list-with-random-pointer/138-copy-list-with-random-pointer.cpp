/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* ptr = head;
        Node root = {0};
        unordered_map <Node*, Node*> table;
        Node* temp;
        Node* tail;
        table[NULL] = NULL;
        while(ptr != NULL){
            temp = new Node(ptr->val);
            table[ptr] = temp;
            ptr = ptr->next;
            if(root.next == NULL){
                root.next = temp;
                tail = temp;
            }
            else{
                tail->next = temp;
                tail = temp;
            }
        }
        ptr = head;
        while(ptr != NULL){
            table[ptr]->random = table[ptr->random];
            ptr = ptr->next;
        }
        
        return root.next;
    }
};