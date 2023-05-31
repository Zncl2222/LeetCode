class Twitter {
public:
    Twitter() {
        
    }
    
    void postTweet(int userId, int tweetId) {
        tweets.push_back({userId, tweetId});
    }
    
    vector<int> getNewsFeed(int userId) {
        vector<int> res;
        for (int i = tweets.size() - 1; res.size() < 10 && i >= 0; i--) {
            if (friends[userId].count(tweets[i].first) || tweets[i].first == userId)
                res.push_back(tweets[i].second);
        }
        return res;
    }
    
    void follow(int followerId, int followeeId) {
        friends[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        friends[followerId].erase(followeeId);
    }

private:
    vector<pair<int, int>> tweets;
    unordered_map<int, unordered_set<int>> friends;
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */