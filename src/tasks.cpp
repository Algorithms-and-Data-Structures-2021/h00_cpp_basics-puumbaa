#include <iostream>   // cout
#include <algorithm>  // copy, fill

#include "tasks.hpp"

// ИСПОЛЬЗОВАНИЕ ЛЮБЫХ ДРУГИХ БИБЛИОТЕК НЕ СОВЕТУЕТСЯ И МОЖЕТ ПОВЛИЯТЬ НА ВАШИ БАЛЛЫ

using std::cout;
using std::fill;
using std::copy;


// Задание 1
void swap_args(int *lhs, int *rhs) {
    int temp = *lhs;
    *lhs = *rhs;
    *rhs = temp;

}

// Задание 2
int **allocate_2d_array(int num_rows, int num_cols, int init_value) {
    if (num_rows <= 0 || num_cols <= 0) return nullptr;
    int **arr = new int *[num_rows];
    for (int i = 0; i < num_rows; ++i) {
        arr[i] = new int[num_cols];
    }
    for (int i = 0; i < num_rows; ++i) {
        for (int j = 0; j < num_cols; ++j) {
            arr[i][j] = init_value;
        }
    }
    return arr;
}

// Задание 3
bool copy_2d_array(int **arr_2d_source, int **arr_2d_target, int num_rows, int num_cols) {
    if (arr_2d_source == nullptr || arr_2d_target == nullptr) return false;
    if (num_rows <= 0 || num_cols <= 0) return false;

    for (int i = 0; i < num_rows; ++i) {
        for (int j = 0; j < num_cols; ++j) {
            arr_2d_target[i][j] = arr_2d_source[i][j];
        }
    }
    return true;
}

// Задание 4
void reverse_1d_array(vector<int> &arr) {
    int right = (int) (arr.size() - 1);
    for (int i = 0; i < right; ++i) {
        swap_args(&arr[i], &arr[right]);
        right--;
    }
}

// Задание 5
void reverse_1d_array(int *arr_begin, int *arr_end) {
    if (arr_begin == nullptr || arr_end == nullptr) return;
    while (arr_begin < arr_end) {
        swap_args(arr_begin, arr_end);
        arr_begin++;
        arr_end--;
    }
}

// Задание 6
int *find_max_element(int *arr, int size) {
    if (arr == nullptr || size <= 0) return nullptr;
    int *max = arr;
    for (int i = 1; i < size; ++i) {
        if (arr[i] > *max) max = &arr[i];
    }
    return max;
}

// Задание 7
vector<int> find_odd_numbers(vector<int> &arr) {
    vector<int> result;
    for(int x:arr){
        if (x%2==1) result.push_back(x);
    }
    return result;
}

// Задание 8
vector<int> find_common_elements(vector<int> &arr_a, vector<int> &arr_b) {
    vector<int> result;
    if (arr_a.empty()||arr_b.empty()) return result;
    for (int & i : arr_a) {
        for (int j : arr_b) {
            if (i==j) result.push_back(i);
        }
    }
}
