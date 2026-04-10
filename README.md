# Sorting Algorithms & Big O

## Description
Implementation of sorting algorithms in C with time complexity analysis.

## Learning Objectives
- Understand at least 4 sorting algorithms
- Understand Big O notation and time complexity
- Know how to choose the best algorithm for a given input
- Understand what a stable sorting algorithm is

## Requirements
- Ubuntu 20.04 LTS
- gcc with `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Betty style
- No global variables
- No more than 5 functions per file
- No standard library functions

## Data Structure
```c
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```

## Files
| File | Algorithm | Best / Average / Worst |
|------|-----------|----------------------|
| `0-bubble_sort.c` + `0-O` | Bubble Sort | O(n) / O(n²) / O(n²) |
| `1-insertion_sort_list.c` + `1-O` | Insertion Sort | O(n) / O(n²) / O(n²) |
| `2-selection_sort.c` + `2-O` | Selection Sort | O(n²) / O(n²) / O(n²) |
| `3-quick_sort.c` + `3-O` | Quick Sort (Lomuto) | O(nlog(n)) / O(nlog(n)) / O(n²) |
| `sort.h` | Header file | Prototypes & structures |

## Big O Notation
| Notation | Meaning |
|----------|---------|
| O(1) | Constant - always the same time |
| O(n) | Linear - grows with input size |
| O(n²) | Quadratic - two nested loops |
| O(nlog(n)) | Best possible for comparison sorts |

## Authors
- Lonie
- Ouarda
