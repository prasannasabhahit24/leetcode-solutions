class Solution {
public:
    double angleClock(int hour, int minutes) {
        double minute=6.0*minutes;

        double hours=30.0*(hour%12)+0.5*minutes;

      double diff=abs(hours-minute);

        return min(diff,360.0-diff);
    }
};