#include <iostream>
using namespace std;
const int N = 256;

bool IsTheSameSymbol(char[], char);
int LengthString(char[]);
void ToDeleteSymbol(char[], char, int);

int main()
{
	cout << "Your text is: " << endl;
	char string[N] = "If your ! mouse is unavailable or; 12345 %& *&"
		" if you - prefer to use your keyboard, "
		" you can use the following keyboard... ";
	cout << string<< endl;
	
	char symbol;
	cout << endl << "Enter the symbol you want to delete: " << endl;
	cin >> symbol;

	for (int i = 0; i <= LengthString(string); i++)
	{
		int a = string[i];
		ToDeleteSymbol(string, symbol, i);
	}
	
	for (int i = 0; i <= LengthString(string); i++)
		cout << string[i];
	system ("pause");
	return 0;
}

bool IsTheSameSymbol(char a, char symbol)
{
		if (symbol == a)
			return true;
		else
	return false;
}

int LengthString(char string[])
{
	int i = 0;
	while (string[i])
		i++;
	return i;
}

void ToDeleteSymbol(char string[], char symbol, int i)
{
	for (int i = 0; i <= LengthString(string); i++)
	{
		char a = string[i];
		if (IsTheSameSymbol(a, symbol))
		for (int j = i; j <= LengthString(string); j++)
			string[i] = string[i + 1];
	}
}