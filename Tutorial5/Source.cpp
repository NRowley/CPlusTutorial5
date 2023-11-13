#include <iostream>
#include <string>
using namespace std;

void ChangeStr(string& str);

int main()
{
	//References////////////////////////////

	/*string myStr = "Monk";

	string& myRef = myRef;

	cout << myRef << endl;
	cout << myRef << endl;

	myRef += " Fighter";

	cout << myRef << endl;
	cout << myRef << endl;

	ChangeStr(myStr);

	cout << myStr << endl;*/

	
	
	//Function Overloading////////////////////



	system("pause");
}

void ChangeStr(string& str) {
	str += "!";
}