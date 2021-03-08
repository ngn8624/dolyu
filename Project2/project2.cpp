#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <algorithm>
#include <iomanip>
#include <random>

using namespace std;
int main()
{
	vector<int> v;
	for (int i = 0; i < 100; ++i)
		v.push_back(i);

	std::random_device rd;
	std::mt19937 g(rd());
	std::shuffle(v.begin(), v.end(), g);

	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << endl;



	while (true)
	{
		int a, b = 0;
		cout << "Enter the First(a) Number(0~100)" << endl;
		cin >> a;
		try
		{
			if (a < 0 || a > 100) throw a;
			while (true)
			{
				cout << "Enter the Second(b) Number(0~100)" << endl;
				cin >> b;
				try
				{
					if ((b < 0 || b>100 || a > b))  throw b;

					int min = *min_element(v.begin() + a, v.end() - (100 - b));
					int max = *max_element(v.begin() + a, v.end() - (100 - b));

					cout << "min_element : " << min << endl;

					vector<int>::iterator iter = find(v.begin() + a, v.end() - (100 - b), min);
					int index = distance(v.begin(), iter);
					cout << "min_element of index " << index << endl;

					cout << "max_element : " << max << endl;

					vector<int>::iterator iter1 = find(v.begin() + a, v.end() - (100 - b), max);
					int index1 = distance(v.begin(), iter1);
					cout << "max_element of index " << index1 << endl;
					return 0;

				}
				catch (int exp2)
				{
					cout << " 0 < b < 100, a < b" << exp2 << endl;
				}

			}
		}
		catch (int exp1)
		{
			cout << "0 < a < 100 " << exp1 << endl;
		}
	}
	return 0;
}