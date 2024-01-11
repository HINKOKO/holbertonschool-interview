# **Heap Sort using sift-down**

Heap sort is a very fast algorithm. It runs in O(nlog(n)) time and requires only constant additional space. <br>
Kind of "evolved" selection sort, which uses a complete binary tree structure.

## **Array as a heap**

Usually, you'll be provided data to store in an **array.** The trick consists of working with the indices , which will simulate the tree structure for the heap sort, the basic idea is to turn the array into a binary heap structure:

- **root** is always first element of array (idx = 0)
- If current idx is <i>i</i>:
  - index of left child is <i>2 \* i + 1</i>
  - index of right child is <i>2 \* i + 2</i>
- parent index is <i>(i - 1) / 2</i>

Heap sort result in a **min-Heap** or **max-Heap**, of course at the beginning, our array, heapifyly represented is neither min or max, it has to be sorted, it is done by a process called **heapify** <br>
<br>
This procedure summarizes as follow:

1. start with the last leat node and go upwards until we reach the root.
2. Compare current node to its "brother" and remember which one is bigger
3. compare the bigger child with the parent, if child is bigger we swap their places, this orders our 3 elements according to max-heap rule (or min-heap if you reverse the rules).
4. If there was a swap in step 3, we apply a function called "sift-down" to the ex-parent, which went a level "down"
5. Move to the next pair of childrens and repeat
