/*
 * isUnique.cpp
 *
 *  Created on: 04-May-2019
 *      Author: duggal
 */

#include <iostream>
using namespace std;

// this is a function which takes String as input
// and returns true or false for uniqueness.
bool isUnique(string str)
{
	bool retVal = true;

	bool char_exist[26] = {false,};

	for(unsigned int index = 0; index < str.length(); ++index)
	{
		if(true == char_exist[str[index] - 'a'])
		{
			//exists..
			retVal = false;
			break;
		}
		else
		{
			char_exist[str[index] - 'a'] = true;
		}
	}

	return retVal;
}

//Main function to testisUnique()
int main()
{
	string str;

	cout << "Enter the string to test uniqueness: "<<endl;

	cin >> str;

	if(true == isUnique(str))
	{
		cout << "Yes! Unique"<<endl;
	}
	else
	{
		cout << "No! Not Unique" << endl;
	}

	return 0;
}
