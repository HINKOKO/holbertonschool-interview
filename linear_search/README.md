# **Linear search in skip list**


## **What is a Skip List?**

Picture in your mind a basic singly linked list... You have it ? well, now the basic idea behind a skip list is to create multiple parallels "layers" based on the original linked list you built, some parallels "fast lane" to move faster in the linked list, each lane as you go upward, requires from you to have a faster and faster german car. Here's a pictural representation
```
_____
     |  50 ---------------------------------------------------------------->
L  o |       Max speed , To infinite and beyond !!!
e  f |  
v    |  50 ------------------------------------> 1030
e  l |
l  a |  
s  n |  50----------------> 116-----------------> 1030
   e |        
   s |                        
_____|  50------> 60 -----> 116 ------> 172 -----> 1030
```

Hum, a skip list is then a data structure that provides an enhanced efficient way to search, insert and delete elements in a sorted linked list.
It's similar to our classic linked list, but with multiple layers of "faster" linked list that allows, hence, a faster searching.

## **In the real world**

Skip list are commonly used where searching and insertion operations are required:
1. Database indexing: can be used as an indexing structure to speed up operations.
2. Search engines: utilized to index web pages and enable quick searching based on keywords or relevance.
3. Priority queues: efficient insertion and removal of elements with logarithmic time complexity.
4. File system management: maintain directory structure and facilitate efficient searches, they enable a quick lookup in large file bases.
5. Network routing: employed in routing tables, of computer networks to efficiently determine the next hop for a given destination address.

### **Notes**

IF you want to give it a try, download all the files, but don't forget the ```-lm``` flag when compiling.
Because we use the ```sqrt()``` call from the <math.h> library in the ```init_express()``` function , our builder for express lane. :work:
