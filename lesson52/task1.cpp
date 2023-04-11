#include "main.h"

class Student {
public:
	string name;
	string surname;
	int age;
	float avg_mark;

	void clear() {
		name = "no name";
		surname = "no surname";
		age = 0;
		avg_mark = 0;
	}

	//default constructor
	Student() {

		cout << "default constructor" << endl;

		name = "no name";
		surname = "no surname";
		age = 15;
		avg_mark = 4;
	}

	//default constructor with arguments
	Student(string nm, string surnm, int a, float mark) {
		name = nm;
		surname = surnm;
		age = a;
		avg_mark = mark;
	}



	string convert() {
		string msg = "";
		msg += name;
		msg += " " + surname;
		msg += " (age = " + to_string(age);
		msg += ", average mark = " + to_string(avg_mark);
		msg += ")";

		return msg;
	}
};

int main() {
	Student st1;           //calling default contructor
	Student st2("Ivan", "Ivanov", 14, 10 + );               //calling constructor with arg

	cout << st1.convert() << endl;

	//st1.name = "Ivan";
	//st1.surname = "Ivanov";
	//st1.age = 14;
	//st1.avg_mark = 10;

	//cout << "Before:" << endl;
	//cout << st1.convert() << endl;

	//st1.clear();

	//cout << "\nAfter:" << endl;
	//cout << st1.convert() << endl;

	return 0;
}

