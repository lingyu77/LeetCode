/*
414. Third Maximum Number

Given a non-empty array of integers, return the third maximum number in this 
array. If it does not exist, return the maximum number. The time complexity 
must be in O(n).

Example 1:
Input: [3, 2, 1]

Output: 1

Explanation: The third maximum is 1.
Example 2:
Input: [1, 2]

Output: 2

Explanation: The third maximum does not exist, so the maximum (2) is 
returned instead.
Example 3:
Input: [2, 2, 3, 1]

Output: 1

Explanation: Note that the third maximum here means the third maximum 
distinct number.
Both numbers with value 2 are both considered as second maximum.
*/
//0 ms
int thirdMax(int* nums, int numsSize) {
    int *max1 = NULL, *max2 = NULL, *max3 = NULL;
    int i = 0;
    
    for (i = 0; i < numsSize; i++)
    {
        if (((max1 != NULL) && (nums[i] == (*max1))) ||
            ((max2 != NULL) && (nums[i] == (*max2))) ||
            ((max3 != NULL) && (nums[i] == (*max3))))
        {
            continue;             
        }
        
        if ((max1 == NULL) || (nums[i] > (*max1)))
        {
            max3 = max2;
            max2 = max1;
            max1 = nums + i;
        }
        else if ((max2 == NULL) || (nums[i] > (*max2)))
        {
            max3 = max2;
            max2 = nums + i;     
        }
        else if ((max3 == NULL) || (nums[i] > (*max3)))
        {
            max3 = nums + i;
        }      
    }

    if ((max3 == NULL))
    {
        return (*max1);          
    }
    else
    {
        return (*max3);    
    } 
}

// Reference
int thirdMax(int* nums, int numsSize) 
{
    /* define 3 long integers to evaluate max value */
    long maxValue1, maxValue2, maxValue3;
    /* set the 3 values to the the minimal value which can be stored in a long int */
    maxValue1 = maxValue2 = maxValue3 = (long)INT_MIN - 1;
    /* declare index for loop */
    int index;
    /* iterate array and assign values appropriately */
    for (index = 0; index < numsSize; index++)
    {
        /* if current number equals 1st max value, skip everything else */
        if (nums[index] == maxValue1)
        {
            continue;
        }
        
        /* else we can start comparing current values */
        /* if current value is greater than 1st value, swap all values */
        if (nums[index] > maxValue1)
        {
            maxValue3 = maxValue2;
            maxValue2 = maxValue1;
            maxValue1 = nums[index];
        }
        /* else if current value doesn't equal 1st & its greater than 2nd */
        else if (nums[index] != maxValue1 && nums[index] > maxValue2)
        {
            maxValue3 = maxValue2;
            maxValue2 = nums[index];
        }
        /* else if current value doesn't equal 2nd & its greater than 3rd */
        else if (nums[index] != maxValue2 && nums[index] > maxValue3)
        {
            maxValue3 = nums[index];
        }
    }

    /* if the 3rd position is greater than or equal to INT_MIN */
    /* return 3rd value because it holds our value, else return 1st */
    return (maxValue3 >= INT_MIN ? maxValue3: maxValue1);
}
