#include <iostream>
#include <string>


bool IsKPeriodic(const int* k, std::string str)
{
	for (auto i=0;i<str.size()-*k;i++)
	{
		if (str[i] != str[i+(*k)])
			return false;
	}
	return true;
}

int main()
{
	int k=3; 
	std::string str = "abcabcabcabc";
	if (IsKPeriodic(&k,str))
		std::cout << "String <"<< str <<"> is periodic to number: " << k;
	else
		std::cout << "String is not periodic to number: " << k;
}
