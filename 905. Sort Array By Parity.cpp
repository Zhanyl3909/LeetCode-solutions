

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize){
 
    int i,j,tmp;
    
    for(i=0; i<numsSize-1; i++){
        for(j=i+1; j<numsSize; j++){
            if(nums[i]%2 !=0 && nums[j]%2==0){
                tmp = nums[i];
                nums[i] = nums[j];
                nums[j] = tmp;
            }
        }
    }
    *returnSize = numsSize; //because it should return the equal size with numsSize;
    return nums;
    
}
