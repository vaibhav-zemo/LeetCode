#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <set>
using namespace std;

class Twitter
{
private:
    unordered_map<int, vector<int>> post;
    unordered_map<int, set<int>> friends;

public:
    Twitter()
    {
    }

    void postTweet(int userId, int tweetId)
    {
        if (!post.count(userId))
        {
            vector<int> temp;
            temp.push_back(tweetId);

            post[userId] = temp;
            return;
        }

        post[userId].push_back(tweetId);

        for (auto i = friends.begin(); i != friends.end(); i++)
        {
            set<int> s = i->second;
            if (s.find(userId) != s.end())
            {
                post[i->first].push_back(tweetId);
            }
        }

        return;
    }

    vector<int> getNewsFeed(int userId)
    {
        vector<int> ans;
        vector<int> posts = post[userId];
        for (int i = posts.size() - 1; i >= 0; i--)
        {
            ans.push_back(posts[i]);
        }
        return ans;
    }

    void follow(int followerId, int followeeId)
    {
        if (!friends.count(followerId))
        {
            set<int> temp;
            temp.insert(followeeId);

            friends[followerId] = temp;
            return;
        }

        friends[followerId].insert(followeeId);
        return;
    }

    void unfollow(int followerId, int followeeId)
    {
        set<int> s = friends[followerId];
        if (!friends.count(followerId) || s.size() == 0)
        {
            return;
        }

        if (s.find(followeeId) != s.end())
        {
            s.erase(followeeId);
            friends.erase(followerId);
            return;
        }
    }
};

int main()
{

    return 0;
}