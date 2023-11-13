#include <iostream>
#include <string>
using namespace std;

void ChangeStr(string& str);
void Print(string str);
void Print(int i);
void Print(string str1, string str2);
void Print(int i, string str);
int main()
{
	//References////////////////////////////

	//string myStr = "Monk";

	//string& myRef = myRef;

	//cout << myRef << endl;
	//cout << myRef << endl;

	//myRef += " Fighter";

	//cout << myRef << endl;
	//cout << myRef << endl;

	//ChangeStr(myStr);

	//cout << myStr << endl;

	
	
	//Function Overloading////////////////////
	int myInt = 1;
	string myStr = "Killian";
	string myStr2 = "Kaite";

	Print("Hello World!");
	Print(3);
	Print("String1", "String2");

	Print(myInt);
	Print(myStr);
	Print(myStr, myStr2);
	Print(myInt, myStr);

	system("pause");
}

void ChangeStr(string& str) {
	str += "!";
}

void Print(string str) {
	cout << str << endl;
}

void Print(int i) {
	cout << i << endl;
}

void Print(string str1, string str2) {
	cout << str1 << " " << str2 << endl;
}

void Print(int i, string str) {
	cout << i << " " << str << endl;
}