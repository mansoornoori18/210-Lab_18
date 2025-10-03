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
    ReviewNode* newNode = new ReviewNode{    // Create new node, next points to current head
        rating, comment, head                   
    };    
    head = newNode;       // Update head pointer to the new node
}



int main (){


    cout << "life is beautiful\n";

    return 0;

}