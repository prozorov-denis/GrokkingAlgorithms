#pragma once
#include <list>

// Chapter 1.
int binary_search(int* elements, int n, int item);

// Chapter 2.
int find_smallest(int* elements, int n);
int* selection_sort(int* elements, int n);

// Chapter 3.
int fact(int n);

// Chapter 4.
int sum(int* elements, int n, int i);
int count_elements(std::list<int>* elements, std::list<int>::iterator iterator);
int find_max(std::list<int>* elements, std::list<int>::iterator iterator);
void quick_sort(int* elements, int n);