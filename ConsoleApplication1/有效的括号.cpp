#include <iostream>
#include <stack>
#include <string>
#include <unordered_map>

using namespace std;

bool isValid(string s) {
    stack<char> st;
    unordered_map<char, char> pairs = {
        {')', '('},
        {']', '['},
        {'}', '{'}
    };

    for (char c : s)
    {
        //检查配对
        if (pairs.count(c))
        {
            if (st.empty() || st.top() != pairs[c])
            {
                return false;
            }
            st.pop();
        }

        //入栈
        else {
            st.push(c);
        }
    }

    return st.empty();  // 栈空说明全部匹配
}