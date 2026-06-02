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
        if(!head) return NULL;

        unordered_map<Node*, Node*> m;

        // First pass: copy nodes and next pointers
        Node* oldtemp = head;
        Node* newhead = new Node(head->val);
        m[head] = newhead;

        Node* newtemp = newhead;
        oldtemp = oldtemp->next;

        while(oldtemp) {
            Node* copyNode = new Node(oldtemp->val);
            m[oldtemp] = copyNode;
            newtemp->next = copyNode;
            newtemp = newtemp->next;
            oldtemp = oldtemp->next;
        }

        // Second pass: assign random pointers
        oldtemp = head;
        newtemp = newhead;
        while(oldtemp) {
            if(oldtemp->random) {
                newtemp->random = m[oldtemp->random];
            }
            oldtemp = oldtemp->next;
            newtemp = newtemp->next;
        }

        return newhead;
    }
};
