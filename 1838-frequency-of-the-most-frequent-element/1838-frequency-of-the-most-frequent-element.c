#define MAX(a, b) (a > b ? a : b)

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int maxFrequency(int* nums, int numsSize, int k) {
    int right = 0;
    int left = 0;
    int res = 0;
    long long total = 0;
    
    qsort(nums, numsSize, sizeof(int), cmpfunc);
    while (right < numsSize) {
        total += nums[right];
        while ((long long)nums[right] * (right - left + 1) > total + k) {
            total -= nums[left++];
        }
        res = MAX(res, right - left + 1);
        right++;
    }
    return res;
}