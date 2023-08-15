# **Heap Extraction**

Task is about to write a function that extracts the root node of a Max Binary Heap <br>
The root node is getting freed and replaced with the last <i>level-order</i> node of the heap <br>
Once replaced, we rebuild the heap as necessary.

There's a library in this folder **libheap.a** , to make everything work, compile with:
```
gcc -Wall -Wextra -Werror -pedantic -o 0-heap_extract 0-main.c 0-heap_extract.c binary_tree_print.c heapify_down.c -L. -lheap
```


## **<strikethrough>Why is the life so hard - Why we replace by the last level-order</striketrhough>**

We're going to extract the root node of a Max heap, we are going to do some mess... <br>
Replacing root node by the <i>last level order</i> is part of an optimization strategy to minimize the computational effort required to restore the heap property. <br>
Approach commonly known as "heapify-down" or "sift-down"

The last-level-order node, (the rightmost node in bottom level) is guaranteed to have smaller or equal values compared ot its child node, which will make the process of "heapify-down" more efficient. <br>
Hopefully, Alexa Orrico told us to do so, because if we were to replace with a random node, we certainly might need mire swaps and comparisions everywhere in the Galaxy to reach a stable heap-property.

Okay it might seems conterintuitive to replace the root of **max** heap with a **smaller** value, but it ensures our new "temp-root" **sink-down** to its proper position and BASTA.
