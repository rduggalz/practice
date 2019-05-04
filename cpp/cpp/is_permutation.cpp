/*
 * is_permutation.cpp
 *
 *  Created on: 04-May-2019
 *      Author: duggal
 */

#include <iostream>

using namespace std;

bool is_permutation(string s1, string s2)
{
	bool retVal = true;

	int char_exist[26] = {0,};

	if (s1.length() != s2.length())
	{
		retVal = false;
	}
	else
	{
		for(unsigned int index=0; index < s1.length(); ++index)
		{
			char_exist[s1[index] - 'a']++;
		}

		for(unsigned int index=0; index < s2.length(); ++index)
		{
			char_exist[s1[index] - 'a']--;

			if(char_exist[s1[index] - 'a'] < 0)
			{
				retVal = false;
				break;
			}
		}
	}
	return retVal;
}

int main()
{
	string str_1;
	string str_2;

	cout << "Enter strings to check if they are permutation of each other "<<endl;

	cout << "String 1 "<<endl;
	cin >> str_1;

	cout << "String 2 "<<endl;
	cin >> str_2;

	if(true == is_permutation(str_1, str_2))
	{
		cout << "Yes! " << str_1 << " is permutation of " << str_2 << endl;
	}
	else
	{
		cout << "No! " << str_1 << " is not permutation of " << str_2 << endl;
	}

	return 0;
}



