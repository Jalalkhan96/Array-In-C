# Array in C

Practice programs for one-dimensional arrays in C, written as coursework during my
BS Software Engineering at COMSATS University Abbottabad.

## Problem index

Each `.c` file is a standalone program.

| File | What it solves |
| ---- | -------------- |
| `1st and 2nd largest.c` | Read 5 numbers and print the second largest |
| `Array Element.c` | Print the fixed array `1, 2, 3, 4, 5` |
| `Common Number.c` | Print the numbers common to two fixed arrays (intersection) |
| `Different Number.c` | Print the numbers that appear in only one of two fixed arrays (symmetric difference) |
| `Float Number.c` | Print the fixed float array `1.5, 2.3, 3.7, 4.1, 5.9` |
| `Index Of Max Number.c` | Read 5 numbers and print the index of the maximum value |
| `Maximum Value.c` | Read 5 numbers and print the maximum value |
| `Number sort In order.c` | Insert each typed number at its sorted position (enter `-1` to stop), then display the sorted array |
| `Occurance of Number.c` | Count how many times each of 5 entered numbers occurs |
| `Palindrome array.c` | Check whether 10 entered numbers form a palindrome |
| `Reverse Array .c` | Reverse the fixed array `2, 7, 9, 3, 6` in place and display it |
| `SUM OF ALL NUMBER.c` | Sum of all elements of the fixed array `2, 7, 9, 3, 6` |
| `SUM OF EVEN NUMBER.c` | Sum of the elements at even indexes (0, 2, 4) of the fixed array |
| `SUM OF ODD NUMBER.c` | Sum of the odd values in the fixed array `2, 7, 9, 3, 6` |
| `Search For Number.c` | Linear search for a target number inside a randomly generated 10-element array |

## How to compile and run

Each file is standalone — pick one and compile it with a standard C compiler
such as `gcc`. File names contain spaces, so quote them:

```bash
gcc "Reverse Array .c" -o rev
./rev
```
