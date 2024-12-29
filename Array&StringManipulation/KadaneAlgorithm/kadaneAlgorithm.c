#include <stdio.h>
#include <limits.h>

int main() {
    int nums[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(nums) / sizeof(nums[0]);
    int maxSum = INT_MIN, currentSum = 0;

    for (int i = 0; i < n; i++) {
        currentSum = nums[i] > (currentSum + nums[i]) ? nums[i] : (currentSum + nums[i]);
        maxSum = maxSum > currentSum ? maxSum : currentSum;
    }

    printf("Maximum Sum: %d\n", maxSum);
    return 0;
}