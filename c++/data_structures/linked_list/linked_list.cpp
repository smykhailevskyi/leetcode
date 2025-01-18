// Linked List implementation via struct
#include<iostream>

struct Node {
    int data;
    struct Node* next;
};

Node* Insert(Node* head, int x) {
    Node* temp = (Node*) malloc(sizeof(struct Node));
    temp -> data = x;
    temp -> next = NULL;
    if(head != NULL) temp -> next = head;
    head = temp;

    return head;
}

void Print(Node* head) {
    printf("List is: ");

    while(head != NULL) {
        printf(" %d", head -> data);
        head = head -> next;
    }
    printf("\n");
}


int main() {
    Node* head = nullptr; // empty list

    printf("Enter the number of the nodes: ");
    int i, n, x;
    scanf("%d", &n); // delete when size() function will be implemented

    for(i = 0; i < n; i++) {
        printf("Enter the number \n");

        scanf("%d", &x);
        head = Insert(head, x);
        Print(head);
    }
}

