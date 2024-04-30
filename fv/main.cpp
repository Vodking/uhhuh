#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <string>

struct Human
{

public:
	int age;
	std::string name;
	float weight;
	float height;

	void PrintAge()
	{
		std::cout << age << " " << age2;
	}
private:
	int age2 = 100;
	
};

class Student
{
public:
	static const int size = 5;
	std::string name;
	int group;
	int ses[size];
	float avarage = 0;

	void PrintData()
	{
		std::cout << "Имя - " << name << " Группа - " << group << "\nОценки\n";
		for (int i = 0; i < size; i++)
		{
			avarage += ses[i];
			if (i == size)
			{
				std::cout << ses[i];
			}
			else
			{
				std::cout << ses[i] << ", ";
			}
			
		}
		std::cout << "\n" << "Средний балл - " << avarage/size << "\n";
		avarage /= size;
		if (avarage >= 4.00)
		{
			std::cout << "Допущен\n\n";
		}
		else
		{
			std::cout << "Недопущен\n\n";
		}
	}
private:

};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	const int size = 3;
	Student stud[size];
	std::cout << "Заполните даные студентов\n";
	for (int i = 0; i < size; i++)
	{
		std::cout << "Введите имя студента номер " << i+1 << "\n";
		std::getline(std::cin, stud[i].name, '\n');
		std::cout << "Введите группу студента номер " << i+1 << "\n";
		std::cin >> stud[i].group;
		for (int j = 0; j < stud[i].size; j++)
		{
			std::cout << "Введите оценку номер " << j + 1 << " у студента номер " << i + 1 << "\n";
			std::cin >> stud[i].ses[j];
		}

		
		std::cout << "\n\n\n";
		std::cin.ignore(32000, '\n');
	}
	for (int i = 0; i < size; i++)
	{
		stud[i].PrintData();
	}
}