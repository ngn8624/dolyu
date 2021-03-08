#include <iostream>
#include <vector>
#include <deque>
#include <set>
#include <map>
#include <string>
#include <stack>
#include <queue>

using namespace std;

void associative_containers()
{
	{
		std::multimap<char, int> map;
		map.insert(std::pair('a', 10));
		map.insert(std::pair('b', 10));
		map.insert(std::pair('c', 101));
		map.insert(std::pair('d', 102));
		map.insert(std::pair('e', 103));
		map.insert(std::pair('f', 104));
		map.insert(std::pair('g', 105));
		map.insert(std::pair('h', 106));
		map.insert(std::pair('i', 107));
		map.insert(std::pair('j', 108));
		map.insert(std::pair('c', 10));
		map.insert(std::pair('a', 100));

		{
			char val = 'a';
			std::multimap<char, int>::iterator it;
			for (it = map.equal_range(val).first; it != map.equal_range(val).second; ++it)
			{
				std::cout << (*it).first << " : " << (*it).second << endl;
			}
			std::cout << endl;
		}
		{
			char val = 'g';
			std::multimap<char, int>::iterator it;
			for (it = map.equal_range(val).first; it != map.equal_range(val).second; ++it)
			{
				std::cout << (*it).first << " : " << (*it).second << endl;
			}
			std::cout << endl;
		}
		cout << endl;
	}
}
int main()
{
	associative_containers();

	return 0;
}