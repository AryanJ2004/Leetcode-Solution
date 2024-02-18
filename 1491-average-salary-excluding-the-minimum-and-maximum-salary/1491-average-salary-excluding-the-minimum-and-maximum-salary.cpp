class Solution {
public:
    double average(vector<int>& salary) {
        double max=*max_element(salary.begin(),salary.end());
        double min=*min_element(salary.begin(),salary.end());
        double sz=salary.size()-2;
        double avg=0;
        for(int i=0;i<salary.size();i++)
        {
            if(salary[i]!=max && salary[i]!=min)
            {
                avg+=salary[i];
            }
        }
        
        return avg/sz;
        

    }
};