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

