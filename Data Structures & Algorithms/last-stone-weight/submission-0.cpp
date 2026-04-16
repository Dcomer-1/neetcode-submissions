class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {

        priority_queue<int> stoneWeights;

        for(int s : stones){
            stoneWeights.push(s);
        }

        while(stoneWeights.size() > 1){
            int first = stoneWeights.top();
            stoneWeights.pop();
            int second = stoneWeights.top();
            stoneWeights.pop();
            if((first - second) > 0 ){
                stoneWeights.push(first - second);
            }
        }
        stoneWeights.push(0);
        return stoneWeights.top();
    }
};
