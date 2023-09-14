# **Merge Sort**

General-purpose and **comparison-based sorting algorithm**, also in the family of **divide-and-conquer** algorithms.

#### **Principle**

First, divide the list into the smallest unit (1 element), then compare each element with the adjacent list to sort and merge the two adjacent lists. Finally, all the elements are sorted and merged.

Like all divide-and-conquer algorithms, merge sort divides a large array into two smaller subarrays and then recursively sort the subarrays.

=> Which leads for every cases , Best , Average, Worst, to a complexity of **O(nlog(n))**

#### **The task**

0. Merge sort -- Mandatory

<i>Write a function that sorts an array of integers in ascending order using the Merge Sort algorithm:</i>

**Prototype:** void merge_sort(int \*array, size_t size);

<i>You must implement the top-down merge sort algorithm</i>

When you divide an array into two sub-arrays, the size of the left array should always be <= the size of the right array. i.e. {1, 2, 3, 4, 5} -> {1, 2}, {3, 4, 5}
Sort the left array before the right array
You are allowed to use printf
You are allowed to use malloc and free only once (only one call)
Output: see example
In the file 0-O, write the Big O notations of the time complexity of the Merge Sort algorithm, with 1 notation per line:

in the best case
in the average case
in the worst case
