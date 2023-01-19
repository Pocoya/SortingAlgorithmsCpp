#include <bits/stdc++.h>

using namespace std;

//Using STL swap function
void bubbleSort(vector<int>& nums) {
    int n = nums.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (nums[j] > nums[j + 1]) {
                swap(nums[j], nums[j + 1]);
            }
        }
    }
}

//Using a temporary variable to swap
void bubbleSort2(vector<int>& nums) {
    int n = nums.size();
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n - i - 1; ++j) {
            if(nums[j] > nums[j + 1]) {
                int tmp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = tmp;
            }
        }
    }
}