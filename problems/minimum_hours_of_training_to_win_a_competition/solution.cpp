class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
        int ans = 0;
        int tally = 0;
        for(int i=0;i<energy.size();i++){
            initialEnergy = initialEnergy - energy[i];
        }
        for(int i=0;i<experience.size();i++){
            if(initialExperience>experience[i]){
                initialExperience = initialExperience+experience[i];
            }
            else{
                int temp = experience[i] + 1 - initialExperience;
                initialExperience = initialExperience+experience[i]+temp;
                tally = tally+temp;
            }
            cout<<tally<<" "<<initialEnergy<<endl;
        }
        // cout<<tally<<" "<<initialEnergy<<endl;
        if(initialEnergy<=0){
            ans = tally + abs(initialEnergy) + 1;
        }
        else{
            ans = tally ;
        }
        return ans;
    }
};