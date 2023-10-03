#pragma once
#include <iostream>
#define _STUDENT_
using namespace std;

class Student
{
private:
	string name, surname;
	int age, ID;

public:
	Student(string newName, string newSurname, int newAge, int newID)
	{
		name = newName;
		surname = newSurname;
		age = newAge;
		ID = newID;
	}

	string getName()
	{
		return name;
	}
	string getSurname()
	{
		return surname;
	}
	int getAge()
	{
		return age;
	}
	int getID() 
	{
		return ID;
	}

	void setName(string newName)
	{
		name = newName;
	}
	void setSurname(string newSurname)
	{
		surname = newSurname;
	}
	void setAge(int newAge)
	{
		age = newAge;
	}
	void setID(int newID) 
	{
		ID = newID;
	}

	void print()
	{
		cout << "Name: " << name << endl;
		cout << "Surname: " << surname << endl;
		cout << "Age: " << age << endl;
		cout << "ID: " << ID << endl;
	}

	void print(string name)
	{
		cout << "Name: " << name << endl;
	}

	bool operator==(const Student& nr2)
	{
		return (age == nr2.age);
	}

	int compareTo(const Student& nr2)
	{
		int compare = -2;

		if (age < nr2.age)
		{
			compare = -1;
		}

		else if (age == nr2.age)
		{
			compare = 0;
		}
		else
		{
			compare = 1;
		}

		return compare;
	}

};

