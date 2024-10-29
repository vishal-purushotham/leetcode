int maxMeetings(vector<int> start, vector<int> end) {
        int n=start.size();
        vector<pair<int,int>> meetings;
        for(int i=0;i<n;i++){
            meetings.push_back({end[i],start[i]});
        }
        sort(meetings.begin(),meetings.end());
        int cnt=1;
        int lastendtime=meetings[0].first;
        for(int i=1;i<meetings.size();i++){
            if(meetings[i].second>lastendtime){
 
                cnt++;
                lastendtime=meetings[i].first;
            }
        }
        return cnt;
    }