class Twitter {
public:
unordered_set<int> user[502];

vector<pair<int,int>> tweet;
  Twitter() {

  }

  void postTweet(int userId, int tweetId) {
        tweet.push_back({tweetId,userId});
  }

  vector<int> getNewsFeed(int userId) {
        int t=tweet.size();
        vector<int> ans ;

        for(int i=t-1;i>=0 && ans.size()<10;i--){
            if(tweet[i].second==userId || user[userId].count(tweet[i].second)){
                ans.push_back(tweet[i].first);
            }
        }
        return ans;

  }

  void follow(int followerId, int followeeId) {
       user[followerId].insert(followeeId);
  } 
  void unfollow(int followerId, int followeeId) {
        user[followerId].erase(followeeId);
  } 
};