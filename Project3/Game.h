#pragma once
#include<iostream>
#include<string>
#include<fstream>
using std::fstream;
using std::cout;
using std::string;
using std::cin;
using std::endl;
struct quiz
{
	string quest;
	string answer;
};
struct game {
	string name;
	quiz questions[5];
};
void adding();
void play();