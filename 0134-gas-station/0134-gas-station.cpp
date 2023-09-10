class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int cur = 0;
        int total_fuel = 0, total_cost=0;
        int start = 0;
        for(int i = 0; i < gas.size(); i++) {
            total_fuel += gas[i];
            total_cost += cost[i];
        }
        
        if(total_fuel < total_cost) {
            return -1;
        }
        
        for(int i = 0; i < gas.size(); i++){
            
            cur += (gas[i] - cost[i]);
            if(cur < 0){
                start = i + 1;
                cur = 0;
            }
        }

        return start;
    }
};