# **HEAP INSERT**

## **General** <br>

What is that **Heap** Beast ? Remember of Binary trees ? <br>
Well, a **Heap** is a data structure ***often*** implemented as a binary tree, (but others implementations are possible).
A heap is a special tree-base data structure that satisfy the **heap property**.<br>

## **Heap property** <br>

***Min-heap ==>*** Every parent nodes must be less than or equal to its child nodes. This involves that the root node, the smallest element of the tree, is at the top.

***Max-heap ==>*** Every parent nodes must be greater than or equal to its childrens. This involves that the root node, the largest element of the tree, is at the top.

***Heap-property ==>*** Will be maintained by the **heap-insertion** and **heap-deletion** operations. Those operations take care to keep the heap-property.

Heap-property allows efficient access, which is useful for a variety of algorithms, including sorting, priority queues, and graph algorithms (can't wait to talk about graphs in Low_Level specialization!).

	Why the hell would I need that in my life ? 

	 ==> Take a look at those real use-cases...

- **Binary search:** Binary trees are often used to implement the binary search algorithm, which is commonly used in computer science to search for data in a sorted list. For example, binary search can be used to search for a specific word in a dictionary.

- **Sorting:** Binary heaps are often used as the underlying data structure for heap sort, a sorting algorithm that has several practical applications, such as sorting large datasets or in database indexing.

- **Priority Queues:** Binary heaps are also commonly used to implement priority queues, which are data structures that allow you to efficiently insert and retrieve elements based on their priority. This can be useful in a wide range of applications, such as ***scheduling jobs in operating systems or managing tasks in software programs.***

- **Huffman encoding: :horse:** Binary trees are used in Huffman encoding, a technique used to compress data by assigning ***variable-length codes to different characters based on their frequency in the data.*** **Huffman encoding** is used in several applications, such as compressing images, audio files, and video files.

- **Network routing:** Binary trees are used in network routing algorithms to determine the best path for data to travel from one computer to another through a network.

- **Data compression:** Binary trees and heaps are also used in data compression techniques, such as LZW (Lempel–Ziv–Welch) compression, which is used in file compression programs like gzip and compress.

## **Note on correct steps for insertion (in a Max Heap):** <br> 
 - **1.** Create a new node for the value to be inserted
 - **2.** Insert node at the next available position in bottom level (maintain complete BT property)
 - **3.** Compare value with parent, if greater than parent, then swap it.
 - **4.** Repeat 3 until Max-Heap property satisfied
  ==> value of any node should be greater than or equal its childrens
