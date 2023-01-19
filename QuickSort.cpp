#include <bits/stdc++.h>

using namespace std;

//QUICK SORT
void quickSort(vector<int>& nums, int left, int right) {
    if (left >= right) {
        return;
    }
    int pivot = nums[right];
    int partitionIndex = left;
    for (int i = left; i < right; ++i) {
        if (nums[i] <= pivot) {
            swap(nums[i], nums[partitionIndex]);
            ++partitionIndex;
        }
    }
    swap(nums[partitionIndex], nums[right]);
    quickSort(nums, left, partitionIndex - 1);
    quickSort(nums, partitionIndex + 1, right);
}
