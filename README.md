# Boolean-Matrix-Data-Structure
Boolean Matrix Data Structure in C, second year first semester's second Data Structures project (partial)

Be A Boolean square matrix )whose values are 0 or 1) n by n size.  
Define the DNF value of the matrix as:  
![image](https://raw.githubusercontent.com/aviasd/Boolean-Matrix-Data-Structure/master/README%20files/matrix.png)  
That is, 1 if and only if there is a row in the matrix whose all organs are 1s, else 0.  

#### For example:
**A**:

|   |   |   |
|:-:|:-:|:-:|
| 0 | 1 | 1 |
| 1 | 1 | 0 |
| 0 | 1 | 0 |

DNF(**A**) = 0

**B**:

|   |   |   |
|:-:|:-:|:-:|
| 0 | 1 | 1 |
| 1 | 1 | 1 |
| 0 | 1 | 0 |
  
DNF(**B**) = 1

The data structure supports the required operations:
1. *Init*(n, **A**) - Initialize a n-size matrix **A** whose organs are all equal to 1.  
Time Complexity: O(n^2) in the worst case.
2. *Flip*(**A**, i, j) - If **A**[i, j] = 0, makes it 1, and if **A**[i, j] = 1, makes it 0.  
Time Complexity: O(1) in the worst case.
3. *DNF*(**A**) - Returns the DNF value of **A**.  
Time Complexity: O(1) in the worst case.
