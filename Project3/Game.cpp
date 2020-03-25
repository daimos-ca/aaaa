#include"Game.h"
int countG = 0;
void adding() {
	fstream gg("gg.txt");
	game*games;
	game*temp = new game[countG + 1];
	for (int i = 0; i < countG; i++)
	{
		temp[i].name = games[i].name;
		for (int j = 0; j < 5; j++)
		{
			temp[i].questions[j].quest = games[i].questions[j].quest;
			temp[i].questions[j].answer = games[i].questions[j].answer;
		}
	}
	countG++;
	cout << "Enter name : ";
	cin >> temp[countG - 1].name;
	int i = 0;
	while (i != 5) {
		cout << "Enter quest: ";
		
	}
}
void play() {

}