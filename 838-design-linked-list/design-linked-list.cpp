class MyLinkedList {
    private:
    struct Node {
        int val;
        Node* next;
        Node(int x) {
            val = x;
            next = nullptr;
        }
    };
    Node* head;
    int size;
public:
   
    MyLinkedList() {
        head = nullptr;
        size = 0;
    }
    
    int get(int index) {
        if(index < 0 || index >= size){
            return -1;
        }
        Node* temp = head;
        for(int i = 0 ; i < index;i++){
            temp = temp->next;
        }
        return temp->val;
    }
    
    void addAtHead(int val) {
        Node * NN = new Node(val);
        NN->next = head;
        head = NN;
        size++;
    }
    
    void addAtTail(int val) {
        Node* NN= new Node(val);
        if(head == NULL) {
            head= NN;
        }
        else{
            Node* temp = head;
            while(temp->next != NULL){
                temp=temp->next;
            }
            temp->next = NN;
        }
        size++;

    }
    
    void addAtIndex(int index, int val) {
        if(index > size || index < 0 ) return ;
        if(index == 0){
            addAtHead(val);
            return ;
        }

        Node* NN = new Node(val) ;
        Node* temp = head;
        for(int i = 0 ; i < index - 1;i++){
            temp=temp->next;
        }
        NN->next = temp->next;
        temp->next = NN;
        size++;

    }
    
    // void deleteAtIndex(int index) {
    //     if(index < 0 || index >= size) return ;
    //     if(index == 0){
    //         Node* temp = head;
    //         head = head->next;
    //         delete temp;
    //     }
    //     else{
    //         Node* temp = head;
    //         for(int i = 0 ; i < index - 1;i++){
    //             temp = temp->next;
    //         }
    //         Node* d = temp->next;
    //         temp->next = d->next;
    //         delete d ;
    //     }
    // }

    void deleteAtIndex(int index) {
    if(index < 0 || index >= size) return;

    if(index == 0) {
        Node* temp = head;
        head = head->next;
        delete temp;
    } else {
        Node* temp = head;
        for(int i = 0; i < index - 1 && temp != nullptr; i++) {
            temp = temp->next;
        }

        if(temp == nullptr || temp->next == nullptr) return; // ✅ SAFETY CHECK

        Node* d = temp->next;
        temp->next = d->next;
        delete d;
    }

    size--; // ✅ Don't forget this
}

};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */