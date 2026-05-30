#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<string> back;
    stack<string> forward;
    string current = "http://www.acm.org/";

    while (true)
    {
        string cmd;

        cin >> cmd;

        if (cmd == "BACK" && !back.empty())
        {
            forward.push(current);
            
            current = back.top();

            back.pop();

            cout << current << '\n';
        }
        else if (cmd == "FORWARD" && !forward.empty())
        {
            back.push(current);

            current = forward.top();

            forward.pop();

            cout << current << '\n';
        }
        else if (cmd[0] == 'V')
        {
            if (!current.empty())
            {
                back.push(current);
            }

            forward = stack<string>();

            cin >> current;
            cout << current << '\n';
        }
        else if (cmd == "QUIT")
        {
            break;
        }
        else
        {
            cout << "Ignored\n";
        }
    }

    return 0;
}