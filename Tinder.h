#pragma once
#include <iostream>
#include <locale.h>
#include<stdlib.h>
#include <vector>
#include <string>
#include <algorithm>
#include <Windows.h>
#include <conio.h>

using namespace std;

void gotoxy(short x, short y);
void show_menu();

class Tinder
{
private:
	string gender, name, surname, zodiac_sign, town, gender_f, zodiac_sign_f, town_f;
	int age_f, age_f2, age, count;
	vector <Tinder> vec;
	vector <string> vect_s;

public:

	Tinder(string gender, string name, string surname, int age, string zodiac_sign, string town,
		string gender_f, string zodiac_sign_f, string town_f, int age_f, int age_f2, vector <string> vect_s, int count);

	void interest();
	void Run(Tinder tn, vector <Tinder> vec);
	void Print();
	bool operator () (const Tinder& qw, const Tinder& qw2);
	void Show();
};

