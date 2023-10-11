# **Radix sort**

=> Radix sort is a **non-comparative** sorting algorithm, what the heck, well, rather than comparing elements **directly** <br>
Radix sort **distributes** the elements into **buckets** based on each digit's value. By repeatedly sorting the elements by their significant digits, from the LSD to the MSD, Radix sort finally achieves the sorting. <br>

<h3>General idea</h3>

- 1. Find the largest element in the array
- 2. Sort the element based on the unit place digits
- 3. Sort the element based on the tens place digits
- 4. Sort the element based on the hundreds place digits
- 5. ... And so on
- 6. Finally you end up with a sorted array


