#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int nums[n];
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    int num_count[201] = {0}; // Assuming the range of integers is from -100 to 100
    int max_count = 0;
    for (i = 0; i < n; i++) {
        num_count[nums[i] + 100]++; // Shift the index to avoid negative numbers
        if (num_count[nums[i] + 100] > max_count) {
            max_count = num_count[nums[i] + 100];
        }
    }
    
    for (i = 0; i < 201; i++) {
        if (num_count[i] == max_count) {
            printf("%d %d\n", i - 100, max_count);
        }
    }
    
    return 0;
}

