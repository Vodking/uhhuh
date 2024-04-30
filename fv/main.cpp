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
		std::cout << "��� - " << name << " ������ - " << group << "\n������\n";
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
		std::cout << "\n" << "������� ���� - " << avarage/size << "\n";
		avarage /= size;
		if (avarage >= 4.00)
		{
			std::cout << "�������\n\n";
		}
		else
		{
			std::cout << "���������\n\n";
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
	std::cout << "��������� ����� ���������\n";
	for (int i = 0; i < size; i++)
	{
		std::cout << "������� ��� �������� ����� " << i+1 << "\n";
		std::getline(std::cin, stud[i].name, '\n');
		std::cout << "������� ������ �������� ����� " << i+1 << "\n";
		std::cin >> stud[i].group;
		for (int j = 0; j < stud[i].size; j++)
		{
			std::cout << "������� ������ ����� " << j + 1 << " � �������� ����� " << i + 1 << "\n";
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