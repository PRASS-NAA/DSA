class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int actualtime;

        actualtime = arrivalTime + delayedTime;

        if(actualtime >= 24)
        {
            actualtime = actualtime - 24;
        }

        return actualtime;
    }
};