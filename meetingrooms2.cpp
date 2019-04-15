/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    static bool comp(const Interval &a, const Interval &b){
        return (a.start<b.start);
    }
    int minMeetingRooms(vector<Interval>& intervals) {
        priority_queue<int,vector<int>, greater<int>> q;
        if(intervals.size()==0)
            return 0;
        sort(intervals.begin(),intervals.end(),comp);
        q.push(intervals[0].end);
        for(int i=1;i<intervals.size();i++){
            if(intervals[i].start>=q.top()){
                q.pop();
                q.push(intervals[i].end);
            }
            else
                q.push(intervals[i].end);
        }
        
        return q.size();
        
    }
};