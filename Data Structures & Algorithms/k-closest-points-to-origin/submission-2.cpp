class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        //iterate through the list of points and store the Euclidean distance in a prio queue
        //need some way to sort the associated index
        priority_queue<pair<double, vector<int>>> maxHeap;
        vector<vector<int>> res;
        for(int i = 0; i < points.size(); i++){
            double eDistance = sqrt((points[i][0] * points[i][0]) + (points[i][1] * points[i][1]));
            maxHeap.push({eDistance, points[i]}); 
        }

        while(maxHeap.size() > k ){
            maxHeap.pop();
        }
        
        while(!maxHeap.empty()){
            res.push_back(maxHeap.top().second);
            maxHeap.pop();
        }

        return res;
        
    }
};
