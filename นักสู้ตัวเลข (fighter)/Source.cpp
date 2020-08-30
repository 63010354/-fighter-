#include<iostream>
using namespace std;

int critOdd, critEven, HPodd, HPeven;

int attacked(int a)
{
	if (a % 2 == 0)
	{
		critEven += 1;
		critOdd = 0;
		if (critEven >= 3)
		{
			HPodd -= 3;
		}
		else if (critEven < 3)HPodd -= 1;
		return HPodd;
	}
	else
		if (a % 2 == 1)
		{
			critOdd += 1;
			critEven = 0;
			if (critOdd >= 3)
			{
				HPeven -= 3;
			}
			else if (critOdd < 3)HPeven -= 1;
			return HPeven;
		}
}
int main()
{
	int hp, atk;
	cin >> hp;
	HPodd = hp;
	HPeven = hp;
	for (int i = 0; i < 2 * hp; i++)
	{
		if (HPodd <= 0 || HPeven <= 0)
		{
			if (HPodd <= 0)
			{
				cout << "0\n" << atk;
			}
			else cout << "1\n" << atk;
			break;
		}

		cin >> atk;

		attacked(atk);

	}
}