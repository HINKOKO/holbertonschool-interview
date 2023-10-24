# **AVL or not AVL**

### **What the hell is an AVL ? (poetry)**

An AVL-tree --> **self-balancing** search tree where the height of the **left & right** subtrees of any node differ by **at most one.** This ensures the tree remains **balanced** and is a warranty of an **O(log(n))** time complexity for basic ops like <i>Lookup, insertion & deletion</i><br>
If at any time, that difference differs by more than 1, **rebalancing** is done to restore the property. **AVL** comes from the name of its Inventors **Adelson-Velsky & Landis**, two Soviets Inventors, may be because they enjoy twirling at night on soviet music they thought about this specail tree which "twist", "twirl" or "rotate" each time the property is violated. <br>

### **Properties**

- AVL tree is BST
  BST => Each node has at most 2 kiddos, for every node => All nodes values in left subtree < value in parent <br>
  => All nodes values in right subtree > value in parent
- Difference between left && right subtree differs by at most one
- Left && right subtree must also be BST's

They are commonly used in Database Systems and Compilers => efficient search and retrieval of data are essential <br>
However, the rebalancing operations (rotations) can become relatively expensives compared to other self-balancing tree like **Red-Black trees** <br>
When it comes to very frequent insertions and deletions, AVL might be less efficients than [**Red-Black trees**](https://github.com/HINKOKO/holbertonschool-system_algorithms/tree/main/red_black_tree)
