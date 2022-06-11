/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i, j;
    *returnSize = 2;
    int *arr;
   
    arr = (int *)malloc(sizeof(int )* (2));
    for(i=0; i<numsSize; i++){
        for(j=i+1; j<numsSize; j++){  //j starts from i+1, because may not use the same element twice.
            if(nums[i]+ nums[j] == target){
                arr[0] = i;
                arr[1] = j;
                break;
            }
        }
    }
    return arr;
}
