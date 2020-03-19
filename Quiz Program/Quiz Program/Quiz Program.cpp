// Quiz Program.cpp 

#include <iostream>
#include <string>

using namespace std;

int Guess; // variable named Guess (will be an integer)
int Total; // variable named Total (will also be an integer)

class Questions // class called questions
{
private:
	string Question_Text;
	string Answer_1; //multiple choice
	string Answer_2;
	string Answer_3;
	string Answer_4;

	int Correct_Answer;
	int Question_Score;

public:
	void setValues(string, string, string, string, string, int, int); // setValues is a member function with 5 strings and 2 integers
	void askQuestion(); // askQuestion is a member function
};

int main()
{
	cout << "*  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *" << endl; // Design title
	cout << "*                                                           *" << endl;
	cout << "*                 WELCOME TO THE C++ QUIZ!                  *" << endl;
	cout << "*           ----------------------------------              *" << endl;
	cout << "*                                                           *" << endl;
	cout << "*                                                           *" << endl;
	cout << "*  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *" << endl;
	cout << endl;

	cout << "Press Enter to start the quiz ...." << endl;
	cin.get();

	string Name;
	int Age;
	cout << "What's your name? " << endl;
	cin >> Name;
	cout << endl;
	cout << "How old are you? " << endl;
	cin >> Age;
	cout << endl;
	string Respond;
	cout << "Are you ready to take the Quiz " << Name << "? Yes/No. " << endl;
	cin >> Respond;
	if (Respond == "yes")
	{
		cout << endl;
		cout << "Ok, Good Luck!" << endl;
		cout << endl;
	}
	else
	{
		cout << "Ok, Goodbye!" << endl;
		return 0;
	}


}