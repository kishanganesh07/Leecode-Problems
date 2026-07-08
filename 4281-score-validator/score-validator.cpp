class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int score=0;
        int wickets=0;
        
        for(string i : events){
            if (wickets == 10)
                break;

            if (i == "W") {
                wickets++;
            }
            else if(i=="WD" || i=="NB"){
                score++;
            }
            else{
                score+=stoi(i);
            }
        }
       
         return {score, wickets};;

    }
};