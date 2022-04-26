#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;


struct line
{
	vector <string> stations;
};



int main()
{
	setlocale(LC_ALL, "ru");

	line* l1 = new line();
	line* l2 = new line();
	line* l3 = new line();
	line* l4 = new line();
	line* transfers = new line();

	string str;

	ifstream f1("line1.txt");
	while (!f1.eof())
	{
		str = "";
		getline(f1, str);
		l1->stations.push_back(str);
	}

	ifstream f2("line2.txt");
	while (!f2.eof())
	{
		str = "";
		getline(f2, str);
		l2->stations.push_back(str);
	}

	ifstream f3("line3.txt");
	while (!f3.eof())
	{
		str = "";
		getline(f3, str);
		l3->stations.push_back(str);
	}

	ifstream f4("line4.txt");
	while (!f4.eof())
	{
		str = "";
		getline(f4, str);
		l4->stations.push_back(str);
	}

	ifstream f5("transfers.txt");
	while (!f5.eof())
	{
		str = "";
		getline(f5, str);
		transfers->stations.push_back(str);
	}

	cout << "Введите точку отправления: ";
	string a; cin >> a;
	cout << "Введите точку прибытия: ";
	string b; cin >> b;
	search(a, b);
}

void search(string a, string b)
{




}


