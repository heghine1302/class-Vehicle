#include<iostream>
#include<string>
#include<thread>
#include<chrono>
using namespace std;

class Vehicle {
  
private:
	int numOfwheels;
	double prise;
	string color;
	string model;
	string type;
	bool workingORnot;

public:
	Vehicle() {
		numOfwheels = 0;
		prise = 0;
		color ="0";
		model ="0";
		type = "0";
		workingORnot = 0;
	}

	Vehicle(int numOfwheels, double prise, string color, string model, string type, bool workingORnot) {
		this->numOfwheels = numOfwheels;
		this->prise = prise;
		this->color = color;
		this->model = model;
		this->type = type;
		this->workingORnot = workingORnot;
		
	}


	void Print() {

		this_thread::sleep_for(chrono::milliseconds(500));

		cout << "numOfwheels = " << numOfwheels << "\nprise = " << prise << "\ncolor = " <<
			color << "\nmodel = " << model << "\ntype = " << type << "\nworking or not = " << workingORnot << endl;
	}

	void info()
	{
		cout << "numOfwheels -> ";
		cin >> numOfwheels;
		cout << "prise -> ";
		cin >> prise;
		cout << "color -> ";
		cin >> color;
		cout << "model -> ";
		cin >> model;
		cout << "type-> ";
		cin >> type;
		cout << "working or not -> ";
		cin >> workingORnot;

		cout << endl;
	}

	~Vehicle() {
		cout << "Destructor" << endl;
		system("pause");

	}
};

int main() {

	cout << "Constructor\n\n";
	Vehicle constr;
	constr.Print();

	cout << "\nFirst veh\n\n";
	Vehicle first(8, 40000.0, "yellow", "BMW", "bernatar", true);

	first.Print();

	cout << "\nSecond veh\n\n";
	Vehicle second(4, 20000.0, "black", "Mercedes", "mardatar", false);
	second.Print();

	cout << "\nThird veh\n\n";
	Vehicle third;
	third.info();
	third.Print();

	system("pause");
	return 0;
}

----------------------------------------------------------------------------------------------------------------------------
	
#include<iostream>
#include<string>
using namespace std;

class Human
{
public:
	string name;
	string sex;
	int age;

	Human()
	{
		cout << "Constructor of Human" << endl;
		name = "Heghine";
		sex = "F";
		age = 19;
	}

	Human(string name, string sex, int age)
	{
		this->name = name;
		this->sex = sex;
		this->age = age;
	}

	void HumanPrint() 
	{
		cout << "Name ---- " << name << "\nSex ---- " << sex << "\nAge ---- " << age << endl<<endl;
	}
	void cinHuman() 
	{
		cout << "Name --> ";
		cin >> name;
		cout << "Sex --> ";
		cin >> sex;
		cout << "Age --> ";
		cin >> age;

		cout << endl;
	}
	~Human() {
		cout << "Destructor of Human" << endl;
		system("pause");
	}
};

class Student : virtual public Human
{
private:
	int group;
	int ID;

public:
	Student()
	{
		cout << "Constructor of Student" << endl;
		group = 807;
		ID = 1302;
	}

	Student(int group, int ID) : Human(name, sex, age)
	{
		this->group = group;
		this->ID = ID;
	}

	void Learn() 
	{
		cout << "I'm a student" << endl;
	}

	void HumanPrint() 
	{
		cout << "Group ---- " << group << "\nID ---- " << ID << endl;
		Human::HumanPrint();
	}

	void cinHuman() 
	{
		cout << "Group --> ";
		cin >> group;
		cout << "ID --> ";
		cin >> ID;

		Human::cinHuman();
	}
	~Student() {
		cout << "Destructor of Student" << endl;
		system("pause");
	}
};

class Professor : virtual public Human
{
private:
	string subject;

public:
	Professor()
	{
		cout << "Constructor of Professor" << endl;
		subject = "Math";
	}

	Professor(string subject) : Human(name, sex, age)
	{
		this->subject = subject;
	}
	
	void HumanPrint()
	{
		cout << "Subject ---- " << subject<<endl;
		Human::HumanPrint();
	}

	void cinHuman() {
		cout << "Subject --> ";
		cin >> subject;

		Human::cinHuman();
	}
	~Professor() {
		cout << "Destructor of Professor" << endl;
		system("pause");
	}
};

int main() {

	Student s;
	s.Learn();
	s.cinHuman();
	s.HumanPrint();

	Professor p;
	p.cinHuman();
	p.HumanPrint();

	Human h;
	h.cinHuman();
	h.HumanPrint();
	
	system("pause");
	return 0;
}
