#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int IsLeap(int year)
{
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

void PrintCalender(int startDay, int dayNumber, int day)
{
    int idx = 0;

    cout << "sun mon tue wed thu fri sat\n";
	
	for (int i = 0; i < startDay; i++)
	{
		cout << "    ";
	}
	
	for (int d = 1, j = startDay; d <= dayNumber; d++, j++)
	{
		cout << setw(3) << d << ' ';

        if (day == d)
        {
            idx = j % 7;
        }
		
		if (j % 7 == 6)
		{
			cout << '\n';
		}
	}

    string w[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };

    cout << '\n' << w[idx];
}

int GetDayOfMonth(int year, int month)
{
    int dayOfMonth[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	
	dayOfMonth[2] += IsLeap(year);
	
	return dayOfMonth[month];
}

int GetDay(int year, int month)
{
	int past = 0;
	
	for (int y = 1; y < year; y++)
	{
		past += IsLeap(y) + 365;
	}
	
	for (int m = 1; m < month; m++)
	{
		past += GetDayOfMonth(year, m);
	}
	
	return (past + 1) % 7;
}

int main()
{
    int y, m, d;
    int dayNumber;
    
    while (true)
    {
        cin >> y >> m >> d;

        dayNumber = GetDayOfMonth(y, m);
        
        // 날짜 범위 검사
        if (d <= dayNumber)
        {
            break;
        }

        cout << "INPUT ERROR!\n";
    }

    cout << y << ". " << m << '\n';

    int startDay = GetDay(y, m);
    
    PrintCalender(startDay, dayNumber, d);  // 해당 연도와 월에 해당하는 달력과 해당 일에 해당하는 요일을 출력합니다.

    return 0;
}