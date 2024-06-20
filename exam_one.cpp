//  Author: Lauren Collins
//  CU ID: laco9698
//  GitHub Username: LaurenC2022
//  Hours to complete lab: 

// how to run review sheet code: 
// save all changes 
// create exicutable file:
// g++ -o exam_one exam_one.cpp
// exam_one <<<<< this is the name of the new exicutable file created
// exam_one.cpp <<<< this is the file name
// run exicutable file: 
// ./exam_one
// update exicutable file with g++ -o command above, then run the exicutable again with ./exam_one

// basic check: 
#include <iostream>

using namespace std;

void foo(); 

int main() {

	cout << "Hello from exam review 1!"<< endl; 
    foo(); 
	return 0; 
}

void foo(){
    cout << "hello from foo" << endl; 
}

// 2270 Exam 1 Errata & Study Guide 
// With notes from Piazza and previous exams 

// Links
// Moodle Link:  2270 Exam 1 Errata & Study Questions: 17 June - 23 June / Exam 1 Study Guide
// Piaza links
// 1. Hichhiker's Guide: https://piazza.com/class/lw52ljn3aspj3/post/51
// 2. Study Deck: https://piazza.com/class/lw52ljn3aspj3/post/57
// Fall 2023 Exam: https://gist.github.com/johnsogg/e18f3cf07eb41767d4175702b93b9d6e
// Spring 2024 Exam: https://gist.github.com/johnsogg/8c4f06b3ea0f4f1ac6724de70478bd79

// Pre-question
// What is a pointer? 
// How do pointers give structure to liniked lists? 

// 1. Arrays and Vectors 
// 1a. What is a vector and how does it differ from an array?
// 1b. How do you access and modify elements in a vector?
// 1c. How do you add and remove elements from a vector?
// 1d. What are some ways to sort the elements in a vector?
// 11e. What's the difference between the size and capacity of a vector?
// 1f. How do you find the size and capacity of a vector?
// 1g. Why might you choose to use a vector over an array in C++?
// 1h. Alternately, why might you choose an array over a vector?
// 1i. What are some common operations that can be performed on vectors in C++?

// 2. Pointers, Memory, and Linked Lists
// 1a. What is a linked list and how does it differ from an array or vector?
// 2b. How do you declare a linked list and initialize it with values?
// 3c. How do you access and modify elements in a linked list?
// 4d. How do you add elements to the end of a linked list?
// 5e. How do you insert a new element into a linked list at a specific position?
// 6f. How do you remove elements from a linked list?
// 7g. How do you traverse through linked list elements?
// 8h. How do you create a new node in a linked list and add it to the list?
// 9i. How do you remove a node from a linked list?
// 10j. How do you determine if the linked list is empty?
// 11k. How do you find the size of a linked list?

// 3. Pointers, Membory and Linked List: Programming Questions 
// 3a. How might you reverse a linked list?
// 3b. How might you sort a linked list in ascending order?
// 3dc. How might you search for the offset of a specific value in a linked list?
// 3e. How might you concatenate two linked lists? (e.g. [a, b] + [c, d] => [a, b, c, d])
// 3f. How might you split a linked list into two separate lists at a specific position?
// 3g. How might you find the middle element in a linked list? (and "middle" would need to be defined exactly)

// 4. More Linked Lists and Doubley linked list questions 
// 4a. How might you implement a circular linked list and traverse it in a loop?
// 4b. How might you implement a doubly linked list so you can navigate both forwards and backwards through the list?
// 4c. In the above cases of doubly-linked and circular lists, what additional complexity is involved with operations like append, insert, remove, or find?
// 4d. Think of use cases where these augmented linked lists would be useful.

// 5. Memory Allocation
// 5a. What is heap memory and how does it differ from stack memory?
// 5b. Which kinds of variables are placed on the stack?
// 5c. What happens to stack memory when the function that allocated its associated memory completes?
// 5d. Which kinds of variables are placed in the heap?
// 5e. What happens to heap variables when the function that allocated that memory completes?
// 5f. What is a memory leak and how can those be avoided?
// 5g. What is the syntax to reference the data using an object pointer?

// 6. Recursion & Binary Trees
// 6a. What is a binary tree and how does it differ from a linked list?
// 6b. Explain the concept of a binary search tree and how it is used for searching and sorting?
// 6c. What are the steps required in traversing all nodes a binary tree in order?
// 6d. What is recursion?
// 6e. Why is recursion useful when dealing with trees?
// 6f. How can you calculate the size of a tree?
// 6g. How can you calculate the height of a tree?
// 6h. What is the difference between a pre-order, in-order, and post-order traversal of a binary tree? (Sometimes called a "walk".)

// 7. Computational Complexity and Sorting Algorithms

// Sorting complexity:
// 7a. What are the different types of sort algorithms we covered in the course?
// 7b. What are the steps for each of the sort algorithms covered?
// 7c. What is the worst case time complexity for each of the sorting algorithms?
// 7d. What is the worst case data sequence for each of the sorting algorithms?

// Binary tree complexity:
// 7a. What is the time complexity of an insertion in a binary search tree?
// 7b. What is the time complexity of a lookup in a binary search tree?
// 7c. What is the time complexity of finding the minimum or maximum element in a binary search tree?
// 7d. If we removed the word 'search' from the above questions, would that have a meaningful effect on their answers? (Recall what makes a binary search tree different from a generic binary tree).

// Linked list complexity:
// 7a. What is the time complexity of calculating the length of a linked list?
// 7b. What is the time complexity of calculating the value at offset 4 of a linked list? (See note below)
// 7c. What is the time complexity of inserting a new node at the front of a linked list?
// 7d. What is the time complexity of removing all nodes with the value of 4?

// 8. Programming Questions
// 8a. Say you have two unordered linked lists. Write a program that uses the data from these two lists and adds them into a binary search tree.
// 8b. Say you have a binary search tree. Write a program to create an array of exactly the right size that contains all the data values in non-decreasing sort order.
// 8c. Say you have an unordered linked list, and you need to use that data to create two separate linked lists where one contains all the odd numbers, and the other contains all the even numbers.
// 8d. Write an algorithm to find the median value in a binary search tree. (The median is the value that is in the middle, if you line up all values.)



