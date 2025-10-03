#include<iostream>  // COMSC-210 | Lab 18 | Mansoor Noori
#include<string>    // IDE Visual Studio,
#include<iomanip>      

using namespace std;

// struct 
struct ReviewNode{
    double rating;       // Review rating
    string comment;      // Review comment
    ReviewNode* next;    // Pointer to the next node
};
// Function to add a new review node at the head of the linked list
void addAtHead(ReviewNode*& head, double rating, const string& comment){
    ReviewNode* newNode = new ReviewNode{rating, comment, head}; // Create new node, next points to current head
        head = newNode;       // Update head pointer to the new node
}
// Function to add a new review node at the tail of the linked list
void addAtTail(ReviewNode*& head, double rating, const string& comment){
    ReviewNode* newNode = new ReviewNode{ rating, comment, nullptr }; // New node's next is nullptr because it will be last
    if (head == nullptr){
        head = newNode;      // If list is empty, new node becomes the head
    } else {
        // Otherwise, traverse to the end and add the new node there
        ReviewNode* temp = head;
        while (temp->next != nullptr)
        temp = temp->next;
        temp->next = newNode;
    }
}




int main (){


    cout << "life is beautiful\n";

    return 0;

}