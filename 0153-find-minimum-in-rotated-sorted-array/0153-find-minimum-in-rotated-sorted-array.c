int findMin(int* nums, int numsSize) {
    int min=100000000000;
    for (int i=0;i<numsSize;i++){
        if (nums[i]<min){
            min=nums[i];
        }
    }
    return min;
}