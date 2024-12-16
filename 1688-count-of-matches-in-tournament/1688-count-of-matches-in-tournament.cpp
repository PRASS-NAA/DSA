class Solution {
public:
    int numberOfMatches(int n) {
        int teams = n;
        int matches = 0;
        int advteam = 0;

        while(teams > 1)
        {
            if(teams %2 == 0)
            {
                matches = teams/2;
                advteam += matches;
                teams = teams-matches;
            }else
            {
                matches = ((teams-1)/2)+1;
                advteam +=  matches;
                teams = teams-matches;
            }
            //teams-=matches;
        }

        return advteam;
    }
};