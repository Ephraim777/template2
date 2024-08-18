#include <iostream>
#include <map>
#include <vector>
#include <set>

int main()
{

	std::cout << "Enters count of digit\n";

	int count;

	std::cin >> count;
	std::set<int, std::greater<int>> s_set;
	for (int i = 0; i < count; i++)
	{
		int num;
		std::cout << "Enter number: ";
		std::cin >> num;

		s_set.insert(num);

	}
	for (auto& temp : s_set)
	{
		std::cout << temp << std::endl;
	}
		
}