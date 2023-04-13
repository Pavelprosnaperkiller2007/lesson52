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

		cout << "constructor with arguments" << endl;

		name = nm;
		surname = surnm;
		age = a;
		avg_mark = mark;
	}

	Student(string nm, string surnm) {
		name = nm;
		surname = surnm;
	}

	// copy-constructor
	Student(const Student& student) {
		cout << "copy constructor" << endl;
		name = student.name;
		surname = student.surname;
		age = student.age;
		avg_mark = student.avg_mark;
	}

	~Student() {
		cout << "destructor" << endl;
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

//void test(Student st) {
//
//}

Student test() {
	Student st;
	return st;
}

int main() {
	//Student st1;           //calling default contructor
	Student st2("Ivan", "Ivanov", 14, 10);               //calling constructor with arg
	//Student st3("Dima", "Gus");               //calling constructor with arg
	//Student st4(st2);
	//Student st5 = st2;               // calling copy constructor

	//test(st2);
	Student st = test();
	cout << st.convert() << endl;

	return 0;
}
