///week05-3b.cpp 學習計畫 Built-in Funtion 第1題
///LeetCode 58. Length of Last Word 最後一個字的長度
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);///string字串stream串流
        string now;///現在的字串
        while(ss >> now){///很像 week05-1 的 while(cin >> s1)
            ///啥都做，就會一直讀到最後一個數

        }
        return now.length();///現在的字串長度
    }
};
