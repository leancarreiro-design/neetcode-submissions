class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        // I will use the two pointers approach for this problem 
        // this way we use a O(1) space complexity and a O(n) time complexity
        int left = 0; 
        int right = numbers.size() - 1;
        while(left < right)
        {
            int sum = numbers[left] + numbers[right]; 
            if(sum == target)
            {
                return {left + 1, right + 1}; 
            }
            else if(sum>target)
            {
                right--; 
            }
            else
            {
                left++; 
            }
        }
        return {}; 

    }
};
