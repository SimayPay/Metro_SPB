#include <iostream>
#include <vector>
using namespace std;


struct station
{
	station* previous;
	station* next;
};

vector <station> Stations;

int main()
{
	station* s1 = new station();
	
}