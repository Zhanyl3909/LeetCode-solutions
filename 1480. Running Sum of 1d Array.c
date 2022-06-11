int* runningSum(int* nums, int numsSize, int* returnSize){
    
    int* arr = malloc(sizeof(int) * numsSize);   //creat an array 
    
    int sum = 0;  
    for (int i = 0; i < numsSize; i++) {  
        sum = sum + nums[i];  //sum gets elements from the nums array
        arr[i] = sum;  //and arr would store the sum
    }
    
    *returnSize = numsSize;  //because it returns as same as numsSize
    
    return arr;
}
