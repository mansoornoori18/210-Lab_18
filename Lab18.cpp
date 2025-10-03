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
// Function to output all reviews and calculate the average rating
void outputReviews(ReviewNode* head){
    if (head == nullptr){
        cout << "No reviews to display." << endl;
        return;
    }
    cout << "Outputting all reviews:" << endl;

    ReviewNode* current = head;
    int count = 0;
    double total = 0.0;

    // Traverse the linked list
    while (current != nullptr) {
        count++;
        // Output the review number, rating (1 decimal place), and comment
        cout << "    > Review #" << count << ": " << fixed << setprecision(1) << current->rating << ": " << current->comment << endl;
        total += current->rating;  // Sum ratings for average calculation
        current = current->next;
    }
    // Output average rating with 5 decimal places
    cout << "    > Average: " << fixed << setprecision(5) << total / count << endl;
}
// Function to free all nodes in the linked list to avoid memory leaks
void freeList(ReviewNode*& head){
     while (head != nullptr){
        ReviewNode* temp = head;
        head = head->next;
        delete temp;  // Delete the node
     }
}
// main function
int main (){
    ReviewNode* head = nullptr;  // Initialize linked list head pointer to nullptr
    int choice;

    // Ask the user how to add new nodes (head or tail)
    cout << "Which linked list method should we use?\n";
    cout << "    [1] New nodes are added at the head of the linked list\n";
    cout << "    [2] New nodes are added at the tail of the linked list\n";
    cout << "Choice: ";
    cin >> choice;
    cin.ignore(); // Clear newline character from input buffer

    // Validate user choice


    cout << "life is beautiful\n";

    return 0;

}