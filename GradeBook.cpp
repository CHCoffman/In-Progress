// This program will use arrays to get students
// their test grades and display the earned grades
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	string names[5] = {"Colten", "Brycen", "Rylee",
				"Natalie", "Cambree"};
	char letterGrades[5] = {'A','B', 'C', 'D', 'F'};

	double coltenGrades[4];
	double brycenGrades[4];
	double ryleeGrades[4];
	double natalieGrades[4];
	double cambreeGrades[4];
	
	for(int i = 0; i < 5; i++)
	{
	cout << "Enter your name, title case:\n";
	cin>> name;
	if(name = "Colten")
		for(int i - 0; i < 5; i++
		{
			cout << "Enter grade for test " << (i+1) << endl;
			cin >> coltenGrades[i];
		}
	else if(name = "Brycen")
		for(int i = 0; i < 5; i++
		{
			cout << "Enter grade for test " << (i+1) << endl;
			cin >> brycenGrades[i];
		}
	else if(name = "Rylee")
		for(int i = 0; i < 5; i++)
		{
			cout << "Enter grade for test " << (i+1) << endl;
			cin >> ryleeGrades[i];
		}
	else if(name = "Natalie")
		for(int i = 0; i < 5; i++)
		{
			cout << Enter grade for test " << (i+1) << endl;
			cin >> natalieGrades[i];
		}
	else if(name = "Cambree")
		for(int i = 0; i < 5; i++)
		{
			cout << Enter grade for test " << (i+1) << endl;
			cin >> cambreeGrades[i];
		}
	}

	double coltenAv, brycenAv, natalieAv, ryleeAv, cambreeAv;
	for(int i = 0; i < 4; i++;
	{
		coltenAv + coltenGrades[i];
		brycenAv + brycenGrades[i];
		natalieAv + natalieGrades[i];
		ryleeAv + ryleeGrades[i];
		cambreeAv + cambreeGrades[i];
	}

	coltenAv = coltenAv / 4;
	brycenAv = brycenAv / 4;
	natalieAv = natalieAv / 4;
	ryleeAv = ryleeAv / 4;
	cambreeAv = cambreeAv / 4;

return 0;
}



