#include <iostream>
using namespace std;

struct node {
    int data;
    node * next;
    node(int val) {
        data = val;
        next = nullptr;
    }
};

class LinkedList {
    node * head;
public:
    LinkedList() {
        head = nullptr;
    }

    void insertnodetail(int data) {
        if(head == nullptr) {
            head = new node(data);
            return;
        }
        node * temp = head;
        while(temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = new node(data);
    }

    void deletenode(int pos) {
        if(head == nullptr) return;

        if(pos == 1) {  
            node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        node * temp = head;
        for(int i=1; i<pos-1 && temp!=nullptr; i++) {
            temp = temp->next;
        }

        if(temp==nullptr || temp->next==nullptr) return; 

        node * tod = temp->next;
        temp->next = temp->next->next;
        delete tod;
    }

    void print() {
        node * temp = head;
        while(temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    bool search(int k) {
        node *temp=head;
        while(temp!=nullptr){
            if(temp->data==k) return true;
            temp=temp->next;
        }
        return false;
    }

    int size() {
        int c=0;
        node *temp=head;
        while(temp!=nullptr){
            c++;
            temp=temp->next;
        }
        return c;
    }
};

int main() {
    LinkedList ll;
    ll.insertnodetail(1);
    ll.insertnodetail(2);
    ll.insertnodetail(3);
    ll.print();          // Output: 1 2 3
    ll.deletenode(2);
    ll.print();          // Output: 1 3
}
