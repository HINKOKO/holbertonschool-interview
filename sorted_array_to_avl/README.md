# **Array to AVL tree :tree:**

## **Task goal**

Given a sorted array, transform it into an AVL tree.

**Requirements**

- Prototype: avl_t *sorted_array_to_avl(int *array, size_t size);
- Where array is a pointer to the first element of the array to be converted
- And size is the number of element in the array
- Your function must return a pointer to the root node of the created AVL tree, or NULL on failure
- You can assume there will be no duplicate value in the array
- You are not allowed to rotate
- You can only have 3 functions in your file

## **Algorithm**

1. Get the middle of the array => make it root
2. Recursively do the same for left half and right half of array
   - Get middle of left half and make it left child of root created in step 1
   - Get middle of right half and make it right child of root created in step 1

To achieve that, and stick to requirements, we write:

**`avl_t new_node(avl_t *daddy, int n)`** to create a new node from integers of the array
**`avl_t *pick_and_insert(avl_t *node, int *array, int left, int right)`** to loop through the array and insert accordingly to the submiddles we find
**`avl_t *sorted_array_to_avl(int *array, size_t size)`** (our "main") Just return the call to our **pick_and_insert**

**Example of output expected**

```

Array => (001)(002)(020)(021)(022)(032)(034)(047)(062)(068)(079)(084)(087)(091)(095)(098)


AVL Tree has to be =>

                 .-----------------(047)-----------------.
       .-------(021)-------.                   .-------(084)-------.
  .--(002)--.         .--(032)--.         .--(068)--.         .--(091)--.
(001)     (020)     (022)     (034)     (062)     (079)     (087)     (095)--.
                                                                           (098)
```
