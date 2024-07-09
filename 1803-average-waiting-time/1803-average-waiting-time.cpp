class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        vector<int>wq;
        int st = 0; 
        int ct = 0;  
        int wt = 0;  
        for(int i = 0; i < customers.size(); i++)
        {
            int arrivalTime = customers[i][0];
            int timeToCook = customers[i][1];

            if(st < arrivalTime) {
                st = arrivalTime; 
            }

            ct = st + timeToCook; 
            wt = ct - arrivalTime; 
            st = ct; 
            wq.push_back(wt); 
        }
        
        double sum = 0;
        for(auto it : wq)
        {
            //cout << it << " "; 
            sum += it; 
        }
        
        return sum / customers.size();
    }
};
