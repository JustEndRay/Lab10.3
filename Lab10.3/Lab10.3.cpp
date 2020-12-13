#include <iostream>
#include <Windows.h>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;


#pragma pack(push, 1)

struct Exam_List
{
	string surname;
	string initials;
	int grade_physics;
	int grade_math;
	int grade_computer_science;
	int grade_history;
	int grade_english;
};

#pragma pack(pop)

void Fill_File(const string File_Name, int option);
void Print_File(const string File_Name);
void Marks_are_only_five(const string File_Name);
void Students_with_three(const string File_Name);
void Students_with_one_mark2(const string File_Name);
void Students_with_severals_marks2(const string File_Name);
void Delete_line_with_several_marks2(const string File_Name);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int action;

	string Shop_Name, Item_Name;

	string File_Name = "test.txt";

	do
	{
		cout << endl << endl;
		cout << "������� ��: " << endl;
		cout << "1 - ��������� ����" << endl;
		cout << "2 - ������� ����, �� �������� � ����" << endl;
		cout << "3 - ��������� ������" << endl;
		cout << "4 - ������ ��������, �� ������ ������ ����� �� �5�" << endl;
		cout << "5 - ������ ��������, �� ����� �����" << endl;
		cout << "6 - ������ ��������, �� ����� ��� ���� �����" << endl;
		cout << "7 - ������ ��������, �� ����� ����, �� ���� �����" << endl;
		cout << "8 - �������� � ����� ��� ��� ��������, �� ����� ���� �� ���� �����" << endl;
		cout << "0 - ��������� ������ ��������" << endl;

		cout << "������: "; cin >> action;

		cout << endl << endl;

		switch (action)
		{
		case 1:
			Fill_File(File_Name, 1);
			break;
		case 2:
			Print_File(File_Name);
			break;
		case 3:
			Fill_File(File_Name, 2);
			break;
		case 4:
			Marks_are_only_five(File_Name);
			break;
		case 5:
			Students_with_three(File_Name);
			break;
		case 6:
			Students_with_one_mark2(File_Name);
			break;
		case 7:
			Students_with_severals_marks2(File_Name);
			break;
		case 8:

			break;
		case 0:
			exit(1);
		default:
			cout << "�������!" << endl;
		}
	} while (action != 0);

	return 0;
}
void Students_with_severals_marks2(const string File_Name)
{
	int check = 0;
	string surname;
	string initials;
	string grade_physics;
	string grade_math;
	string grade_computer_science;
	string grade_history;
	string grade_english;
	int number = 1;

	char line[50];

	ifstream f(File_Name, ios::in);

	if (!f.is_open())
	{
		cout << "���� �� �������!" << endl;
		return;
	}

	string tmp;
	int counter = 0;

	while (!f.eof())
	{
		getline(f, tmp);
		counter++;
	}

	f.close();
	f.open(File_Name, ios::in);
	cout << "������ ��������, �� ����� �����:" << endl;
	for (int i = 0; i < counter / 7; i++)
	{
		f.getline(line, sizeof(line));
		surname = line;
		f.getline(line, sizeof(line));
		initials = line;
		f.getline(line, sizeof(line));
		grade_physics = line;
		f.getline(line, sizeof(line));
		grade_math = line;
		f.getline(line, sizeof(line));
		grade_computer_science = line;
		f.getline(line, sizeof(line));
		grade_history = line;
		f.getline(line, sizeof(line));
		grade_english = line;
		if (grade_physics == "2")
		{
			check++;
		}
		if (grade_math == "2")
		{
			check++;
		}
		if (grade_computer_science == "2")
		{
			check++;
		}
		if (grade_history == "2")
		{
			check++;
		}
		if (grade_english == "2")
		{
			check++;
		}
		if (check > 1)
		{
			cout << surname << " " << initials << endl;
		}
	}
}
void Students_with_one_mark2(const string File_Name)
{
	int check = 0;
	string surname;
	string initials;
	string grade_physics;
	string grade_math;
	string grade_computer_science;
	string grade_history;
	string grade_english;
	int number = 1;

	char line[50];

	ifstream f(File_Name, ios::in);

	if (!f.is_open())
	{
		cout << "���� �� �������!" << endl;
		return;
	}

	string tmp;
	int counter = 0;

	while (!f.eof())
	{
		getline(f, tmp);
		counter++;
	}

	f.close();
	f.open(File_Name, ios::in);
	cout << "������ ��������, �� ����� �����:" << endl;
	for (int i = 0; i < counter / 7; i++)
	{
		f.getline(line, sizeof(line));
		surname = line;
		f.getline(line, sizeof(line));
		initials = line;
		f.getline(line, sizeof(line));
		grade_physics = line;
		f.getline(line, sizeof(line));
		grade_math = line;
		f.getline(line, sizeof(line));
		grade_computer_science = line;
		f.getline(line, sizeof(line));
		grade_history = line;
		f.getline(line, sizeof(line));
		grade_english = line;
		if (grade_physics == "2")
		{
			check++;
		}
		if (grade_math == "2")
		{
			check++;
		}
		if (grade_computer_science == "2")
		{
			check++;
		}
		if (grade_history == "2")
		{
			check++;
		}
		if (grade_english == "2")
		{
			check++;
		}
		if (check > 0)
		{
			cout << surname << " " << initials << endl;
		}
	}
}
void Marks_are_only_five(const string File_Name)
{

	string surname;
	string initials;
	string grade_physics;
	string grade_math;
	string grade_computer_science;
	string grade_history;
	string grade_english;
	int number = 1;

	char line[50];

	ifstream f(File_Name, ios::in);

	if (!f.is_open())
	{
		cout << "���� �� �������!" << endl;
		return;
	}

	string tmp;
	int counter = 0;

	while (!f.eof())
	{
		getline(f, tmp);
		counter++;
	}

	f.close();
	f.open(File_Name, ios::in);
	cout << "������ ��������, �� ������ ������ ����� �� �5�:" << endl;
	for (int i = 0; i < counter/7; i++)
	{
		f.getline(line, sizeof(line));
		surname = line;
		f.getline(line, sizeof(line));
		initials=line;
		f.getline(line, sizeof(line));
		grade_physics=line;
		f.getline(line, sizeof(line));
		grade_math=line;
		f.getline(line, sizeof(line));
		grade_computer_science=line;
		f.getline(line, sizeof(line));
		grade_history=line;
		f.getline(line, sizeof(line));
		grade_english = line;
		if (grade_physics == "5" && grade_math == "5" && grade_computer_science == "5" && grade_history == "5" && grade_english == "5")
		{
			cout << surname<<" "<<initials << endl;
		}
	}


}
void Students_with_three(const string File_Name)
{
	int check = 0;
	string surname;
	string initials;
	string grade_physics;
	string grade_math;
	string grade_computer_science;
	string grade_history;
	string grade_english;
	int number = 1;

	char line[50];

	ifstream f(File_Name, ios::in);

	if (!f.is_open())
	{
		cout << "���� �� �������!" << endl;
		return;
	}

	string tmp;
	int counter = 0;

	while (!f.eof())
	{
		getline(f, tmp);
		counter++;
	}

	f.close();
	f.open(File_Name, ios::in);
	cout << "������ ��������, �� ����� �����:" << endl;
	for (int i = 0; i < counter/7; i++)
	{
		f.getline(line, sizeof(line));
		surname = line;
		f.getline(line, sizeof(line));
		initials=line;
		f.getline(line, sizeof(line));
		grade_physics=line;
		f.getline(line, sizeof(line));
		grade_math=line;
		f.getline(line, sizeof(line));
		grade_computer_science=line;
		f.getline(line, sizeof(line));
		grade_history=line;
		f.getline(line, sizeof(line));
		grade_english = line;
		if (grade_physics == "3")
		{
			check++;
		}
		if(grade_math == "3")
		{
			check++;
		}
		if(grade_computer_science == "3")
		{
			check++;
		}
		if(grade_history == "3")
		{
			check++;
		}
		if(grade_english == "3")
		{
			check++;
		}
		if(check>1)
		{
			cout << surname<<" "<<initials << endl;
		}
	}
}
void Fill_File(const string File_Name, int option)
{
	Exam_List S;

	string action;

	ofstream f;

	switch (option)
	{
	case 1:
	{
		f.open(File_Name, ios::out);
		break;
	}
	case 2:
	{
		f.open(File_Name, ios::app);
		break;
	}
	}

	if (!f.is_open())
	{
		cout << "���� �� �������!" << endl;
		return;
	}

	cin.get();
	do
	{
		cout << endl << endl;
		cout << "������ �������: "; getline(cin, S.surname);
		f << S.surname << endl;

		cout << "������ �������: "; getline(cin, S.initials);
		f << S.initials << endl;

		cout << "������ ������ � ������: "; cin >> S.grade_physics;
		f << S.grade_physics << endl;

		cout << "������ ������ � ����������: "; cin >> S.grade_math;
		f << S.grade_math << endl;

		cout << "������ ������ � ���: "; cin >> S.grade_computer_science;
		f << S.grade_computer_science << endl;

		cout << "������ ������ � �����: "; cin >> S.grade_history;
		f << S.grade_history << endl;

		cout << "������ ������ � ��������: "; cin >> S.grade_english;
		f << S.grade_english << endl;

		cin.get();
		cout << "������ ���������?(Y - ���, N - ͳ): ";
		getline(cin, action); cout << endl;

	} while (action == "y" ||action == "Y");
}
void Print_File(const string File_Name)
{
	int number = 1;

	char line[50];

	ifstream f(File_Name, ios::in);

	if (!f.is_open())
	{
		cout << "���� �� �������!" << endl;
		return;
	}

	string tmp;
	int counter = 0;

	cout << "===========================================================================================================================================" << endl;
	cout << "| � |  �������  |  �������  |  ������ � ������  |  ������ � ����������  |   ������ � ���  |   ������ � �����  |  ������ � ��������� ����  |" << endl;
	cout << "------------------------------------------------------------------------------------------------------------------------------------------" << endl;


	while (!f.eof())
	{
		getline(f, tmp);
		counter++;
	}

	f.close();
	f.open(File_Name, ios::in);

	for (int i = 0; i < counter / 7; i++)
	{
		cout << "|" << setw(2) << number++ << setw(2);

		f.getline(line, sizeof(line));
		cout << "|" << setw(10) << line << setw(3); 

		f.getline(line, sizeof(line));
		cout << "|" << setw(10) << line << setw(3); 

		f.getline(line, sizeof(line));
		cout << "|" << setw(10) << line << setw(9); 

		f.getline(line, sizeof(line));
		cout << "|" << setw(10) << line << setw(5);

		f.getline(line, sizeof(line));
		cout << "|" << setw(10) << line << setw(5);

		f.getline(line, sizeof(line));
		cout << "|" << setw(10) << line << setw(5);
		f.getline(line, sizeof(line));
		cout << "|" << setw(10) << line << setw(5);
		cout << endl;

	}

	cout << "==================================================================================" << endl;
}

