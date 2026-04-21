class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //create a hashMap to count every instance of a certain element
        unordered_map<int,int>hashMap;
        vector<int> ans;

        //iterate through original array and add to hashMap to count occurences
        for(int num : nums){
            hashMap[num]++;
        }

        //Then create a min heap so that the most frequent elements are first
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>heap;
        //enhanced for loop to add pairs from hashMap to queue
        //pop if the num of elements in the prio queue is too large
        //reference hashMap elements to not make copies
        for( auto& num : hashMap){
            heap.push({num.second, num.first});
            if(heap.size() > k){
                heap.pop();
            }
        }

        //add 
        while(!heap.empty()){
            ans.push_back(heap.top().second);
            heap.pop();
        }
        
       
        return ans;
    }
};
