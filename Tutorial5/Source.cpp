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
	
	
	//Function Overloading//////////////////
	/*int myInt = 1;
	string myStr = "Killian";
	string myStr2 = "Kaite";

	Print("Hello World!");
	Print(3);
	Print("String1", "String2");

	Print(myInt);
	Print(myStr);
	Print(myStr, myStr2);
	Print(myInt, myStr);*/


	//Strings///////////////////////////////
	
	//C style strings///
	//char MyCString[5] = { 'D', 'o', 'g', 's', '\0' };
	//cout << MyCString << endl;
	////C++ Strings///
	//string MyString;
	//MyString = "My dog's name is: ";
	//string fName = "Halen";
	//string lName = "Rowley";
	//MyString += fName;
	//MyString += " ";
	//MyString += lName;
	//cout << MyString << endl;

	//AND / OR Conditionals/////////////////
	
	/*int i = 1;
	int j = 2;
	int k = 3;
	if (i == k || i == j) {
		cout << "worked" << endl;
	}
	else if (i <= k && i < j) {
		cout << "worked" << endl;
	}
	else {
		cout << "Didn't work" << endl;
	}*/

	//Arrays////////////////////////////////

	int intArr[10];

	for (int i = 0; i < 10; i++) {
		intArr[i] = i * 5;
		cout << intArr[i] << endl;
	}

	cout << "the first element is: " << intArr[0] << endl;

	cout << "the fifth element is: " << intArr[4] << endl;

	int intArr2[] = { 1,123,43,345,66 };
	cout << "the 2nd element of arr2 is: " << intArr2[1] << endl;

	for (int i = 0; i < 5; i++) {
		cout << intArr2[i] << endl;
	}

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