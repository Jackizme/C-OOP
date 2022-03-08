
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Moveable.h"

#include <iostream>
#include <string>
#include <vector>
#pragma warning (disable : 4996)

using namespace std;

int main()
{
string userCommand;
vector <shape*> shapes;
vector <string> parameters;


	while (userCommand.compare("exit") != 0)
	{
	cout << "Enter the command: ";

	getline(cin, userCommand);

	char* cstr = new char[userCommand.length() + 1];

	strcpy_s(cstr, userCommand.length() + 1, userCommand.c_str());


	char* token;
	token = strtok(cstr, " ");

	//The String tokenizer looks at each char and when the desired break char is reached a token is made and pushes everything between that and the last token in to a parameter
	while (token != NULL) {
		parameters.push_back(token);
		token = strtok(NULL, " ");
	}

	//if the user inputs addR then this code runs
	string command = parameters[0];
	if (command.compare("addR") == 0) {
		//This code converts the users string input into ints
		int x = std::stoi(parameters[1]);
		int y = std::stoi(parameters[2]);
		int h = std::stoi(parameters[3]);
		int w = std::stoi(parameters[4]);


		//This creates a new object of rectangle and gives it the values of the above parameters
		rectangle* r = new rectangle(x, y, h, w);
		shapes.push_back(r);
		cout << r->toString();
	};
	if (command.compare("addS") == 0) {

		int x = std::stoi(parameters[1]);
		int y = std::stoi(parameters[2]);
		int e = std::stoi(parameters[3]);




		square* s = new square(x, y, e);
		shapes.push_back(s);
		cout << s->toString();
	}

	if (command.compare("addC") == 0) {

		int x = std::stoi(parameters[1]);
		int y = std::stoi(parameters[2]);
		int r = std::stoi(parameters[3]);


		circle* c = new circle(x, y, r);
		shapes.push_back(c);
		cout << c->toString();

	}
	if (command.compare("scale") == 0) {


		int shapeNo = std::stoi(parameters[1]);
		int x = std::stoi(parameters[2]);
		int y = std::stoi(parameters[3]);
		//This points to a the moveable class and retrives the shape number
		moveable* p = dynamic_cast<moveable*>(shapes[shapeNo - 1]);
		p->scale(x, y);

		cout << shapes[shapeNo - 1]->toString();

	}
	if (command.compare("move") == 0) {

		int shapeNo = std::stoi(parameters[1]);
		int x = std::stoi(parameters[2]);
		int y = std::stoi(parameters[3]);

		moveable* m = dynamic_cast<moveable*>(shapes[shapeNo - 1]);
		m->move(x, y);

		cout << shapes[shapeNo - 1]->toString();
	}


	//This cleares the parameters vector so previous shapes data doesnt effect new inputs
	while (!parameters.empty()) {
		parameters.pop_back();
	}
	cout << "Press any key to continue...";
	std::getchar();
}		return 0;
}


	
