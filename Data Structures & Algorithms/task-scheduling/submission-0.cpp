class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>count(26,0);
        for(char task : tasks){
            count[task - 'A']++;
        }
        //count all scheduled tasks
        priority_queue<int>maxHeap;
        for(int cnt : count){
            if(cnt > 0){
                maxHeap.push(cnt);
            }
        }
        //create a heap to manage tasks by priority
        int time = 0;
        queue<pair<int,int>>q;
        while(!maxHeap.empty() || !q.empty()){
            time++;
            //counting the amount of time it takes to process all tasks
            if(maxHeap.empty()){
                time = q.front().second;
            //if there are no tasks to process skip time to the next task
            }else{
                int cnt = maxHeap.top() - 1;
                maxHeap.pop();
                //progressed time and the Heap isn't empty so we count it as processed and push the remaining to the queue 
                //along with the next time that it can be processed
                if(cnt > 0){
                    q.push({cnt, time + n});
                }
            }

            if(!q.empty() && q.front().second == time){
                maxHeap.push(q.front().first);
                q.pop();
            }
        }

        return time;

    }
};
