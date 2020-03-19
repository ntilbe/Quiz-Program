// Quiz Program.cpp 

#include <iostream>
#include <string>

using namespace std;

int Guess; // variable named Guess (will be an integer)
int Total; // variable named Total (will also be an integer)

class Question // class called questions
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
	cout << "*           WELCOME TO THE OFFICE TRIVIA QUIZ!              *" << endl;
	cout << "*       -----------------------------------------           *" << endl;
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
	string Respond;
	cout << "Are you ready to take the Quiz " << Name << "? Yes/No. " << endl;
	cin >> Respond;
	if (Respond == "yes" || Respond == "Yes") // Continues on to quiz
	{
		cout << endl;
		cout << "Ok, Good Luck!" << endl;
		cout << endl;
	}
	else if (Respond == "No" || Respond == "no")
	{
		cout << "Ok, Goodbye!" << endl; // Exits
		return 0;
	}
	else
	{
		cout << "Invalid Response. Please try again." << endl; 
		return 0;
	}

	Question q1; // questions/instances
	Question q2;
	Question q3;
	Question q4;
	Question q5;
	Question q6;
	Question q7;
	Question q8;
	Question q9;
	Question q10;


q1.setValues("Which office employee did Michael hit with his car? ",
	"Ryan",
	"Meredith",
	"Kelly",
	"Dwight",
	2,  // the answer
	10); // points for this question

q2.setValues("What vegetable does Michael force feed Kevin? ",
	"Peas",
	"Carrots",
	"Broccoli",
	"Brussel Sprouts",
	3,  // the answer
	10);

q3.setValues("Who proclaims to be Tinkerbell at a meeting to amp up staff? ",
	"Michael",
	"Erin",
	"Kelly",
	"Nellie",
	4,  // the answer
	10);

q4.setValues("What does Carol dress as at the Diwali party? ",
	"A Hindu Princess",
	"A cheerleader",
	"A sexy cat",
	"Princess Jasmine",
	2,  // the answer
	10);

q5.setValues("What is the name of the book Michael wrote? ",
	"Somehow I Manage",
	"How to be the World's Best Boss",
	"Threat Level Midnight",
	"He didn't write a book",
	1,  // the answer
	10);

q6.setValues("In the first episode, during his prank, what does Michael accuse Pam of stealing? ",
	"Paper",
	"His lunch",
	"A stapler",
	"Post-it notes",
	4,  // the answer
	10);

q7.setValues("Who is Justice Beaver? ",
	"A character in Michael's book",
	"Crime fighting beaver",
	"Justin Bieber",
	"Dwight's imaginary friend",
	2,  // the answer
	10);

q8.setValues("Who ruined Pam's pregnancy secret during her wedding weekend? ",
	"Michael",
	"Dwight",
	"Erin",
	"Jim",
	4,  // the answer
	10);

q9.setValues("What is Michael's username for the online dating website? ",
	"Ready for marriage",
	"Kid Crazy",
	"Little Kid Lover",
	"Looking for women",
	3,  // the answer
	10);

q10.setValues("What is Scarnton's nickname? ",
	"The Green City",
	"The Electric City",
	"The Windy City",
	"The Big Apple",
	2,  // the answer
	10);

q1.askQuestion(); // member function
q2.askQuestion();
q3.askQuestion();
q4.askQuestion();
q5.askQuestion();
q6.askQuestion();
q7.askQuestion();
q8.askQuestion();
q9.askQuestion();
q10.askQuestion();


cout << "Your Total Score is " << Total << " out of 100" << endl;
cout << endl;

if (Total >= 70)
{
	cout << "Congratulations! You Passed!" << endl;
}
else
{
	cout << "Gee, You better brush up on your Office Trivia!" << endl;
	cout << endl;
	cout << "Better luck next time!" << endl;
}
return 0;
}
void Question::setValues(string q, string a1, string a2, string a3, string a4, int ca, int pa)
{
	Question_Text = q;
	Answer_1 = a1;
	Answer_2 = a2;
	Answer_3 = a3;
	Answer_4 = a4;
	Correct_Answer = ca;
	Question_Score = pa;
}
void Question::askQuestion()
{
	cout << endl;
	cout << Question_Text << endl;
	cout << "1. " << Answer_1 << endl;
	cout << "2. " << Answer_2 << endl;
	cout << "3. " << Answer_3 << endl;
	cout << "4. " << Answer_4 << endl;
	cout << endl;

	cout << "What is your answer?" << endl;
	cin >> Guess;

	if (Guess == Correct_Answer)
	{
		cout << endl;
		cout << "Great! You are correct." << endl;
		Total = Total + Question_Score;
		cout << "Score: " << Question_Score << " Out of " << Question_Score << "!" << endl;
		cout << endl;
	}
	else
	{
		cout << endl;
		cout << "Oh no! That is incorrect!" << endl;
		cout << "Score: 0" << " Out of " << Question_Score << "!" << endl;
		cout << "The correct answer is " << Correct_Answer << "." << endl;
		cout << endl;
	}

}