#include "Tinder.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	system("color F0");
	system("chcp 1251");
	system("cls");
	const int num_menu = 2;
	int ch = 0, active_menu = 0;
	bool z;
	string gender, name, surname, zodiac_sign, town, gender_f, zodiac_sign_f, town_f, inter;
	vector <string> interest;
	string age_1, age_2;
	int age, age_f, age_f2, q;

	cout << "\n\t����� ���������� � TINDER!!!" << endl << "\t������� Enter � ���������� � ����� ����� ������\n" << endl;
	system("pause");
	system("cls");
	do
	{
		do
		{
			cout << "������� ���� ��� - ";	cin >> name;
			cout << "������� ���� ������� - ";	cin >> surname;
			cout << "������� ���� ����� ����� - ";	cin >> gender;
			transform(gender.begin(), gender.end(), gender.begin(), tolower);
			do
			{
				cout << "������� ��� ������� - "; cin >> age_1;
				age = atoi(age_1.c_str());
				try
				{
					if (age < 18 && age > 0)
						throw ("���������� ������ ��� ����������������"); 
					if (age == 0 || age < 0 || age > 100)
						throw exception("��������� ���� ������� �����������, ��������� ����");
				}
				catch (exception& str)
				{
					cout << str.what() << endl;
				}
				catch (const char* str)
				{
					system("cls");
					cout << str << endl;
					exit(0);
				}

			} while (age == 0 || age < 0 || age > 100);

			cout << "������� ��� ���� ������� - ";	cin >> zodiac_sign;
			transform(zodiac_sign.begin(), zodiac_sign.end(), zodiac_sign.begin(), tolower);
			cout << "������� ��� ����� ���������� - ";	cin >> town;
			cout << "\n������� ���� ��������" << endl;
			do
			{
				cin >> inter;
				transform(inter.begin(), inter.end(), inter.begin(), tolower);
				interest.push_back(inter);
				
				do
				{
					cout << "���� ������ �������� ��� ������� 1, ��� 2" << endl;
					cin >> age_1;
					q = atoi(age_1.c_str());
					try
					{
						if (q == 0)
							throw exception("��������� ���� ������ ������������, ��������� ����");
					}
					catch (exception& str)
					{
						cout << str.what() << endl;
					}
				} while (q == 0);

			} while (q == 1);
			cout << "\n� ������ ������� ��������� ������ � ����� ������ ���������)\n" << endl;
			cout << "������� ���� ����� - ";	cin >> gender_f;
			transform(gender_f.begin(), gender_f.end(), gender_f.begin(), tolower);
			cout << "������� ���� ������� - ";	cin >> zodiac_sign_f;
			transform(zodiac_sign_f.begin(), zodiac_sign_f.end(), zodiac_sign_f.begin(), tolower);
			cout << "������� ����� ���������� - ";	cin >> town_f;
			do
			{				
				cout << "������� ������� �� - "; cin >> age_1;
				cout << " �� ";	cin >> age_2;
				age_f = atoi(age_1.c_str());
				age_f2 = atoi(age_2.c_str());

				try
				{
					if (age_f < 18 && age_f > 0)
						throw ("���������� ������ ��� ����������������");
					if (age_f == 0 || age_f < 0 || age_f > 100 || age_f2 == 0 || age_f2 < 0 || age_f2 > 100)
						throw exception("��������� ���� ������� �����������, ��������� ����");

				}
				catch (exception& str)
				{
					cout << str.what() << endl;
				}
				catch (const char* str)
				{
					cout << str << endl;
				}

			} while (age_f == 0 || age_f < 0 || age_f > 100 || age_f2 == 0 || age_f2 < 0 || age_f2 > 100 || (age_f < 18 && age_f > 0));
					
			do
			{
				cout << "���� ���� ������ ����� ������� 1, ���� ������ ���-�� �������� ������� 2" << endl;
				cin >> age_1;
				q = atoi(age_1.c_str());
				try
				{
					if (q == 0)
						throw exception("��������� ���� ������ ������������, ��������� ����");
				}
				catch (exception& str)
				{
					cout << str.what() << endl;
				}
			} while (q == 0); 

		} while (q != 1);
		system("cls");
		Tinder tin(gender, name, surname, age, zodiac_sign, town, gender_f, zodiac_sign_f, town_f, age_f, age_f2, interest, 0);
		tin.Print();
		cout << "*********************************************************" << endl;
		system("pause");
		system("cls");
		cout << "\n\t� ������ �������� ���� ������ �����\n" << endl;
		system("pause");
		system("cls");
		bool exit = false;
		while (!exit)
		{
			show_menu();
			gotoxy(0, active_menu);
			ch = _getch();
			if (ch == 224) ch = _getch();
			switch (ch)
			{

			case 27: exit = true; break;
			case 72: active_menu--; break;
			case 80: active_menu++; break;
			case 13:

				if (active_menu == 0)
				{
					system("cls");
					cout << "************************************************************************" << endl;
					cout << "����� ���� ���� ���������� ������ ������� ���� ���� ������ ���������!!!)" << endl;
					cout << "************************************************************************\n\n" << endl;
					vector<Tinder> vec
					{

						Tinder("���������", "����", "������", 29, "����", "�����", "������", "�����", "������", 25, 35, interest = {"�����", "�����������", "������", "������"}, 0),
						Tinder("���������", "���������", "�����", 35, "�����", "������", "������", "��������", "�����", 30, 42, interest = {"�����", "�����������", "������"}, 0),
						Tinder("���������", "������", "�����", 33, "���", "������", "������", "����", "������", 27, 40, interest = {"�����", "�����������", "������"}, 0),
						Tinder("��������", "�����", "����", 27, "����", "������", "�������", "����", "������", 25, 38, interest = {"�����", "������", "������", "������"}, 0),
						Tinder("��������", "���������", "�������", 29, "����", "�����", "�������", "���", "�����", 30, 40, interest = {"�����", "������", "�����������"},0),
						Tinder("��������", "��������", "���������", 30, "��������", "�����", "�������", "����", "������", 29, 47, interest = {"�����", "�����������", "������"},0),
						Tinder("��������", "������", "��������", 36, "��������", "������", "������", "���", "������", 19, 30, interest = {"�����", "������", "����"},0),
						Tinder("���������", "����", "�����", 28, "����", "�������", "�������", "���", "����", 20, 30, interest = {"�����", "�����", "������", "������"}, 0),
						Tinder("���������", "���������", "�����", 40, "�������", "�����", "�������", "����", "������", 29, 39, interest = {"�����", "�����������", "������"}, 0),
						Tinder("��������", "��������", "����", 43, "��������", "����", "�������", "�����", "�����", 31, 47, interest = {"�����", "������", "������"}, 0),
					};
					for (int i = 0; i < vec.size(); i++)
					{
						vec[i].Print();
						cout << "*********************************************************" << endl;
					}
					cout << "\n��� ���� ����� ������ ���������� ���������� � ������ ��������� ������� Enter\n\n" << endl;

					system("pause");
					system("cls");
					tin.Run(tin, vec);
					system("pause");
				}
				else if (active_menu == 1)
				{
					system("cls");
					cout << "************************************************************************" << endl;
					cout << "����� ���� ���� ���������� ������ ������� ���� ���� ������!!!)" << endl;
					cout << "************************************************************************\n\n" << endl;
					vector<Tinder> vec_man
					{
						Tinder("������", "���", "�����", 42, "����", "�����", "���������", "�����", "������", 25, 35, interest = {"�����", "�����������", "������", "������"}, 0),
						Tinder("�������", "�����", "�������", 35, "�����", "������", "���������", "��������", "�����", 30, 42, interest = {"�����", "�����������", "������"}, 0),
						Tinder("������", "�������", "����������", 40, "���", "������", "���������", "����", "������", 27, 40, interest = {"�����", "�����������", "������"}, 0),
						Tinder("�������", "����", "�����", 42, "����", "������", "���������", "����", "������", 25, 38, interest = {"�����", "������", "������", "������"}, 0),
						Tinder("������", "����", "����", 39, "����", "�����", "��������", "���", "�����", 30, 40, interest = {"�����", "������", "�����������"},0),
						Tinder("�������", "�������", "�����", 40, "��������", "�����", "��������", "����", "������", 29, 47, interest = {"�����", "�����������", "������"},0),
						Tinder("������", "���", "�������", 51, "��������", "������", "��������", "���", "������", 19, 30, interest = {"�����", "������", "����"},0),
						Tinder("�������", "������", "�����", 46, "����", "�������", "���������", "���", "����", 20, 30, interest = {"�����", "�����", "������", "������"}, 0),
						Tinder("�������", "������", "����", 40, "�������", "�����", "���������", "����", "������", 29, 39, interest = {"�����", "�����������", "������"}, 0),
						Tinder("������", "�����", "���������", 43, "��������", "����", "���������", "�����", "�����", 31, 47, interest = {"�����", "������", "������"}, 0),
					};
					for (int i = 0; i < vec_man.size(); i++)
					{
						vec_man[i].Print();
						cout << "*********************************************************" << endl;
					}
					cout << "\n��� ���� ����� ������ ���������� ���������� � ������ ��������� ������� Enter\n\n" << endl;

					system("pause");
					system("cls");
					tin.Run(tin, vec_man);
					system("pause");

				}
				break;
			}
			if (active_menu < 0) active_menu = num_menu - 1;
			if (active_menu > num_menu - 1) active_menu = 0;

		}
		system("cls");
		cout << "If you wanna continue press 1, no 0" << endl;
		cin >> z;
		system("cls");
	} while (z == 1);
	system("cls");

	return 0;

}