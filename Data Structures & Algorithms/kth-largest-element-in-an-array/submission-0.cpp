class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //iterate through the vector and build max heap
        priority_queue<int>maxNums;
        int i = 1;
        for(int num : nums){
            maxNums.push(num);
        }

        //while int i is < k , pop elements then return the top
        while(i < k){
            maxNums.pop();
            i++;
        }

        return maxNums.top();
    }
};
