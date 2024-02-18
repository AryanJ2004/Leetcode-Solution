class Solution {
public:
    double average(vector<int>& salary) {
        double max=*max_element(salary.begin(),salary.end());
        double min=*min_element(salary.begin(),salary.end());
        double avg=0;
        for(auto s:salary)
        {
            if(s!=max && s!=min)
            avg+=s;
        }
        
        return avg/(salary.size()-2);
        

    }
};