 int findMaxConsecutiveOnes(int* nums, int numsSize){
        int count = 0;
        int tmp = 0;
        int max = 0;
        
        for(int i = 0; i<numsSize; i++){
            if(nums[i] == 1){
                tmp++;
            }
            else{
                tmp = 0;
            }
            if(max<tmp) max = tmp;
            if(max<count) max = count;
            
            count = max;
            
        }
        
        return count;
    }
