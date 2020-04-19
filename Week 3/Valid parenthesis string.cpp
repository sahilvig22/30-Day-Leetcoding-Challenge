class Solution
{
public:
  bool checkValidString(string s)
  {
    stack<int> open, star;
    int len = s.length();

    for (int i = 0; i < s.length(); i++)
    {
      if (s[i] == '(')
        open.push(i);

      else if (s[i] == '*')
        star.push(i);

      else
      { //Case 3: ')'
        if (!open.empty())
          open.pop();

        else if (!star.empty())
          star.pop();

        else
          return false;
      }
    }

    //Now process leftover opening brackets in the open stack

    while (!open.empty())
    {
      if (star.empty())
        return false;

      else if (open.top() < star.top())
      {
        open.pop();
        star.pop();
      }
      else
        return false; // if open.top() > star.pop()
    }
    return true;
  }
};
