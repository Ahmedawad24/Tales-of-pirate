#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void cout_to_screen(char X[][1000], int& dE, int& dS)
{
	system("cls");
	for (int r = 0; r < 50; r++)
	{
		for (int c = dS; c < dE; c++)
		{
			cout << X[r][c];
		}
	}
	cout.flush();
}
void DesignMyScreen(char X[][1000])
{
	for (int r = 0; r < 50; r++)
	{
		for (int c = 0; c < 1000; c++)
		{
			X[r][c] = ' ';
		}
	}

	for (int c = 0; c < 1000; c++)
	{
		X[0][c] = '*';
		X[49][c] = '^';
	}

}
void SetHero_In_X(char X[][1000], int rH, int cH)
{
	//Hat
	X[rH][cH + 1] = '\\';
	X[rH][cH + 2] = '_';
	X[rH][cH + 3] = 220;
	X[rH][cH + 4] = '_';
	X[rH][cH + 5] = '/';

	//face
	X[rH + 1][cH] = ' ';
	X[rH + 1][cH + 1] = ' ';
	X[rH + 1][cH + 2] = ' ';
	X[rH + 1][cH + 3] = 79;

	//abdomen
	X[rH + 2][cH] = ' ';
	X[rH + 2][cH + 1] = ' ';
	X[rH + 2][cH + 2] = '/';
	X[rH + 2][cH + 3] = 186;
	X[rH + 2][cH + 4] = '\\';

	//legs
	X[rH + 3][cH] = ' ';
	X[rH + 3][cH + 1] = ' ';
	X[rH + 3][cH + 2] = '/';
	X[rH + 3][cH + 3] = ' ';
	X[rH + 3][cH + 4] = '\\';

}
void SetHero_In_X2(char X[][1000], int rH, int cH)
{
	//Hat
	X[rH][cH + 1] = '\\';
	X[rH][cH + 2] = '_';
	X[rH][cH + 3] = 254;
	X[rH][cH + 4] = '_';
	X[rH][cH + 5] = '/';

	//Face & Upper arm
	X[rH + 1][cH + 2] = '_';
	X[rH + 1][cH + 3] = '0';
	X[rH + 1][cH + 4] = '_';
	X[rH + 1][cH + 5] = '/';

	//Lower arm and abdomen
	X[rH + 2][cH + 1] = '/';
	X[rH + 2][cH + 2] = ' ';
	X[rH + 2][cH + 3] = 186;

	//Legs
	X[rH + 3][cH + 3] = '/';
	X[rH + 3][cH + 4] = ' ';
	X[rH + 3][cH + 5] = '\\';

}
void SetHero_In_X3(char X[][1000], int rH, int cH)
{
	//Hat
	X[rH][cH + 1] = '\\';
	X[rH][cH + 2] = '_';
	X[rH][cH + 3] = 220;
	X[rH][cH + 4] = '_';
	X[rH][cH + 5] = '/';

	//face
	X[rH + 1][cH + 3] = '0';

	//abdomen
	X[rH + 2][cH + 3] = 186;

	//legs
	X[rH + 3][cH + 3] = '|';

}
void SetHero_In_X4(char X[][1000], int rH, int cH)
{
	//Hat
	X[rH][cH + 1] = '\\';
	X[rH][cH + 2] = '_';
	X[rH][cH + 3] = 223;
	X[rH][cH + 4] = '_';
	X[rH][cH + 5] = '/';

	//Head & Top arm
	X[rH + 1][cH] = ' ';
	X[rH + 1][cH + 1] = '\\';
	X[rH + 1][cH + 2] = '_';
	X[rH + 1][cH + 3] = '0';
	X[rH + 1][cH + 4] = '_';
	X[rH + 1][cH + 5] = ' ';
	X[rH + 1][cH + 6] = ' ';

	//Abdomen & Lower Arm
	X[rH + 2][cH + 3] = 186;
	X[rH + 2][cH + 5] = '\\';
	X[rH + 3][cH + 1] = '/';
	X[rH + 3][cH + 3] = '\\';
}
void Hero_Shooting(char X[][1000], int rH, int cH, char sbch)
{
	//Hat
	X[rH][cH + 1] = '\\';
	X[rH][cH + 2] = '_';
	X[rH][cH + 3] = 223;
	X[rH][cH + 4] = '_';
	X[rH][cH + 5] = '/';

	//Face
	X[rH + 1][cH + 3] = '0';

	//Abdomen & Gun
	X[rH + 2][cH + 3] = 186;
	X[rH + 2][cH + 4] = 169;

	//Legs
	X[rH + 3][cH + 3] = '|';
}
void Move_AutoHero(char X[][1000], int& rH, int& cH)
{
	if (rH == 45 && cH < 4)
	{
		cH++;
	}
}
void Start_Dialog(char X[][1000], int& rH, int& cH, int& rD, int& cD)
{
	if (rH == 45 && cH == 4)
	{
		X[rD][cD] = '/';
		X[rD][cD + 1] = '_';
		X[rD][cD + 2] = '_';
		X[rD][cD + 3] = '_';
		X[rD][cD + 4] = '_';
		X[rD][cD + 5] = '_';
		X[rD][cD + 6] = '_';
		X[rD][cD + 7] = '_';
		X[rD][cD + 8] = '_';
		X[rD][cD + 9] = '_';
		X[rD][cD + 10] = '_';
		X[rD][cD + 11] = '_';
		X[rD][cD + 12] = '_';
		X[rD][cD + 13] = '_';
		X[rD][cD + 14] = '_';
		X[rD][cD + 15] = '_';
		X[rD][cD + 16] = '_';
		X[rD][cD + 17] = '_';
		X[rD][cD + 18] = '_';
		X[rD][cD + 19] = '_';
		X[rD][cD + 20] = '_';
		X[rD][cD + 21] = '|';
		X[rD - 1][cD + 1] = '|';
		X[rD - 2][cD + 1] = '|';
		X[rD - 3][cD + 1] = '|';
		X[rD - 4][cD + 2] = '_';
		X[rD - 4][cD + 3] = '_';
		X[rD - 4][cD + 4] = '_';
		X[rD - 4][cD + 5] = '_';
		X[rD - 4][cD + 6] = '_';
		X[rD - 4][cD + 7] = '_';
		X[rD - 4][cD + 8] = '_';
		X[rD - 4][cD + 9] = '_';
		X[rD - 4][cD + 10] = '_';
		X[rD - 4][cD + 11] = '_';
		X[rD - 4][cD + 12] = '_';
		X[rD - 4][cD + 13] = '_';
		X[rD - 4][cD + 14] = '_';
		X[rD - 4][cD + 15] = '_';
		X[rD - 4][cD + 16] = '_';
		X[rD - 4][cD + 17] = '_';
		X[rD - 4][cD + 18] = '_';
		X[rD - 4][cD + 19] = '_';
		X[rD - 4][cD + 20] = '_';
		X[rD - 3][cD + 21] = '|';
		X[rD - 2][cD + 21] = '|';
		X[rD - 1][cD + 21] = '|';
		X[rD - 3][cD + 2] = 'Q';
		X[rD - 3][cD + 3] = 'U';
		X[rD - 3][cD + 4] = 'I';
		X[rD - 3][cD + 5] = 'C';
		X[rD - 3][cD + 6] = 'K';
		X[rD - 3][cD + 7] = '!';
		X[rD - 3][cD + 8] = ' ';
		X[rD - 3][cD + 9] = 'I';
		X[rD - 3][cD + 10] = ' ';
		X[rD - 3][cD + 11] = 'g';
		X[rD - 3][cD + 12] = 'o';
		X[rD - 3][cD + 13] = 't';
		X[rD - 3][cD + 14] = 't';
		X[rD - 3][cD + 15] = 'a';
		X[rD - 3][cD + 16] = ' ';
		X[rD - 3][cD + 17] = 'f';
		X[rD - 3][cD + 18] = 'i';
		X[rD - 3][cD + 19] = 'n';
		X[rD - 3][cD + 20] = 'd';
		X[rD - 2][cD + 2] = 'm';
		X[rD - 2][cD + 3] = 'y';
		X[rD - 2][cD + 4] = ' ';
		X[rD - 2][cD + 5] = 'S';
		X[rD - 2][cD + 6] = 'A';
		X[rD - 2][cD + 7] = 'F';
		X[rD - 2][cD + 8] = 'I';
		X[rD - 2][cD + 9] = 'N';
		X[rD - 2][cD + 10] = 'N';
		X[rD - 2][cD + 11] = 'A';
		X[rD - 2][cD + 12] = 'A';
		X[rD - 2][cD + 13] = 'A';
		X[rD - 2][cD + 14] = 'A';
		X[rD - 2][cD + 15] = '!';
	}
}
void Move_Hero(int& rH, int& cH, char ch)
{

	if (ch == 'a')
	{
		cH--;
	}
	if (ch == 'd')
	{
		cH++;
	}
}
void Set_health(char X[][1000], int rHe, int& cHe)
{
	X[rHe][cHe] = ' ';
	X[rHe][cHe + 1] = '.';
	X[rHe][cHe + 2] = '-';
	X[rHe][cHe + 3] = '~';
	X[rHe][cHe + 4] = '~';
	X[rHe][cHe + 5] = '-';
	X[rHe][cHe + 6] = '.';
	X[rHe + 1][cHe] = '(';
	X[rHe + 1][cHe + 1] = '_';
	X[rHe + 1][cHe + 2] = '^';
	X[rHe + 1][cHe + 3] = '.';
	X[rHe + 1][cHe + 4] = '.';
	X[rHe + 1][cHe + 5] = '^';
	X[rHe + 1][cHe + 6] = '_';
	X[rHe + 1][cHe + 7] = ')';
	X[rHe + 2][cHe] = ' ';
	X[rHe + 2][cHe + 1] = ' ';
	X[rHe + 2][cHe + 2] = '|';
	X[rHe + 2][cHe + 3] = '|';
	X[rHe + 2][cHe + 4] = '|';
	X[rHe + 2][cHe + 5] = '|';
	X[rHe + 2][cHe + 6] = ' ';
	X[rHe + 2][cHe + 7] = ' ';
	X[rHe + 3][cHe] = ' ';
	X[rHe + 3][cHe + 1] = ' ';
	X[rHe + 3][cHe + 2] = '`';
	X[rHe + 3][cHe + 3] = '-';
	X[rHe + 3][cHe + 4] = '-';
	X[rHe + 3][cHe + 5] = '`';
	X[rHe + 3][cHe + 6] = ' ';
	X[rHe + 3][cHe + 7] = ' ';

}
void Set_Level(char X[][1000], int rL, int& cL, char& a)
{
	X[rL][cL] = 'L';
	X[rL][cL + 1] = 'e';
	X[rL][cL + 2] = 'v';
	X[rL][cL + 3] = 'e';
	X[rL][cL + 4] = 'l';
	X[rL][cL + 5] = ' ';
	X[rL][cL + 6] = a;


}
void Set_Title(char X[][1000], int rT, int cT)
{
	X[rT][cT] = 'P';
	X[rT][cT + 1] = 'I';
	X[rT][cT + 2] = 'R';
	X[rT][cT + 3] = 'A';
	X[rT][cT + 4] = 'T';
	X[rT][cT + 5] = 'E';
	X[rT][cT + 6] = ' ';
	X[rT][cT + 7] = 'T';
	X[rT][cT + 8] = 'A';
	X[rT][cT + 9] = 'L';
	X[rT][cT + 10] = 'E';
	X[rT][cT + 11] = 'S';
}
void Set_Box(char X[][1000], int rB, int cB)
{
	X[rB][cB + 1] = '_';
	X[rB][cB + 2] = '_';
	X[rB][cB + 3] = '_';
	X[rB][cB + 4] = '_';
	X[rB][cB + 5] = '_';
	X[rB + 1][cB] = '|';
	X[rB + 1][cB + 3] = '_';
	X[rB + 1][cB + 6] = '|';
	X[rB + 2][cB] = '|';
	X[rB + 2][cB + 2] = '|';
	X[rB + 2][cB + 3] = '_';
	X[rB + 2][cB + 4] = '|';
	X[rB + 2][cB + 6] = '|';
	X[rB + 3][cB] = '|';
	X[rB + 3][cB + 1] = '_';
	X[rB + 3][cB + 2] = '_';
	X[rB + 3][cB + 3] = '_';
	X[rB + 3][cB + 4] = '_';
	X[rB + 3][cB + 5] = '_';
	X[rB + 3][cB + 6] = '|';

}
void Empty_box(char X[][1000], int rB, int cB, char ech)
{
	if (ech == 'e')
	{
		X[rB][cB + 1] = ' ';
		X[rB][cB + 2] = ' ';
		X[rB][cB + 3] = ' ';
		X[rB][cB + 4] = ' ';
		X[rB][cB + 5] = ' ';
		X[rB + 1][cB] = ' ';
		X[rB + 1][cB + 3] = ' ';
		X[rB + 1][cB + 6] = ' ';
		X[rB + 2][cB] = ' ';
		X[rB + 2][cB + 2] = ' ';
		X[rB + 2][cB + 3] = ' ';
		X[rB + 2][cB + 4] = ' ';
		X[rB + 2][cB + 6] = ' ';
		X[rB + 3][cB] = ' ';
		X[rB + 3][cB + 1] = ' ';
		X[rB + 3][cB + 2] = ' ';
		X[rB + 3][cB + 3] = ' ';
		X[rB + 3][cB + 4] = ' ';
		X[rB + 3][cB + 5] = ' ';
		X[rB + 3][cB + 6] = ' ';
	}
}
void Set_popbox(char X[][1000], int rP, int cP)
{
	X[rP][cP + 1] = '_';
	X[rP][cP + 2] = '_';
	X[rP][cP + 3] = '_';
	X[rP][cP + 4] = '_';
	X[rP][cP + 5] = '_';
	X[rP][cP + 6] = '_';
	X[rP][cP + 7] = '_';
	X[rP][cP + 8] = '_';
	X[rP][cP + 9] = '_';
	X[rP][cP + 10] = '_';
	X[rP + 1][cP] = '|';
	X[rP + 1][cP + 2] = 'P';
	X[rP + 1][cP + 3] = 'R';
	X[rP + 1][cP + 4] = 'E';
	X[rP + 1][cP + 5] = 'S';
	X[rP + 1][cP + 6] = 'S';
	X[rP + 1][cP + 9] = 'E';
	X[rP + 1][cP + 11] = '|';
	X[rP + 2][cP] = '|';
	X[rP + 2][cP + 4] = 'T';
	X[rP + 2][cP + 5] = 'O';
	X[rP + 2][cP + 11] = '|';
	X[rP + 3][cP] = '|';
	X[rP + 3][cP + 2] = 'U';
	X[rP + 3][cP + 3] = 'N';
	X[rP + 3][cP + 4] = 'L';
	X[rP + 3][cP + 5] = 'O';
	X[rP + 3][cP + 6] = 'C';
	X[rP + 3][cP + 7] = 'K';
	X[rP + 3][cP + 11] = '|';
	X[rP + 4][cP] = '|';
	X[rP + 4][cP + 1] = '_';
	X[rP + 4][cP + 2] = '_';
	X[rP + 4][cP + 3] = '_';
	X[rP + 4][cP + 4] = '_';
	X[rP + 4][cP + 5] = '_';
	X[rP + 4][cP + 6] = '_';
	X[rP + 4][cP + 7] = '_';
	X[rP + 4][cP + 8] = '_';
	X[rP + 4][cP + 9] = '_';
	X[rP + 4][cP + 10] = '_';
	X[rP + 4][cP + 11] = '|';
}
void Set_PalmTree(char X[][1000], int& rPa, int& cPa)
{
	X[rPa][cPa] = '|';
	X[rPa][cPa + 1] = '-';
	X[rPa][cPa + 2] = '-';
	X[rPa][cPa + 3] = '|';
	X[rPa - 1][cPa] = '|';
	X[rPa - 1][cPa + 1] = '-';
	X[rPa - 1][cPa + 2] = '-';
	X[rPa - 1][cPa + 3] = '|';
	X[rPa - 2][cPa] = '|';
	X[rPa - 2][cPa + 1] = '-';
	X[rPa - 2][cPa + 2] = '-';
	X[rPa - 2][cPa + 3] = '|';
	X[rPa - 3][cPa] = '|';
	X[rPa - 3][cPa + 1] = '-';
	X[rPa - 3][cPa + 2] = '-';
	X[rPa - 3][cPa + 3] = '|';
	X[rPa - 4][cPa] = '|';
	X[rPa - 4][cPa + 1] = '-';
	X[rPa - 4][cPa + 2] = '-';
	X[rPa - 4][cPa + 3] = '|';
	X[rPa - 5][cPa] = '|';
	X[rPa - 5][cPa + 1] = '-';
	X[rPa - 5][cPa + 2] = '-';
	X[rPa - 5][cPa + 3] = '|';
	X[rPa - 6][cPa] = '|';
	X[rPa - 6][cPa + 1] = '-';
	X[rPa - 6][cPa + 2] = '-';
	X[rPa - 6][cPa + 3] = '|';
	X[rPa - 7][cPa] = '|';
	X[rPa - 7][cPa + 1] = '-';
	X[rPa - 7][cPa + 2] = '-';
	X[rPa - 7][cPa + 3] = '|';
	X[rPa - 8][cPa] = '|';
	X[rPa - 8][cPa + 1] = '-';
	X[rPa - 8][cPa + 2] = '-';
	X[rPa - 8][cPa + 3] = '|';
	X[rPa - 9][cPa] = '|';
	X[rPa - 9][cPa + 1] = '-';
	X[rPa - 9][cPa + 2] = '-';
	X[rPa - 9][cPa + 3] = '|';
	X[rPa - 10][cPa] = '|';
	X[rPa - 10][cPa + 1] = '-';
	X[rPa - 10][cPa + 2] = '-';
	X[rPa - 10][cPa + 3] = '|';
	X[rPa - 11][cPa] = '|';
	X[rPa - 11][cPa + 1] = '-';
	X[rPa - 11][cPa + 2] = '-';
	X[rPa - 11][cPa + 3] = '|';
	X[rPa - 11][cPa - 1] = ' ';
	X[rPa - 11][cPa - 2] = '`';
	X[rPa - 11][cPa - 3] = ' ';
	X[rPa - 11][cPa - 4] = ' ';
	X[rPa - 11][cPa - 5] = '`';
	X[rPa - 11][cPa - 6] = ' ';
	X[rPa - 11][cPa + 4] = ' ';
	X[rPa - 11][cPa + 5] = ' ';
	X[rPa - 11][cPa + 6] = ' ';
	X[rPa - 11][cPa + 7] = '`';
	X[rPa - 11][cPa + 8] = '`';
	X[rPa - 12][cPa] = '|';
	X[rPa - 12][cPa + 1] = '-';
	X[rPa - 12][cPa + 2] = '-';
	X[rPa - 12][cPa + 3] = '|';
	X[rPa - 12][cPa - 1] = 'o';
	X[rPa - 12][cPa - 1] = '|';
	X[rPa - 12][cPa - 1] = 'o';
	X[rPa - 12][cPa - 2] = '|';
	X[rPa - 12][cPa - 3] = '/';
	X[rPa - 12][cPa - 4] = '-';
	X[rPa - 12][cPa - 5] = '/';
	X[rPa - 12][cPa - 6] = '-';
	X[rPa - 12][cPa - 7] = '/';
	X[rPa - 12][cPa + 4] = '\\';
	X[rPa - 12][cPa + 5] = '-';
	X[rPa - 12][cPa + 6] = '\\';
	X[rPa - 12][cPa + 7] = '\\';
	X[rPa - 12][cPa + 8] = '|';
	X[rPa - 12][cPa + 9] = '\\';
	X[rPa - 12][cPa + 10] = '\\';
	X[rPa - 13][cPa] = 'o';
	X[rPa - 13][cPa - 1] = '-';
	X[rPa - 13][cPa - 2] = '-';
	X[rPa - 13][cPa - 3] = ' ';
	X[rPa - 13][cPa - 4] = '/';
	X[rPa - 13][cPa - 5] = ' ';
	X[rPa - 13][cPa - 6] = '/';
	X[rPa - 13][cPa + 2] = '\\';
	X[rPa - 13][cPa + 3] = ' ';
	X[rPa - 13][cPa + 4] = 'o';
	X[rPa - 13][cPa + 5] = '-';
	X[rPa - 13][cPa + 6] = '\\';
	X[rPa - 13][cPa + 7] = ' ';
	X[rPa - 13][cPa + 8] = '\\';
	X[rPa - 13][cPa + 9] = '\\';
	X[rPa - 14][cPa] = ';';
	X[rPa - 14][cPa - 1] = '-';
	X[rPa - 14][cPa - 2] = '-';
	X[rPa - 14][cPa - 3] = ' ';
	X[rPa - 14][cPa - 4] = '-';
	X[rPa - 14][cPa - 5] = '/';
	X[rPa - 14][cPa + 1] = '^';
	X[rPa - 14][cPa + 2] = '/';
	X[rPa - 14][cPa + 3] = ' ';
	X[rPa - 14][cPa + 4] = ',';
	X[rPa - 14][cPa + 5] = '-';
	X[rPa - 14][cPa + 6] = '_';
	X[rPa - 14][cPa + 7] = '_';
	X[rPa - 14][cPa + 8] = '\\';
	X[rPa - 15][cPa] = ' ';
	X[rPa - 15][cPa - 1] = '_';
	X[rPa - 15][cPa - 2] = '_';
	X[rPa - 15][cPa - 3] = '_';
	X[rPa - 15][cPa - 4] = ' ';
	X[rPa - 15][cPa + 1] = ' ';
	X[rPa - 15][cPa + 2] = ' ';
	X[rPa - 15][cPa + 3] = '_';
	X[rPa - 15][cPa + 4] = '_';
	X[rPa - 15][cPa + 5] = '_';
	X[rPa - 15][cPa + 6] = '_';
	X[rPa - 15][cPa + 7] = '_';

}
void Set_Gun(char X[][1000], int& rG, int cG, char gch)
{
	if (gch == 'e')
	{
		X[rG][cG] = ',';
		X[rG][cG + 1] = '_';
		X[rG][cG + 2] = '_';
		X[rG][cG + 3] = '_';
		X[rG][cG + 4] = '_';
		X[rG][cG + 5] = '_';
		X[rG][cG + 6] = ',';
		X[rG + 1][cG] = '/';
		X[rG + 1][cG + 1] = '/';
		X[rG + 1][cG + 2] = '"';
		X[29][cG - 3] = '^';
		X[29][cG - 2] = '^';
		X[29][cG - 1] = '^';
		X[29][cG] = '^';
		X[29][cG + 1] = '^';
		X[29][cG + 2] = '^';
		X[29][cG + 3] = '^';
		X[29][cG + 4] = '^';
		X[29][cG + 5] = '^';
		X[29][cG + 6] = '^';
		X[29][cG] = '^';
		X[29][cG + 1] = '^';
		X[29][cG + 2] = '^';
	}
}
void Set_Sun(char X[][1000], int& rS, int& cS)
{
	X[rS][cS] = '|';
	X[rS + 1][cS - 1] = '\\';
	X[rS + 1][cS] = '*';
	X[rS + 1][cS + 1] = '/';
	X[rS + 2][cS - 3] = '-';
	X[rS + 2][cS - 2] = '-';
	X[rS + 2][cS - 1] = '*';
	X[rS + 2][cS] = 'o';
	X[rS + 2][cS + 1] = '*';
	X[rS + 2][cS + 2] = '-';
	X[rS + 2][cS + 3] = '-';
	X[rS + 3][cS - 1] = '/';
	X[rS + 3][cS] = '*';
	X[rS + 3][cS + 1] = '\\';
	X[rS + 4][cS] = '|';

}
void Set_Enemy(char X[][1000], int& rEN, int& cEN)
{
	X[rEN][cEN] = 'k';
	X[rEN + 1][cEN] = '|';
	X[rEN + 1][cEN - 3] = 'o';
	X[rEN + 2][cEN] = 'o';
	X[rEN + 2][cEN - 1] = '=';
	X[rEN + 2][cEN - 2] = '=';
	X[rEN + 2][cEN - 3] = 'Y';
	X[rEN + 2][cEN - 4] = ')';
	X[rEN + 2][cEN - 5] = '(';
	X[rEN + 3][cEN] = '|';
	X[rEN + 3][cEN - 2] = '\\';
	X[rEN + 3][cEN - 3] = '_';
	X[rEN + 3][cEN - 4] = '/';
	X[rEN + 4][cEN] = '|';
	X[rEN + 4][cEN - 2] = '_';
	X[rEN + 4][cEN - 3] = 'W';
	X[rEN + 4][cEN - 4] = '_';
}
void Enemy_delete(char X[][1000], int& rEN, int& cEN)
{
	X[rEN][cEN] = ' ';
	X[rEN + 1][cEN] = ' ';
	X[rEN + 1][cEN - 3] = ' ';
	X[rEN + 2][cEN] = ' ';
	X[rEN + 2][cEN - 1] = ' ';
	X[rEN + 2][cEN - 2] = ' ';
	X[rEN + 2][cEN - 3] = ' ';
	X[rEN + 2][cEN - 4] = ' ';
	X[rEN + 2][cEN - 5] = ' ';
	X[rEN + 3][cEN] = ' ';
	X[rEN + 3][cEN - 2] = ' ';
	X[rEN + 3][cEN - 3] = ' ';
	X[rEN + 3][cEN - 4] = ' ';
	X[rEN + 4][cEN] = ' ';
	X[rEN + 4][cEN - 2] = ' ';
	X[rEN + 4][cEN - 3] = ' ';
	X[rEN + 4][cEN - 4] = ' ';
}
void jump(int& rH, int& cH, char& gch, int& gflag)
{
	if (gch == 'x' && gflag == 1)
	{
		if (rH >= 41)
		{
			rH--;
			if (rH == 41)
			{
				gch = '?';
				gflag = 0;
			}
		}
	}
}
void jumpRight(int& rH, int& cH, char& gch, int& gflag)
{
	if (gch == 'c' && gflag == 1)
	{
		if (rH >= 41)
		{
			rH--;
			cH++;
			if (rH == 41)
			{
				gch = '!';
				gflag = 0;
			}
		}
	}
}
void jumpLeft(int& rH, int& cH, char& gch, int& gflag)
{
	if (gch == 'z' && gflag == 1)
	{
		if (rH >= 41)
		{
			rH--;
			cH--;
			if (rH == 41)
			{
				gch = '!';
				gflag = 0;
			}
		}
	}
}
void jump1(char X[][1000], int& rH, int& cH, int& posr)
{

	//Head
	X[rH][cH] = 'o';
	X[rH][cH + 1] = '/';
	X[rH][cH + 2] = ' ';



	//Abdomen
	X[rH + 1][cH] = '|';

	//Legs
	X[rH + 2][cH] = '>';
	X[rH + 2][cH + 1] = '>';
}
void jump2(char X[][1000], int& rH, int& cH, int& posr)
{
	//Head
	X[rH][cH] = '|';
	X[rH][cH + 1] = 'o';

	//Abdomen & Legs
	X[rH + 1][cH - 1] = '/';
	X[rH + 1][cH] = '|';
	X[rH + 1][cH + 1] = '/';
}
void jump3(char X[][1000], int& rH, int& cH, int& posr)
{
	//Legs
	X[rH][cH] = '<';
	X[rH][cH + 1] = '<';

	//Head & Abdomen
	X[rH + 1][cH + 1] = 'o';
	X[rH + 1][cH + 2] = '|';
	X[rH + 1][cH + 3] = '\\';
}
void jump4(char X[][1000], int& rH, int& cH, int& posr)
{
	//Head & Abdomen
	X[rH][cH] = 'o';
	X[rH][cH + 1] = '_';
	X[rH][cH + 2] = '_';
	X[rH][cH + 3] = ' ';

	//Legs & Arms
	X[rH + 1][cH + 1] = '/';
	X[rH + 1][cH + 2] = ' ';
	X[rH + 1][cH + 3] = '\\';

}
void jump5(char X[][1000], int& rH, int& cH, int& posr)
{
	//Head & Arms
	X[rH][cH] = 'o';
	X[rH][cH + 1] = '_';

	//Abdomen
	X[rH + 1][cH - 1] = '/';
	X[rH + 1][cH] = ' ';

	//Legs
	X[rH + 2][cH - 1] = '>';
	X[rH + 2][cH] = '>';

}
void jump6(char X[][1000], int& rH, int& cH, int& posr)
{
	//Head & Arms
	X[rH][cH] = 'o';
	X[rH][cH + 1] = '_';

	//Abdomen
	X[rH + 1][cH] = '|';

	//Legs
	X[rH + 2][cH] = '|';

}
void HeroDelete(char X[][1000], int& rH, int& cH)
{
	X[rH][cH] == ' ';
	X[rH][cH + 1] == ' ';
	X[rH][cH + 2] == ' ';
	X[rH][cH + 3] == ' ';
	X[rH][cH + 4] == ' ';
	X[rH][cH + 5] == ' ';
	X[rH][cH + 6] == ' ';

	X[rH + 1][cH + 3] == ' ';
	X[rH + 1][cH + 4] == ' ';

	X[rH + 2][cH + 2] == ' ';
	X[rH + 2][cH + 3] == ' ';
	X[rH + 2][cH + 4] == ' ';

	X[rH + 3][cH + 2] == ' ';
	X[rH + 3][cH + 3] == ' ';
	X[rH + 3][cH + 4] == ' ';
}
void enemy_autoturn(char X[][1000], int rEN2, int cEN2)
{
	//Head
	X[rEN2][cEN2] = '0';

	//Lance & Shield
	X[rEN2 + 1][cEN2] = '=';
	X[rEN2 + 1][cEN2 + 1] = 'Y';
	X[rEN2 + 1][cEN2 + 2] = ')';
	X[rEN2 + 1][cEN2 - 1] = '=';
	X[rEN2 + 1][cEN2 - 2] = 'o';
	X[rEN2 + 1][cEN2 - 3] = '-';
	X[rEN2 + 1][cEN2 - 4] = '-';
	X[rEN2 + 1][cEN2 - 5] = '-';
	X[rEN2 + 1][cEN2 - 6] = '<';

	//Abdomen
	X[rEN2 + 2][cEN2] = '_';
	X[rEN2 + 2][cEN2 + 1] = '\\';
	X[rEN2 + 2][cEN2 - 1] = '/';

	//Legs
	X[rEN2 + 3][cEN2] = ' ';
	X[rEN2 + 3][cEN2 + 1] = '\\';
	X[rEN2 + 3][cEN2 - 1] = '<';
}
void Gravity(char X[][1000], int& rH, int& cH, int& gflag, char& gch, int& cel)
{

	if (cH + 3 < (cel + 1) || cH + 3 > cel + 7)
	{
		if (X[rH + 4][cH + 3] == ' ')
		{
			rH++;
		}
	}

}
void singlebullet(char X[][1000], int& rH, int& cH, int rsb, int csb, char chbu)
{
	if (chbu == 'g')
	{
		X[rsb][csb] = '*';
	}
}
void movebullet(char X[][1000], int& cH, int& rsb, int& csb, char& chbu, int dir, int& sbflag, int& fbu)
{
	if (chbu == 'g')
	{
		if (X[rsb][csb + 1] == ' ')
		{
			csb++;
		}
		else
		{
			X[rsb][csb] = ' ';
			sbflag = 1;
			fbu = 0;
			chbu = '.';
		}
	}
}
void landscape(char X[][1000], char rla, char cla)
{
	X[rla][cla] = '/';
	X[rla][cla + 1] = '\\';
	X[rla + 1][cla - 1] = '/';
	X[rla + 1][cla] = '*';
	X[rla + 1][cla + 1] = '*';
	X[rla + 1][cla + 2] = '\\';

	X[rla + 2][cla] = '*';
	X[rla + 2][cla + 1] = '*';
	X[rla + 2][cla - 1] = '*';
	X[rla + 2][cla + 2] = '*';
	X[rla + 2][cla + 3] = '\\';
	X[rla + 2][cla + 7] = '/';
	X[rla + 2][cla + 8] = '\\';
	X[rla + 2][cla - 2] = '/';

	X[rla + 3][cla - 3] = '/';
	X[rla + 3][cla + 4] = '\\';
	X[rla + 3][cla + 6] = '/';
	X[rla + 3][cla + 9] = '\\';
	X[rla + 3][cla + 18] = '/';
	X[rla + 3][cla + 19] = '\\';
	X[rla + 3][cla + 18] = '/';
	X[rla + 3][cla + 23] = '/';
	X[rla + 3][cla + 24] = '\\';
	X[rla + 3][cla + 27] = '/';
	X[rla + 3][cla + 28] = '\\';

	X[rla + 4][cla - 4] = '/';
	X[rla + 4][cla + 10] = '\\';
	X[rla + 4][cla + 5] = '/';
	X[rla + 4][cla + 22] = '/';
	X[rla + 4][cla + 20] = '\\';
	X[rla + 4][cla + 17] = '/';
	X[rla + 4][cla + 25] = '\\';
	X[rla + 4][cla + 26] = '/';
	X[rla + 4][cla + 29] = '\\';
	X[rla + 4][cla + 1] = '\\';
	X[rla + 4][cla] = '/';
	X[rla + 5][cla + 4] = '/';
	X[rla + 5][cla - 5] = '/';
	X[rla + 5][cla + 11] = '\\';
	X[rla + 5][cla - 1] = '/';
	X[rla + 5][cla + 2] = '\\';


	X[rla + 5][cla - 8] = '_';
	X[rla + 5][cla - 7] = '_';
	X[rla + 5][cla - 6] = '_';
	X[rla + 5][cla - 4] = '_';
	X[rla + 5][cla - 3] = '_';
	X[rla + 5][cla - 2] = '_';
	X[rla + 5][cla] = '_';
	X[rla + 5][cla + 1] = '_';
	X[rla + 5][cla + 5] = '_';
	X[rla + 5][cla + 6] = '_';
	X[rla + 5][cla + 7] = '_';
	X[rla + 5][cla + 8] = '_';
	X[rla + 5][cla + 9] = '_';
	X[rla + 5][cla + 10] = '_';
	X[rla + 5][cla + 12] = '_';
	X[rla + 5][cla + 13] = '_';
	X[rla + 5][cla + 14] = '_';
	X[rla + 5][cla + 15] = '_';
	X[rla + 5][cla + 16] = '_';
	X[rla + 5][cla + 17] = '_';
	X[rla + 5][cla + 18] = '_';
	X[rla + 5][cla + 19] = '_';
	X[rla + 5][cla + 20] = '_';
	X[rla + 5][cla + 21] = '_';
	X[rla + 5][cla + 22] = '_';
	X[rla + 5][cla + 23] = '_';
	X[rla + 5][cla + 24] = '_';
	X[rla + 5][cla + 25] = '_';
	X[rla + 5][cla + 26] = '_';
	X[rla + 5][cla + 27] = '_';
	X[rla + 5][cla + 28] = '_';
	X[rla + 5][cla + 29] = '_';
	X[rla + 5][cla + 30] = '_';
	X[rla + 5][cla + 31] = '_';
	X[rla + 5][cla + 32] = '_';
	X[rla + 5][cla + 33] = '_';
	X[rla + 5][cla + 34] = '_';
	X[rla + 5][cla + 35] = '_';
	X[rla + 5][cla + 36] = '_';
	X[rla + 5][cla + 37] = '_';
	X[rla + 5][cla + 39] = '_';
	X[rla + 5][cla + 40] = '_';
	X[rla + 5][cla + 41] = '_';
	X[rla + 5][cla + 42] = '_';
	X[rla + 5][cla + 43] = '_';
	X[rla + 5][cla + 44] = '_';
	X[rla + 5][cla + 45] = '_';
	X[rla + 5][cla + 46] = '_';
	X[rla + 5][cla + 47] = '_';
	X[rla + 5][cla + 48] = '_';
	X[rla + 5][cla + 49] = '_';
	X[rla + 5][cla + 50] = '_';
	X[rla + 5][cla + 51] = '_';
	X[rla + 5][cla + 52] = '_';
	X[rla + 5][cla + 53] = '_';
	X[rla + 5][cla + 54] = '_';
	X[rla + 5][cla + 55] = '_';
	X[rla + 5][cla + 56] = '_';
	X[rla + 5][cla + 57] = '_';
	X[rla + 5][cla + 58] = '_';
	X[rla + 5][cla + 59] = '_';
	X[rla + 5][cla + 60] = '_';
	X[rla + 5][cla + 61] = '_';
	X[rla + 5][cla + 62] = '_';
	X[rla + 5][cla + 63] = '_';
	X[rla + 5][cla + 64] = '_';
	X[rla + 5][cla + 65] = '_';
	X[rla + 5][cla + 66] = '_';
	X[rla + 5][cla + 67] = '_';
	X[rla + 5][cla + 68] = '_';
	X[rla + 5][cla + 69] = '_';
	X[rla + 5][cla + 70] = '_';
	X[rla + 5][cla + 71] = '_';
	X[rla + 5][cla + 72] = '_';
	X[rla + 5][cla + 73] = '_';
	X[rla + 5][cla + 74] = '_';
	X[rla + 5][cla + 75] = '_';
	X[rla + 5][cla + 76] = '_';
	X[rla + 5][cla + 77] = '_';
	X[rla + 5][cla + 78] = '_';
	X[rla + 5][cla + 79] = '_';
	X[rla + 5][cla + 80] = '_';
	X[rla + 5][cla + 81] = '_';
	X[rla + 5][cla + 82] = '_';
	X[rla + 5][cla + 83] = '_';
	X[rla + 5][cla + 84] = '_';
	X[rla + 5][cla + 85] = '_';


	X[rla + 3][cla + 32] = '/';
	X[rla + 3][cla + 33] = '\\';
	X[rla + 4][cla + 31] = '/';
	X[rla + 4][cla + 34] = '\\';

	X[rla + 3][cla + 35] = '/';
	X[rla + 3][cla + 36] = '\\';
	X[rla + 4][cla + 37] = '\\';
	X[rla + 5][cla + 38] = '\\';


	X[rla + 3][cla + 40] = '/';
	X[rla + 3][cla + 42] = '\\';
	X[rla + 4][cla + 39] = '/';
	X[rla + 4][cla + 43] = '\\';
	X[rla + 2][cla + 41] = '*';

	X[rla + 3][cla + 45] = '/';
	X[rla + 2][cla + 46] = '/';
	X[rla + 2][cla + 48] = '\\';
	X[rla + 3][cla + 49] = '\\';
	X[rla + 4][cla + 44] = '/';
	X[rla + 4][cla + 50] = '\\';

	X[rla + 1][cla + 47] = '0';
	X[rla][cla + 47] = '*';
	X[rla - 1][cla + 48] = '*';

	X[rla - 2][cla + 49] = '*';
	X[rla - 3][cla + 50] = '*';
	X[rla - 4][cla + 51] = '*';

	X[rla][cla + 28] = 175;
	X[rla][cla + 26] = 175;
	X[rla][cla + 30] = 175;
	X[rla][cla + 32] = 175;
	X[rla + 1][cla + 25] = 175;
	X[rla + 1][cla + 29] = 175;
	X[rla + 1][cla + 27] = 175;
	X[rla + 1][cla + 31] = 175;
	X[rla - 1][cla + 25] = 175;
	X[rla - 1][cla + 29] = 175;
	X[rla - 1][cla + 27] = 175;
	X[rla - 1][cla + 31] = 175;
	X[rla - 2][cla + 23] = 175;
	X[rla - 2][cla + 21] = 175;
	X[rla - 2][cla + 19] = 175;
	X[rla - 2][cla + 17] = 175;
	X[rla - 3][cla + 22] = 175;
	X[rla - 3][cla + 20] = 175;
	X[rla - 3][cla + 18] = 175;
	X[rla - 3][cla + 16] = 175;

	X[rla + 3][cla + 53] = '/';
	X[rla + 3][cla + 54] = '\\';
	X[rla + 4][cla + 52] = '/';
	X[rla + 4][cla + 55] = '\\';
	X[rla + 3][cla + 58] = '/';
	X[rla + 3][cla + 59] = '\\';
	X[rla + 4][cla + 57] = '/';
	X[rla + 4][cla + 60] = '\\';
	X[rla + 3][cla + 61] = '/';
	X[rla + 3][cla + 62] = '\\';
	X[rla + 4][cla + 63] = '\\';

	X[rla + 3][cla + 65] = '/';
	X[rla + 3][cla + 66] = '\\';
	X[rla + 4][cla + 64] = '/';
	X[rla + 4][cla + 67] = '\\';

	X[rla + 3][cla + 68] = '/';
	X[rla + 3][cla + 69] = '\\';
	X[rla + 4][cla + 70] = '\\';

	X[rla + 3][cla + 73] = '/';
	X[rla + 3][cla + 74] = '\\';
	X[rla + 4][cla + 72] = '/';
	X[rla + 4][cla + 75] = '\\';

}
void Set_Elevator(char X[][1000], int& rel, int& cel)
{
	//Row4 Elevator
	X[rel + 3][cel + 1] = '-';
	X[rel + 3][cel + 2] = '-';
	X[rel + 3][cel + 3] = '-';
	X[rel + 3][cel + 4] = '-';
	X[rel + 3][cel + 5] = '-';
	X[rel + 3][cel + 6] = '-';

}
void Move_Elevator(char X[][1000], int& rel, int& cel, int& felev, int& rH, int cH, int& posele)
{
	if (rel >= 37 && felev == 0)
	{
		rel--;

		if (rel == 37)
		{
			felev = 1;
			posele = 1;
		}
	}

	if (rel <= 45 && felev == 1)
	{
		rel++;

		if (rel == 45)
		{
			felev = 0;
			posele = 1;
		}

	}
}
void Hero_onelevator(char X[][1000], int& rH, int& cH, int& rel, int cel, int& posele, int& gflag)
{
	if (cH + 3 >= (cel + 1) && cH + 3 <= (cel + 7) && posele == 1 && gflag == 1)
	{
		rH = rel - 1;
	}

}
void enemy_Lance(char X[][1000], int renemy, int cenemy, int cEN2, int& cH)
{
	if (cH >= 70)
	{
		X[renemy][cenemy] = '<';
	}
}
void enemy_Throw(char X[][1000], int& renemy, int& cenemy, int cH, int& ebflag)
{
	if (X[renemy][cenemy - 1] == ' ')
	{
		cenemy--;
	}
	else
		ebflag = 1;


}
void ship(char x[][1000], int& rship, int& cship)
{
	// Row 0 Starting from bottom

	x[rship][cship + 12] = '\\';
	for (int i = 13; i < 65; i++)
	{
		x[rship][cship + i] = '_';
	}
	x[rship][cship + 65] = '/';

	// Row 1

	x[rship - 1][cship + 11] = '\\';
	for (int i = cship + 17; i < cship + 64; i += 4)
	{
		x[rship - 1][i] = '[';
		x[rship - 1][i + 1] = ']';
	}
	x[rship - 1][cship + 66] = '/';

	// Row 3

	x[rship - 2][cship + 1] = '|';
	for (int i = cship + 2; i < cship + 11; i++)
	{
		x[rship - 2][i] = '_';
	}
	x[rship - 2][cship + 67] = '/';

	// Row 4

	x[rship - 3][cship + 1] = '|';
	x[rship - 3][cship + 68] = '/';

	// Row 5

	x[rship - 4][cship + 1] = '|';
	x[rship - 4][cship + 69] = '/';

	// Row 6

	x[rship - 5][cship + 1] = '|';
	x[rship - 5][cship + 70] = '/';

	// Row 7

	for (int i = cship + 2; i < cship + 71; i++)
	{
		x[rship - 6][i] = '_';
	}
	x[rship - 6][cship + 19] = '|';
	x[rship - 6][cship + 20] = '|';
	x[rship - 6][cship + 38] = '|';
	x[rship - 6][cship + 71] = '_';
	x[rship - 6][cship + 72] = '_';
	x[rship - 6][cship + 73] = '_';
	x[rship - 6][cship + 74] = '_';
	x[rship - 6][cship + 75] = '_';
	x[rship - 6][cship + 76] = '_';
	x[rship - 6][cship + 77] = '_';
	x[rship - 6][cship + 78] = '_';
	x[rship - 6][cship + 79] = '_';
	x[rship - 6][cship + 80] = '_';



	// Row 8

	x[rship - 7][cship + 19] = '|';
	x[rship - 7][cship + 20] = '|';
	x[rship - 7][cship + 38] = '|';
	x[rship - 7][cship + 19] = '|';


	// Row 9

	x[rship - 8][cship + 19] = '|';
	x[rship - 8][cship + 20] = '|';
	x[rship - 8][cship + 38] = '|';
	x[rship - 8][cship + 19] = '|';


	// Row 10

	x[rship - 9][cship + 9] = '|';
	for (int i = cship + 10; i < cship + 60; i++)
	{
		x[rship - 9][i] = '_';
	}
	x[rship - 9][cship + 19] = '|';
	x[rship - 9][cship + 20] = '|';
	x[rship - 9][cship + 38] = '|';
	x[rship - 9][cship + 39] = '|';
	x[rship - 9][cship + 60] = '|';
	x[rship - 9][cship + 61] = '|';


	// Row 11

	x[rship - 10][cship + 9] = '|';
	x[rship - 10][cship + 19] = '|';
	x[rship - 10][cship + 20] = '|';
	x[rship - 10][cship + 38] = 'Z';
	x[rship - 10][cship + 39] = 'Z';
	x[rship - 10][cship + 60] = '|';
	x[rship - 10][cship + 61] = '|';

	// row 12

	x[rship - 11][cship + 9] = '|';
	x[rship - 11][cship + 19] = '|';
	x[rship - 11][cship + 20] = '|';
	x[rship - 11][cship + 38] = '|';
	x[rship - 11][cship + 39] = '|';
	x[rship - 11][cship + 60] = '|';
	x[rship - 11][cship + 61] = '|';

	// row 13

	x[rship - 12][cship + 9] = '|';
	x[rship - 12][cship + 19] = '|';
	x[rship - 12][cship + 20] = '|';
	x[rship - 12][cship + 38] = '|';
	x[rship - 12][cship + 39] = '|';
	x[rship - 12][cship + 60] = '|';
	x[rship - 12][cship + 61] = '|';

	// row 14

	x[rship - 13][cship + 9] = '|';
	x[rship - 13][cship + 19] = '|';
	x[rship - 13][cship + 20] = '|';
	x[rship - 13][cship + 38] = '|';
	x[rship - 13][cship + 39] = '|';
	x[rship - 13][cship + 60] = '|';
	x[rship - 13][cship + 61] = '|';

	// row 15

	x[rship - 14][cship + 9] = '|';
	x[rship - 14][cship + 19] = 'Z';
	x[rship - 14][cship + 20] = 'Z';
	x[rship - 14][cship + 38] = '|';
	x[rship - 14][cship + 39] = '|';
	x[rship - 14][cship + 60] = '|';
	x[rship - 14][cship + 61] = '|';

	// row 16

	x[rship - 15][cship + 9] = '|';
	x[rship - 15][cship + 19] = '|';
	x[rship - 15][cship + 20] = '|';
	x[rship - 15][cship + 38] = 'Z';
	x[rship - 15][cship + 39] = 'Z';
	x[rship - 15][cship + 60] = '|';
	x[rship - 15][cship + 61] = 'I';

	// row 17

	for (int i = cship + 10; i < cship + 25; i++)
	{
		x[rship - 16][i] = '_';
	}
	x[rship - 16][cship + 25] = '|';
	x[rship - 16][cship + 38] = 'Z';
	x[rship - 16][cship + 39] = 'Z';
	x[rship - 16][cship + 51] = '|';
	x[rship - 16][cship + 52] = '_';
	x[rship - 16][cship + 53] = '_';
	x[rship - 16][cship + 54] = '_';
	x[rship - 16][cship + 55] = '_';
	x[rship - 16][cship + 56] = '_';
	x[rship - 16][cship + 57] = '_';
	x[rship - 16][cship + 58] = '_';
	x[rship - 16][cship + 59] = '_';
	x[rship - 16][cship + 60] = '_';

	// row 18

	x[rship - 17][cship + 25] = '|';
	x[rship - 17][cship + 38] = '|';
	x[rship - 17][cship + 39] = '|';
	x[rship - 17][cship + 51] = '|';

	// row 19

	for (int i = cship + 26; i < cship + 51; i++)
	{
		x[rship - 18][i] = '_';
	}


}
void gymnestic(char X[][1000], int& rgym, int& cgym)
{
	X[rgym][cgym] = 'O';
	X[rgym][cgym + 1] = '-';
	X[rgym][cgym + 2] = '-';
	X[rgym][cgym + 3] = '+';
	X[rgym][cgym + 4] = '=';
	X[rgym][cgym + 5] = '-';
	X[rgym][cgym + 6] = '=';
	X[rgym][cgym + 7] = '+';
	X[rgym][cgym + 8] = '-';
	X[rgym][cgym + 9] = '-';
	X[rgym][cgym + 10] = 'O';

	X[rgym - 1][cgym + 3] = '/';
	X[rgym - 1][cgym + 7] = '\\';

	X[rgym - 3][cgym + 5] = 'v';

	X[rgym - 4][cgym + 2] = '/';
	X[rgym - 4][cgym + 3] = '-';
	X[rgym - 4][cgym + 7] = '-';
	X[rgym - 4][cgym + 8] = '\\';

	X[rgym - 5][cgym + 3] = '_';
	X[rgym - 5][cgym + 5] = 'O';
	X[rgym - 5][cgym + 7] = '_';



}
void enemygym1(char X[][1000], int& flgym, int& rgym, int& cgym)
{
	if (flgym == 1)
	{
		X[rgym][cgym] = 'O';
		X[rgym][cgym + 1] = '-';
		X[rgym][cgym + 2] = '-';
		X[rgym][cgym + 3] = '+';
		X[rgym][cgym + 4] = '=';
		X[rgym][cgym + 5] = '-';
		X[rgym][cgym + 6] = '=';
		X[rgym][cgym + 7] = '+';
		X[rgym][cgym + 8] = '-';
		X[rgym][cgym + 9] = '-';
		X[rgym][cgym + 10] = 'O';

		X[rgym - 1][cgym + 3] = '\\';
		X[rgym - 1][cgym + 4] = '|';
		X[rgym - 1][cgym + 6] = '|';
		X[rgym - 1][cgym + 7] = '/';

		X[rgym - 2][cgym + 3] = '/';
		X[rgym - 2][cgym + 5] = 'O';
		X[rgym - 2][cgym + 7] = '\\';

		X[rgym - 3][cgym + 4] = '_';
		X[rgym - 3][cgym + 5] = '.';
		X[rgym - 3][cgym + 6] = '_';
	}

}
void enemygym2(char X[][1000], int& flgym, int& rgym, int& cgym)
{
	if (flgym == 2)
	{

		X[rgym][cgym + 4] = '2';
		X[rgym][cgym + 5] = '"';
		X[rgym][cgym + 6] = '2';

		X[rgym - 1][cgym] = 'O';
		X[rgym - 1][cgym + 1] = '-';
		X[rgym - 1][cgym + 2] = '-';
		X[rgym - 1][cgym + 3] = '=';
		X[rgym - 1][cgym + 4] = '-';
		X[rgym - 1][cgym + 5] = '-';
		X[rgym - 1][cgym + 6] = '-';
		X[rgym - 1][cgym + 7] = '=';
		X[rgym - 1][cgym + 8] = '-';
		X[rgym - 1][cgym + 9] = '-';
		X[rgym - 1][cgym + 10] = 'O';

		X[rgym - 2][cgym + 3] = '/';
		X[rgym - 2][cgym + 5] = 'O';
		X[rgym - 2][cgym + 7] = '\\';

		X[rgym - 3][cgym + 4] = '_';
		X[rgym - 3][cgym + 5] = 'O';
		X[rgym - 3][cgym + 6] = '_';
	}

}
void enemygym3(char X[][1000], int& flgym, int& rgym, int& cgym)
{
	if (flgym == 3)
	{
		X[rgym][cgym + 4] = '-';
		X[rgym][cgym + 5] = ' ';
		X[rgym][cgym + 6] = '-';

		X[rgym - 1][cgym + 4] = '>';
		X[rgym - 1][cgym + 5] = '"';
		X[rgym - 1][cgym + 6] = '>';

		X[rgym - 2][cgym] = 'O';
		X[rgym - 2][cgym + 1] = '-';
		X[rgym - 2][cgym + 2] = '-';
		X[rgym - 2][cgym + 3] = '(';
		X[rgym - 2][cgym + 4] = '-';
		X[rgym - 2][cgym + 5] = '-';
		X[rgym - 2][cgym + 6] = '-';
		X[rgym - 2][cgym + 7] = ')';
		X[rgym - 2][cgym + 8] = '-';
		X[rgym - 2][cgym + 9] = '-';
		X[rgym - 2][cgym + 10] = 'O';

		X[rgym - 3][cgym + 4] = '_';
		X[rgym - 3][cgym + 5] = 'O';
		X[rgym - 3][cgym + 6] = '_';
	}
}
void enemygym4(char X[][1000], int& flgym, int& rgym, int& cgym)
{
	if (flgym == 4)
	{
		X[rgym][cgym + 3] = '-';
		X[rgym][cgym + 6] = '-';

		X[rgym - 1][cgym + 3] = '/';
		X[rgym - 1][cgym + 6] = '\\';

		X[rgym - 2][cgym + 5] = 'X';

		X[rgym - 3][cgym] = 'O';
		X[rgym - 3][cgym + 1] = '-';
		X[rgym - 3][cgym + 2] = '-';
		X[rgym - 3][cgym + 3] = '<';
		X[rgym - 3][cgym + 4] = '-';
		X[rgym - 3][cgym + 5] = '+';
		X[rgym - 3][cgym + 6] = '-';
		X[rgym - 3][cgym + 7] = '>';
		X[rgym - 3][cgym + 8] = '-';
		X[rgym - 3][cgym + 9] = '-';
		X[rgym - 3][cgym + 10] = 'O';

		X[rgym - 4][cgym + 4] = '_';
		X[rgym - 4][cgym + 5] = 'O';
		X[rgym - 4][cgym + 6] = '_';
	}
}
void enemygym5(char X[][1000], int& flgym, int& rgym, int& cgym)
{
	if (flgym == 5)
	{
		X[rgym][cgym + 3] = '~';
		X[rgym][cgym + 6] = 'Z';

		X[rgym - 1][cgym + 3] = '/';
		X[rgym - 1][cgym + 6] = ')';

		X[rgym - 2][cgym + 5] = 'v';

		X[rgym - 3][cgym + 4] = '`';
		X[rgym - 3][cgym + 5] = '-';
		X[rgym - 3][cgym + 6] = '`';

		X[rgym - 4][cgym] = 'O';
		X[rgym - 4][cgym + 1] = '-';
		X[rgym - 4][cgym + 2] = '-';
		X[rgym - 4][cgym + 3] = '=';
		X[rgym - 4][cgym + 4] = '-';
		X[rgym - 4][cgym + 5] = 'O';
		X[rgym - 4][cgym + 6] = '-';
		X[rgym - 4][cgym + 7] = '=';
		X[rgym - 4][cgym + 8] = '-';
		X[rgym - 4][cgym + 9] = '-';
		X[rgym - 4][cgym + 10] = 'O';
	}

}
void enemygym6(char X[][1000], int& flgym, int& rgym, int& cgym)
{
	if (flgym == 6)
	{
		X[rgym][cgym + 3] = '=';
		X[rgym][cgym + 6] = '=';

		X[rgym - 1][cgym + 3] = '/';
		X[rgym - 1][cgym + 6] = '\\';

		X[rgym - 2][cgym + 5] = '-';

		X[rgym - 3][cgym + 4] = '-';
		X[rgym - 3][cgym + 6] = '-';

		X[rgym - 4][cgym + 4] = '\\';
		X[rgym - 4][cgym + 5] = 'O';
		X[rgym - 4][cgym + 6] = '/';

		X[rgym - 5][cgym] = 'O';
		X[rgym - 5][cgym + 1] = '-';
		X[rgym - 5][cgym + 2] = '-';
		X[rgym - 5][cgym + 3] = ',';
		X[rgym - 5][cgym + 4] = '-';
		X[rgym - 5][cgym + 5] = '-';
		X[rgym - 5][cgym + 6] = '-';
		X[rgym - 5][cgym + 7] = ',';
		X[rgym - 5][cgym + 8] = '-';
		X[rgym - 5][cgym + 9] = '-';
		X[rgym - 5][cgym + 10] = 'O';
	}

}
void enemygym7(char X[][1000], int& flgym, int& rgym, int& cgym)
{
	if (flgym == 7)
	{
		X[rgym][cgym + 3] = '=';
		X[rgym][cgym + 6] = '=';

		X[rgym - 1][cgym + 3] = '/';
		X[rgym - 1][cgym + 6] = '\\';

		X[rgym - 2][cgym + 5] = '-';

		X[rgym - 3][cgym + 4] = '-';
		X[rgym - 3][cgym + 6] = '-';

		X[rgym - 4][cgym + 4] = '\\';
		X[rgym - 4][cgym + 5] = 'O';
		X[rgym - 4][cgym + 6] = '/';
	}
}
void bar(char X[][1000], int& rbar, int& cbar, int& flgym)
{
	if (flgym == 7)
	{
		X[rbar][cbar] = 'O';
		X[rbar][cbar + 1] = '-';
		X[rbar][cbar + 2] = '-';
		X[rbar][cbar + 3] = '+';
		X[rbar][cbar + 4] = '=';
		X[rbar][cbar + 5] = '-';
		X[rbar][cbar + 6] = '=';
		X[rbar][cbar + 7] = '+';
		X[rbar][cbar + 8] = '-';
		X[rbar][cbar + 9] = '-';
		X[rbar][cbar + 10] = 'O';
	}

}
void movebar1(char X[][1000], int& rbar, int& cbar, int& flgym, int& cH, int& drawbar)
{

	if (flgym == 7)
	{
		if (cbar == cH)
		{
			drawbar = 1;
		}
		else
		{
			if (X[rbar][cbar - 1] = ' ')
			{
				cbar--;
			}
		}
	}


}
void movebar2(char X[][1000], int& rbar, int& cbar, int& flgym, int& a, int& flagmovebar)
{
	if (flgym == 7)
	{
		if (cbar == a)
		{
			if (X[rbar + 1][cbar] == ' ')
			{
				rbar += 3;
				flagmovebar = 1;
				a = 0;
			}
		}
	}
}
void Draw_Dragon1(char x[][1000], int& r, int& c, int& fldragon)
{
	if (fldragon == 0)
	{
		// Row 0
		x[r][c] = '_';
		x[r][c + 1] = '_';

		// Row 1
		x[r + 1][c - 4] = '_';
		x[r + 1][c - 3] = '.';
		x[r + 1][c - 2] = '-';
		x[r + 1][c - 1] = '"';
		x[r + 1][c] = '.';
		x[r + 1][c + 1] = '-';
		x[r + 1][c + 2] = '"';
		x[r + 1][c + 3] = '"';
		x[r + 1][c + 4] = '-';
		x[r + 1][c + 5] = '.';
		x[r + 1][c + 6] = '_';
		x[r + 1][c + 7] = '_';

		// Row 2
		x[r + 2][c - 7] = '.';
		x[r + 2][c - 6] = '-';
		x[r + 2][c - 5] = '"';
		x[r + 2][c - 4] = '.';
		x[r + 2][c + 4] = '"';
		x[r + 2][c + 5] = '-';
		x[r + 2][c + 6] = '.';
		x[r + 2][c + 7] = '_';
		x[r + 2][c + 9] = '_';
		x[r + 2][c + 10] = '_';
		x[r + 2][c + 11] = '.';
		x[r + 2][c + 12] = '-';
		x[r + 2][c + 13] = '-';
		x[r + 2][c + 14] = '.';
		x[r + 2][c + 15] = '_';

		// Row 3
		x[r + 3][c - 14] = '-';
		x[r + 3][c - 13] = '.';
		x[r + 3][c - 12] = '.';
		x[r + 3][c - 11] = '"';
		x[r + 3][c - 10] = '\\';
		x[r + 3][c - 9] = ',';
		x[r + 3][c - 8] = '-';
		x[r + 3][c - 7] = ',';
		x[r + 3][c - 6] = '//';
		x[r + 3][c - 5] = '.';
		x[r + 3][c - 4] = '.';
		x[r + 3][c - 3] = '-';
		x[r + 3][c] = '_';
		x[r + 3][c + 10] = '.';
		x[r + 3][c + 11] = '"';
		x[r + 3][c + 15] = '\\';
		x[r + 3][c + 19] = '"';
		x[r + 3][c + 20] = '-';
		x[r + 3][c + 21] = '-';
		x[r + 3][c + 22] = '-';
		x[r + 3][c + 23] = '.';
		x[r + 3][c + 24] = '_';

		// Row 4
		x[r + 4][c - 13] = ')';
		x[r + 4][c - 12] = '.';
		x[r + 4][c - 10] = '//';
		x[r + 4][c - 9] = '_';
		x[r + 4][c - 7] = '_';
		x[r + 4][c - 6] = '\\';
		x[r + 4][c - 5] = '"';
		x[r + 4][c - 3] = '(';
		x[r + 4][c - 1] = '"';
		x[r + 4][c + 1] = '"';
		x[r + 4][c + 2] = '.';
		x[r + 4][c + 12] = '"';
		x[r + 4][c + 13] = '-';
		x[r + 4][c + 16] = '"';
		x[r + 4][c + 17] = '//';
		x[r + 4][c + 18] = '"';
		x[r + 4][c + 19] = '-';
		x[r + 4][c + 20] = '-';
		x[r + 4][c + 21] = '-';
		x[r + 4][c + 22] = '-';
		x[r + 4][c + 23] = '-';
		x[r + 4][c + 24] = '.';
		x[r + 4][c + 25] = '_';
		x[r + 4][c + 26] = '"';
		x[r + 4][c + 27] = '-';
		x[r + 4][c + 28] = '.';
		x[r + 4][c + 29] = '_';
		x[r + 4][c + 30] = '_';

		// Row 5
		x[r + 5][c - 13] = '"';
		x[r + 5][c - 12] = '.';
		x[r + 5][c - 11] = '.';
		x[r + 5][c - 10] = '"';
		x[r + 5][c - 9] = '0';
		x[r + 5][c - 7] = '0';
		x[r + 5][c - 4] = '"';
		x[r + 5][c - 3] = '-';
		x[r + 5][c - 2] = 'r';
		x[r + 5][c + 2] = '_';
		x[r + 5][c + 9] = '.';
		x[r + 5][c + 10] = '-';
		x[r + 5][c + 11] = '.';
		x[r + 5][c + 19] = '"';
		x[r + 5][c + 20] = '-';
		x[r + 5][c + 21] = '.';
		x[r + 5][c + 22] = '_';
		x[r + 5][c + 24] = '\\';


		// Row 6
		x[r + 6][c - 13] = '"';
		x[r + 6][c - 12] = '.';
		x[r + 6][c - 11] = '\\';
		x[r + 6][c - 10] = '.';
		x[r + 6][c - 8] = 'Y';
		x[r + 6][c - 6] = '.';
		x[r + 6][c - 5] = ')';
		x[r + 6][c - 4] = '.';
		x[r + 6][c - 3] = '"';
		x[r + 6][c + 5] = '(';
		x[r + 6][c + 7] = '.';
		x[r + 6][c + 8] = '"';
		x[r + 6][c + 11] = '.';
		x[r + 6][c + 18] = '.';
		x[r + 6][c + 19] = '\\';
		x[r + 6][c + 30] = '"';
		x[r + 6][c + 31] = '\\';
		x[r + 6][c + 32] = '"';
		x[r + 6][c + 33] = '.';

		// Row 7
		x[r + 7][c - 13] = '.';
		x[r + 7][c - 12] = '-';
		x[r + 7][c - 11] = '"';
		x[r + 7][c - 10] = ')';
		x[r + 7][c - 9] = '"';
		x[r + 7][c - 8] = '|';
		x[r + 7][c - 7] = '"';
		x[r + 7][c - 6] = '//';
		x[r + 7][c - 5] = '"';
		x[r + 7][c - 4] = '-';
		x[r + 7][c - 3] = '.';
		x[r + 7][c + 6] = '\\';
		x[r + 7][c + 7] = ')';
		x[r + 7][c + 12] = ')';
		x[r + 7][c + 19] = '"';
		x[r + 7][c + 20] = '"';
		x[r + 7][c + 21] = ',';
		x[r + 7][c + 22] = '_';
		x[r + 7][c + 29] = '_';
		x[r + 7][c + 30] = '.';
		x[r + 7][c + 31] = 'c';
		x[r + 7][c + 32] = '_';
		x[r + 7][c + 33] = '.';
		x[r + 7][c + 34] = '\\';

		// Row 8
		x[r + 8][c - 11] = '.';
		x[r + 8][c - 10] = '<';
		x[r + 8][c - 9] = ',';
		x[r + 8][c - 7] = ',';
		x[r + 8][c - 6] = '>';
		x[r + 8][c - 5] = '.';
		x[r + 8][c + 6] = '|';
		x[r + 8][c + 10] = '_';
		x[r + 8][c + 11] = '//';
		x[r + 8][c + 12] = '\\';
		x[r + 8][c + 21] = '.';
		x[r + 8][c + 23] = '"';
		x[r + 8][c + 24] = ',';
		x[r + 8][c + 28] = ':';
		x[r + 8][c + 31] = ':';
		x[r + 8][c + 34] = '\\';
		x[r + 8][c + 35] = '\\';

		// Row 9
		x[r + 9][c - 12] = '.';
		x[r + 9][c - 11] = '"';
		x[r + 9][c - 9] = '\\';
		x[r + 9][c - 8] = '_';
		x[r + 9][c - 7] = '//';
		x[r + 9][c - 5] = '"';
		x[r + 9][c - 4] = '.';
		x[r + 9][c + 5] = '//';
		x[r + 9][c + 8] = '.';
		x[r + 9][c + 9] = '"';
		x[r + 9][c + 13] = '|';
		x[r + 9][c + 24] = '"';
		x[r + 9][c + 25] = '.';
		x[r + 9][c + 30] = '.';
		x[r + 9][c + 31] = '"';
		x[r + 9][c + 35] = '\\';
		x[r + 9][c + 36] = ')';

		// Row 10
		x[r + 10][c + 4] = '//';
		x[r + 10][c + 6] = '.';
		x[r + 10][c + 7] = '-';
		x[r + 10][c + 8] = '"';
		x[r + 10][c + 13] = '"';
		x[r + 10][c + 14] = '-';
		x[r + 10][c + 15] = '.';
		x[r + 10][c + 24] = ':';
		x[r + 10][c + 26] = '\\';
		x[r + 10][c + 29] = '_';
		x[r + 10][c + 30] = ';';
		x[r + 10][c + 35] = '|';
		x[r + 10][c + 36] = '|';

		// Row 11
		x[r + 11][c + 3] = '//';
		x[r + 11][c + 5] = '//';
		x[r + 11][c + 10] = '_';
		x[r + 11][c + 16] = '\\';
		x[r + 11][c + 17] = '_';
		x[r + 11][c + 24] = '"';
		x[r + 11][c + 25] = '.';
		x[r + 11][c + 26] = '"';
		x[r + 11][c + 27] = '\\';
		x[r + 11][c + 29] = '"';
		x[r + 11][c + 31] = '//';
		x[r + 11][c + 35] = '|';
		x[r + 11][c + 36] = '|';

		// Row 12
		x[r + 12][c + 2] = '//';
		x[r + 12][c + 3] = '.';
		x[r + 12][c + 4] = '"';
		x[r + 12][c + 8] = '.';
		x[r + 12][c + 9] = '"';
		x[r + 12][c + 18] = '\\';
		x[r + 12][c + 19] = '_';
		x[r + 12][c + 26] = '.';
		x[r + 12][c + 27] = '|';
		x[r + 12][c + 31] = '\\';
		x[r + 12][c + 35] = '\\';
		x[r + 12][c + 36] = '|';

		// Row 13
		x[r + 13][c + 1] = '//';
		x[r + 13][c + 3] = '//';
		x[r + 13][c + 7] = '//';
		x[r + 13][c + 14] = '_';
		x[r + 13][c + 15] = '_';
		x[r + 13][c + 16] = '.';
		x[r + 13][c + 17] = '-';
		x[r + 13][c + 18] = '-';
		x[r + 13][c + 19] = '-';
		x[r + 13][c + 20] = '"';
		x[r + 13][c + 27] = '"';
		x[r + 13][c + 28] = '.';
		x[r + 13][c + 29] = '_';
		x[r + 13][c + 32] = ';';
		x[r + 13][c + 35] = '|';
		x[r + 13][c + 36] = '|';

		// Row 14 
		x[r + 14][c] = '//';
		x[r + 14][c + 1] = '.';
		x[r + 14][c + 2] = '"';
		x[r + 14][c + 5] = '_';
		x[r + 14][c + 6] = ':';
		x[r + 14][c + 7] = '-';
		x[r + 14][c + 8] = '.';
		x[r + 14][c + 9] = '_';
		x[r + 14][c + 10] = '_';
		x[r + 14][c + 11] = '_';
		x[r + 14][c + 12] = '_';
		x[r + 14][c + 13] = '<';
		x[r + 14][c + 15] = ',';
		x[r + 14][c + 28] = '"';
		x[r + 14][c + 29] = '.';
		x[r + 14][c + 30] = '\\';
		x[r + 14][c + 32] = '\\';
		x[r + 14][c + 35] = '|';
		x[r + 14][c + 36] = '|';

		// Row 15
		x[r + 15][c - 1] = '//';
		x[r + 15][c] = '//';
		x[r + 15][c + 2] = '.';
		x[r + 15][c + 3] = '-';
		x[r + 15][c + 4] = '"';
		x[r + 15][c + 10] = '"';
		x[r + 15][c + 11] = '-';
		x[r + 15][c + 12] = '.';
		x[r + 15][c + 13] = '_';
		x[r + 15][c + 14] = '_';
		x[r + 15][c + 17] = '"';
		x[r + 15][c + 18] = '-';
		x[r + 15][c + 19] = '"';
		x[r + 15][c + 20] = '-';
		x[r + 15][c + 21] = '\\';
		x[r + 15][c + 22] = '_';
		x[r + 15][c + 29] = '"';
		x[r + 15][c + 30] = '.';
		x[r + 15][c + 31] = '\\';
		x[r + 15][c + 32] = '/';
		x[r + 15][c + 33] = '_';
		x[r + 15][c + 35] = '\\';
		x[r + 15][c + 36] = '|';

		// Row 16
		x[r + 16][c - 2] = '(';
		x[r + 16][c] = '}';
		x[r + 16][c + 1] = ';';
		x[r + 16][c + 2] = '=';
		x[r + 16][c + 3] = '=';
		x[r + 16][c + 4] = '=';
		x[r + 16][c + 5] = '=';
		x[r + 16][c + 6] = '.';
		x[r + 16][c + 7] = '=';
		x[r + 16][c + 8] = '=';
		x[r + 16][c + 9] = '=';
		x[r + 16][c + 10] = '-';
		x[r + 16][c + 11] = '=';
		x[r + 16][c + 12] = '=';
		x[r + 16][c + 13] = '=';
		x[r + 16][c + 14] = '"';
		x[r + 16][c + 23] = '"';
		x[r + 16][c + 24] = '.';
		x[r + 16][c + 29] = '.';
		x[r + 16][c + 32] = '\\';
		x[r + 16][c + 33] = '\\';
		x[r + 16][c + 34] = ':';
		x[r + 16][c + 36] = '\\';

		// Row 17
		x[r + 17][c - 1] = '\\';
		x[r + 17][c] = '\\';
		x[r + 17][c + 2] = '"';
		x[r + 17][c + 3] = '.';
		x[r + 17][c + 4] = '_';
		x[r + 17][c + 13] = '//';
		x[r + 17][c + 24] = ':';
		x[r + 17][c + 28] = ',';
		x[r + 17][c + 29] = '"';
		x[r + 17][c + 33] = ')';
		x[r + 17][c + 34] = '\\';
		x[r + 17][c + 35] = '_';
		x[r + 17][c + 37] = '\\';

		// Row 18
		x[r + 18][c] = '\\';
		x[r + 18][c + 1] = '\\';
		x[r + 18][c + 5] = '"';
		x[r + 18][c + 6] = '-';
		x[r + 18][c + 7] = '-';
		x[r + 18][c + 8] = '-';
		x[r + 18][c + 9] = '-';
		x[r + 18][c + 10] = '-';
		x[r + 18][c + 11] = '-';
		x[r + 18][c + 12] = '//';
		x[r + 18][c + 25] = '\\';
		x[r + 18][c + 27] = '.';
		x[r + 18][c + 32] = '//';
		x[r + 18][c + 36] = ')';
		x[r + 18][c + 37] = '//';

		// Row 19
		x[r + 19][c + 1] = '\\';
		x[r + 19][c + 2] = '|';
		x[r + 19][c + 11] = '_';
		x[r + 19][c + 12] = '|';
		x[r + 19][c + 26] = ')';
		x[r + 19][c + 27] = 'Y';
		x[r + 19][c + 32] = '|';
		x[r + 19][c + 36] = '//';

		// Row 20
		x[r + 20][c + 2] = '\\';
		x[r + 20][c + 3] = '\\';
		x[r + 20][c + 10] = '\\';
		x[r + 20][c + 24] = '.';
		x[r + 20][c + 25] = '"';
		x[r + 20][c + 26] = ',';
		x[r + 20][c + 27] = '"';
		x[r + 20][c + 31] = '//';
		x[r + 20][c + 34] = ',';
		x[r + 20][c + 35] = '//';

		// Row 21
		x[r + 21][c + 3] = '\\';
		x[r + 21][c + 4] = '\\';
		x[r + 20][c + 9] = '_';
		x[r + 21][c + 10] = '//';
		x[r + 21][c + 23] = '//';
		x[r + 21][c + 30] = '_';
		x[r + 21][c + 31] = '//';

		// Row 22
		x[r + 22][c + 4] = '\\';
		x[r + 22][c + 5] = '\\';
		x[r + 22][c + 9] = '\\';
		x[r + 22][c + 21] = '.';
		x[r + 22][c + 22] = '"';
		x[r + 22][c + 27] = '.';
		x[r + 22][c + 28] = '"';

		// Row 23
		x[r + 23][c + 5] = '"';
		x[r + 23][c + 6] = '|';
		x[r + 23][c + 8] = '"';
		x[r + 23][c + 9] = '1';
		x[r + 23][c + 20] = '//';
		x[r + 23][c + 25] = '.';
		x[r + 23][c + 26] = '"';

		// Row 24
		x[r + 24][c + 7] = '"';
		x[r + 24][c + 8] = '.';
		x[r + 24][c + 10] = '\\';
		x[r + 24][c + 19] = '|';
		x[r + 24][c + 20] = ':';
		x[r + 24][c + 25] = '//';

		// Row 25

		x[r + 25][c + 9] = '\\';
		x[r + 25][c + 11] = '|';
		x[r + 25][c + 19] = '//';
		x[r + 25][c + 20] = '"';
		x[r + 25][c + 21] = ',';
		x[r + 25][c + 23] = '.';
		x[r + 25][c + 24] = '"';

		// Row 26
		x[r + 26][c + 10] = '\\';
		x[r + 26][c + 11] = '(';
		x[r + 26][c + 18] = '(';
		x[r + 26][c + 20] = ';';
		x[r + 26][c + 21] = 'z';
		x[r + 26][c + 22] = '"';

		// Row 27
		x[r + 27][c + 11] = '\\';
		x[r + 27][c + 12] = ':';
		x[r + 27][c + 19] = '\\';
		x[r + 27][c + 20] = '"';
		x[r + 27][c + 21] = '(';
		x[r + 27][c + 22] = '_';

		// Row 28
		x[r + 28][c + 12] = '\\';
		x[r + 28][c + 13] = '_';
		x[r + 28][c + 14] = ',';
		x[r + 28][c + 20] = '"';
		x[r + 28][c + 21] = '.';
		x[r + 28][c + 22] = '_';
		x[r + 28][c + 24] = '"';
		x[r + 28][c + 25] = '-';
		x[r + 28][c + 26] = '.';
		x[r + 28][c + 27] = '_';
		x[r + 28][c + 28] = '_';
		x[r + 28][c + 29] = '_';
	}
	fldragon = 1;
}
void Draw_Dragon2(char x[][1000], int& r, int& c, int& fldragon)
{
	if (fldragon == 1)
	{
		// Row 0
		x[r][c] = '_';
		x[r][c + 1] = '_';

		// Row 1
		x[r + 1][c - 4] = '_';
		x[r + 1][c - 3] = '.';
		x[r + 1][c - 2] = '-';
		x[r + 1][c - 1] = '"';
		x[r + 1][c] = '.';
		x[r + 1][c + 1] = '-';
		x[r + 1][c + 2] = '"';
		x[r + 1][c + 3] = '"';
		x[r + 1][c + 4] = '-';
		x[r + 1][c + 5] = '.';// Row 0

		// Row 1

		// Row 2
		x[r + 2][c] = '-';
		x[r + 2][c + 1] = '=';
		x[r + 2][c + 2] = '=';
		x[r + 2][c + 3] = '\\';
		x[r + 2][c + 4] = '\\';
		x[r + 2][c + 30] = '`';
		x[r + 2][c + 31] = '//';
		x[r + 2][c + 32] = '//';
		x[r + 2][c + 33] = '~';
		x[r + 2][c + 34] = '\\';
		x[r + 2][c + 35] = '\\';
		x[r + 2][c + 39] = '~';
		x[r + 2][c + 40] = '~';
		x[r + 2][c + 41] = '~';
		x[r + 2][c + 42] = '~';
		x[r + 2][c + 43] = '`';
		x[r + 2][c + 44] = '-';
		x[r + 2][c + 45] = '-';
		x[r + 2][c + 46] = '-';
		x[r + 2][c + 47] = '.';
		x[r + 2][c + 48] = '_';
		x[r + 2][c + 49] = '_';
		x[r + 2][c + 50] = '_';
		x[r + 2][c + 51] = '.';
		x[r + 2][c + 52] = '-';
		x[r + 2][c + 53] = '~';
		x[r + 2][c + 54] = '~';

		// Row 3
		x[r + 3][c - 4] = '_';
		x[r + 3][c - 3] = '_';
		x[r + 3][c - 2] = '_';
		x[r + 3][c - 1] = '_';
		x[r + 3][c] = '_';
		x[r + 3][c + 1] = '_';
		x[r + 3][c + 2] = '-';
		x[r + 3][c + 3] = '=';
		x[r + 3][c + 4] = '=';
		x[r + 3][c + 5] = '|';
		x[r + 3][c + 31] = '|';
		x[r + 3][c + 33] = '|';
		x[r + 3][c + 36] = '\\';
		x[r + 3][c + 37] = '\\';
		x[r + 3][c + 49] = '_';
		x[r + 3][c + 50] = '-';
		x[r + 3][c + 51] = '~';
		x[r + 3][c + 52] = '`';

		// Row 4
		x[r + 4][c - 10] = '_';
		x[r + 4][c - 9] = '_';
		x[r + 4][c - 8] = '-';
		x[r + 4][c - 7] = '-';
		x[r + 4][c - 6] = '~';
		x[r + 4][c - 5] = '~';
		x[r + 4][c - 4] = '~';
		x[r + 4][c - 1] = ',';
		x[r + 4][c] = '-';
		x[r + 4][c + 1] = '//';
		x[r + 4][c + 2] = '-';
		x[r + 4][c + 3] = '=';
		x[r + 4][c + 4] = '=';
		x[r + 4][c + 5] = '\\';
		x[r + 4][c + 6] = '\\';
		x[r + 4][c + 31] = '|';
		x[r + 4][c + 33] = '|';
		x[r + 4][c + 37] = '`';
		x[r + 4][c + 38] = '\\';
		x[r + 4][c + 47] = ',';
		x[r + 4][c + 48] = '"';

		// Row 5
		x[r + 5][c - 13] = '_';
		x[r + 5][c - 12] = '-';
		x[r + 5][c - 11] = '~';
		x[r + 5][c - 3] = '//';
		x[r + 5][c - 2] = '"';
		x[r + 5][c + 3] = '|';
		x[r + 5][c + 6] = '\\';
		x[r + 5][c + 7] = '\\';
		x[r + 5][c + 30] = '//';
		x[r + 5][c + 32] = '//';
		x[r + 5][c + 39] = '\\';
		x[r + 5][c + 46] = '//';

		// Row 6
		x[r + 6][c - 15] = '.';
		x[r + 6][c - 14] = '"';
		x[r + 6][c - 5] = '//';
		x[r + 6][c + 3] = '|';
		x[r + 6][c + 7] = '\\';
		x[r + 6][c + 8] = '\\';
		x[r + 6][c + 28] = '//';
		x[r + 6][c + 29] = '"';
		x[r + 6][c + 31] = '//';
		x[r + 6][c + 40] = '\\';
		x[r + 6][c + 44] = '//';
		x[r + 6][c + 45] = '"';

		// Row 7
		x[r + 7][c - 16] = '//';
		x[r + 7][c - 13] = '_';
		x[r + 7][c - 12] = '_';
		x[r + 7][c - 11] = '_';
		x[r + 7][c - 10] = '_';
		x[r + 7][c - 7] = '//';
		x[r + 7][c + 3] = '|';
		x[r + 7][c + 8] = '\\';
		x[r + 7][c + 9] = '`';
		x[r + 7][c + 10] = '\\';
		x[r + 7][c + 11] = '.';
		x[r + 7][c + 12] = '_';
		x[r + 7][c + 13] = '_';
		x[r + 7][c + 14] = '//';
		x[r + 7][c + 15] = '-';
		x[r + 7][c + 16] = '~';
		x[r + 7][c + 17] = '~';
		x[r + 7][c + 19] = '~';
		x[r + 7][c + 21] = '\\';
		x[r + 7][c + 23] = '_';
		x[r + 7][c + 25] = '_';
		x[r + 7][c + 26] = '//';
		x[r + 7][c + 27] = '"';
		x[r + 7][c + 30] = '/';
		x[r + 7][c + 41] = '\\';
		x[r + 7][c + 42] = '//';
		x[r + 7][c + 43] = '"';

		// Row 8
		x[r + 8][c - 17] = '/';
		x[r + 8][c - 16] = '-';
		x[r + 8][c - 15] = '"';
		x[r + 8][c - 14] = '~';
		x[r + 8][c - 9] = '~';
		x[r + 8][c - 8] = '~';
		x[r + 8][c - 7] = '~';
		x[r + 8][c - 6] = '~';
		x[r + 8][c - 5] = '~';
		x[r + 8][c - 4] = '-';
		x[r + 8][c - 3] = '-';
		x[r + 8][c - 2] = '-';
		x[r + 8][c - 1] = '_';
		x[r + 8][c] = '_';
		x[r + 8][c + 3] = '|';
		x[r + 8][c + 8] = '~';
		x[r + 8][c + 9] = '-';
		x[r + 8][c + 10] = '//';
		x[r + 8][c + 11] = '~';
		x[r + 8][c + 21] = '(';
		x[r + 8][c + 23] = ')';
		x[r + 8][c + 27] = '//';
		x[r + 8][c + 28] = '"';
		x[r + 8][c + 37] = '_';
		x[r + 8][c + 38] = '-';
		x[r + 8][c + 39] = '-';
		x[r + 8][c + 40] = '~';
		x[r + 8][c + 41] = '`';

		// Row 9
		x[r + 9][c + 1] = '\\';
		x[r + 9][c + 2] = '_';
		x[r + 9][c + 3] = '|';
		x[r + 9][c + 10] = '//';
		x[r + 9][c + 19] = '_';
		x[r + 9][c + 20] = ')';
		x[r + 9][c + 24] = ';';
		x[r + 9][c + 27] = ')';
		x[r + 9][c + 28] = ',';
		x[r + 9][c + 31] = '_';
		x[r + 9][c + 32] = '_';
		x[r + 9][c + 33] = '-';
		x[r + 9][c + 34] = '-';
		x[r + 9][c + 35] = '~';
		x[r + 9][c + 36] = '~';

		// Row 10

		x[r + 10][c + 3] = '"';
		x[r + 10][c + 4] = '~';
		x[r + 10][c + 5] = '~';
		x[r + 10][c + 6] = '-';
		x[r + 10][c + 7] = '-';
		x[r + 10][c + 8] = '_';
		x[r + 10][c + 9] = '//';
		x[r + 10][c + 16] = '_';
		x[r + 10][c + 17] = '-';
		x[r + 10][c + 18] = '~';
		x[r + 10][c + 19] = '/';
		x[r + 10][c + 20] = '-';
		x[r + 10][c + 23] = '//';
		x[r + 10][c + 25] = '\\';
		x[r + 10][c + 29] = '"';
		x[r + 10][c + 30] = '-';
		x[r + 10][c + 31] = '~';
		x[r + 10][c + 33] = '\\';

		// Row 11
		x[r + 11][c + 2] = '{';
		x[r + 11][c + 3] = '\\';
		x[r + 11][c + 4] = '_';
		x[r + 11][c + 5] = '_';
		x[r + 11][c + 6] = '-';
		x[r + 11][c + 7] = '-';
		x[r + 11][c + 8] = '_';
		x[r + 11][c + 9] = '//';
		x[r + 11][c + 10] = '}';
		x[r + 11][c + 15] = '//';
		x[r + 11][c + 17] = '\\';
		x[r + 11][c + 18] = '\\';
		x[r + 11][c + 19] = '_';
		x[r + 11][c + 20] = '>';
		x[r + 11][c + 21] = '-';
		x[r + 11][c + 23] = ')';
		x[r + 11][c + 24] = '<';
		x[r + 11][c + 25] = '_';
		x[r + 11][c + 26] = '_';
		x[r + 11][c + 27] = '\\';
		x[r + 11][c + 34] = '\\';

		// Row 12
		x[r + 12][c + 2] = '//';
		x[r + 12][c + 3] = '"';
		x[r + 12][c + 7] = '(';
		x[r + 12][c + 8] = '_';
		x[r + 12][c + 9] = '//';
		x[r + 12][c + 12] = '_';
		x[r + 12][c + 13] = '-';
		x[r + 12][c + 14] = '~';
		x[r + 12][c + 17] = '|';
		x[r + 12][c + 19] = '|';
		x[r + 12][c + 20] = '_';
		x[r + 12][c + 21] = '_';
		x[r + 12][c + 22] = '>';
		x[r + 12][c + 23] = '-';
		x[r + 12][c + 24] = '-';
		x[r + 12][c + 25] = '>';
		x[r + 12][c + 26] = '_';
		x[r + 12][c + 27] = '_';
		x[r + 12][c + 28] = '|';
		x[r + 12][c + 30] = '_';
		x[r + 12][c + 35] = '|';

		// Row 13
		x[r + 13][c + 1] = '|';
		x[r + 13][c + 2] = '0';
		x[r + 13][c + 5] = '0';
		x[r + 13][c + 7] = '_';
		x[r + 13][c + 8] = '/';
		x[r + 13][c + 9] = ')';
		x[r + 13][c + 11] = ')';
		x[r + 13][c + 12] = '-';
		x[r + 13][c + 13] = '~';
		x[r + 13][c + 19] = '|';
		x[r + 13][c + 21] = '|';
		x[r + 13][c + 22] = '_';
		x[r + 13][c + 23] = '_';
		x[r + 13][c + 24] = '>';
		x[r + 13][c + 25] = '-';
		x[r + 13][c + 26] = '-';
		x[r + 13][c + 27] = '<';
		x[r + 13][c + 28] = '_';
		x[r + 13][c + 29] = '_';
		x[r + 13][c + 30] = '|';
		x[r + 13][c + 36] = '|';

		// Row 14
		x[r + 14][c + 1] = '//';
		x[r + 14][c + 3] = '//';
		x[r + 14][c + 4] = '~';
		x[r + 14][c + 6] = ',';
		x[r + 14][c + 7] = '_';
		x[r + 14][c + 8] = '//';
		x[r + 14][c + 16] = '//';
		x[r + 14][c + 18] = '//';
		x[r + 14][c + 19] = '_';
		x[r + 14][c + 20] = '_';
		x[r + 14][c + 21] = '>';
		x[r + 14][c + 22] = '-';
		x[r + 14][c + 23] = '-';
		x[r + 14][c + 24] = '-';
		x[r + 14][c + 25] = '<';
		x[r + 14][c + 26] = '_';
		x[r + 14][c + 27] = '_';
		x[r + 14][c + 28] = '//';
		x[r + 14][c + 35] = '|';

		// Row 15
		x[r + 15][c] = 'o';
		x[r + 15][c + 2] = 'o';
		x[r + 15][c + 4] = '_';
		x[r + 15][c + 5] = '//';
		x[r + 15][c + 6] = '//';
		x[r + 15][c + 15] = '//';
		x[r + 15][c + 16] = '-';
		x[r + 15][c + 17] = '~';
		x[r + 15][c + 18] = '_';
		x[r + 15][c + 19] = '>';
		x[r + 15][c + 20] = '-';
		x[r + 15][c + 21] = '-';
		x[r + 15][c + 22] = '-';
		x[r + 15][c + 23] = '<';
		x[r + 15][c + 24] = '_';
		x[r + 15][c + 25] = '_';
		x[r + 15][c + 26] = '-';
		x[r + 15][c + 27] = '~';
		x[r + 15][c + 34] = '//';

		// Row 16

		x[r + 16][c] = '(';
		x[r + 16][c + 1] = '^';
		x[r + 16][c + 2] = '(';
		x[r + 16][c + 3] = '~';
		x[r + 16][c + 14] = '//';
		x[r + 16][c + 15] = '~';
		x[r + 16][c + 16] = '_';
		x[r + 16][c + 17] = '>';
		x[r + 16][c + 18] = '-';
		x[r + 16][c + 19] = '-';
		x[r + 16][c + 20] = '-';
		x[r + 16][c + 21] = '<';
		x[r + 16][c + 22] = '_';
		x[r + 16][c + 23] = '_';
		x[r + 16][c + 24] = '-';
		x[r + 16][c + 31] = '_';
		x[r + 16][c + 32] = '-';
		x[r + 16][c + 33] = '~';

		// Row 17

		x[r + 17][c + 13] = '//';
		x[r + 17][c + 14] = '_';
		x[r + 17][c + 15] = '_';
		x[r + 17][c + 16] = '>';
		x[r + 17][c + 17] = '-';
		x[r + 17][c + 18] = '-';
		x[r + 17][c + 19] = '<';
		x[r + 17][c + 20] = '_';
		x[r + 17][c + 21] = '_';
		x[r + 17][c + 22] = '//';
		x[r + 17][c + 28] = '_';
		x[r + 17][c + 29] = '-';
		x[r + 17][c + 30] = '~';

		// Row 18

		x[r + 18][c + 12] = '|';
		x[r + 18][c + 13] = '_';
		x[r + 18][c + 14] = '_';
		x[r + 18][c + 15] = '>';
		x[r + 18][c + 16] = '-';
		x[r + 18][c + 17] = '-';
		x[r + 18][c + 18] = '<';
		x[r + 18][c + 19] = '_';
		x[r + 18][c + 20] = '_';
		x[r + 18][c + 21] = '|';
		x[r + 18][c + 27] = '//';
		x[r + 18][c + 46] = '.';
		x[r + 18][c + 47] = '-';
		x[r + 18][c + 48] = '-';
		x[r + 18][c + 49] = '-';
		x[r + 18][c + 50] = '-';
		x[r + 18][c + 51] = '_';

		// Row 19
		x[r + 19][c + 12] = '|';
		x[r + 19][c + 13] = '_';
		x[r + 19][c + 14] = '_';
		x[r + 19][c + 15] = '>';
		x[r + 19][c + 16] = '-';
		x[r + 19][c + 17] = '-';
		x[r + 19][c + 18] = '<';
		x[r + 19][c + 19] = '_';
		x[r + 19][c + 20] = '_';
		x[r + 19][c + 21] = '|';
		x[r + 19][c + 26] = '|';
		x[r + 19][c + 44] = '//';
		x[r + 19][c + 45] = '"';
		x[r + 19][c + 47] = '_';
		x[r + 19][c + 48] = '-';
		x[r + 19][c + 49] = '-';
		x[r + 19][c + 50] = '-';
		x[r + 19][c + 51] = '_';
		x[r + 19][c + 52] = '~';
		x[r + 19][c + 53] = '\\';

		// Row 20
		x[r + 20][c + 12] = '|';
		x[r + 20][c + 13] = '_';
		x[r + 20][c + 14] = '_';
		x[r + 20][c + 15] = '>';
		x[r + 20][c + 16] = '-';
		x[r + 20][c + 17] = '-';
		x[r + 20][c + 18] = '<';
		x[r + 20][c + 19] = '_';
		x[r + 20][c + 20] = '_';
		x[r + 20][c + 21] = '|';
		x[r + 20][c + 26] = '|';
		x[r + 20][c + 42] = '//';
		x[r + 20][c + 43] = '"';
		x[r + 20][c + 46] = '//';
		x[r + 20][c + 52] = '~';
		x[r + 20][c + 53] = '\\';
		x[r + 20][c + 54] = '`';
		x[r + 20][c + 55] = '\\';



		// Row 21
		x[r + 21][c + 13] = '\\';
		x[r + 21][c + 14] = '_';
		x[r + 21][c + 15] = '_';
		x[r + 21][c + 16] = '>';
		x[r + 21][c + 17] = '-';
		x[r + 21][c + 18] = '-';
		x[r + 21][c + 19] = '<';
		x[r + 21][c + 20] = '_';
		x[r + 21][c + 21] = '_';
		x[r + 21][c + 22] = '\\';
		x[r + 21][c + 27] = '\\';
		x[r + 21][c + 40] = '//';
		x[r + 20][c + 41] = '"';
		x[r + 21][c + 44] = '//';
		x[r + 21][c + 45] = '//';
		x[r + 21][c + 54] = '|';
		x[r + 21][c + 55] = '|';

		// Row 22
		x[r + 22][c + 14] = '~';
		x[r + 22][c + 15] = '-';
		x[r + 22][c + 16] = '_';
		x[r + 22][c + 17] = '_';
		x[r + 22][c + 18] = '>';
		x[r + 22][c + 19] = '-';
		x[r + 22][c + 20] = '-';
		x[r + 22][c + 21] = '<';
		x[r + 22][c + 22] = '_';
		x[r + 22][c + 23] = '~';
		x[r + 22][c + 24] = '-';
		x[r + 22][c + 25] = '_';
		x[r + 22][c + 28] = '~';
		x[r + 22][c + 29] = '-';
		x[r + 22][c + 30] = '-';
		x[r + 22][c + 31] = '_';
		x[r + 22][c + 32] = '_';
		x[r + 22][c + 33] = '_';
		x[r + 22][c + 34] = '_';
		x[r + 22][c + 35] = '-';
		x[r + 22][c + 36] = '-';
		x[r + 22][c + 37] = '-';
		x[r + 22][c + 38] = '~';
		x[r + 22][c + 39] = '"';
		x[r + 22][c + 41] = '_';
		x[r + 22][c + 42] = '//';
		x[r + 22][c + 43] = '"';
		x[r + 22][c + 44] = '//';
		x[r + 22][c + 53] = '//';
		x[r + 22][c + 54] = '"';

		// Row 23
		x[r + 23][c + 17] = '~';
		x[r + 23][c + 18] = '-';
		x[r + 23][c + 19] = '_';
		x[r + 23][c + 20] = '~';
		x[r + 23][c + 21] = '>';
		x[r + 23][c + 22] = '-';
		x[r + 23][c + 23] = '-';
		x[r + 23][c + 24] = '<';
		x[r + 23][c + 25] = '_';
		x[r + 23][c + 26] = '//';
		x[r + 23][c + 27] = '-';
		x[r + 23][c + 28] = '_';
		x[r + 23][c + 29] = '_';
		x[r + 23][c + 37] = '_';
		x[r + 23][c + 38] = '_';
		x[r + 23][c + 39] = '-';
		x[r + 23][c + 40] = '~';
		x[r + 23][c + 42] = '_';
		x[r + 23][c + 43] = '//';

		// Row 24
		x[r + 24][c + 20] = '~';
		x[r + 24][c + 21] = '~';
		x[r + 24][c + 22] = '-';
		x[r + 24][c + 23] = '"';
		x[r + 24][c + 24] = '_';
		x[r + 24][c + 25] = '//';
		x[r + 24][c + 26] = '_';
		x[r + 24][c + 27] = '//';
		x[r + 24][c + 29] = '//';
		for (int i = c + 30; i < c + 37; i++)
		{
			x[r + 24][i] = '~';
		}
		x[r + 24][c + 37] = '_';
		x[r + 24][c + 38] = '_';
		x[r + 24][c + 39] = '-';
		x[r + 24][c + 40] = '-';
		x[r + 24][c + 41] = '~';
		// Row 25
		for (int i = c + 27; i < c + 37; i++)
		{
			x[r + 25][i] = '~';
		}
	}
	fldragon = 0;
}
void SetDragonFire(char x[][1000], int rF, int cF)
{
	x[rF + 17][cF - 1] = ',';
	x[rF + 17][cF] = '\\';
	x[rF + 17][cF + 1] = '|';

	// rFow 18
	x[rF + 18][cF - 4] = ',';
	x[rF + 18][cF - 3] = '\\';
	x[rF + 18][cF - 2] = '\\';
	x[rF + 18][cF - 1] = ')';
	x[rF + 18][cF] = '"';
	x[rF + 18][cF + 1] = ')';

	// rFow 19
	x[rF + 19][cF - 5] = ')';
	x[rF + 19][cF - 3] = ')';
	x[rF + 19][cF - 2] = '"';
	x[rF + 19][cF - 1] = '(';
	x[rF + 19][cF] = '(';

	// rFow 20
	x[rF + 20][cF - 8] = '`';
	x[rF + 20][cF - 7] = '-';
	x[rF + 20][cF - 6] = '(';
	x[rF + 20][cF - 5] = '(';
	x[rF + 20][cF - 3] = '(';
	x[rF + 20][cF - 2] = '(';
	x[rF + 20][cF] = ')';

	// rFow 21
	x[rF + 21][cF - 9] = ',';
	x[rF + 21][cF - 8] = '\\';
	x[rF + 21][cF - 7] = ',';
	x[rF + 21][cF - 6] = '"';
	x[rF + 21][cF - 5] = '\\';
	x[rF + 21][cF - 4] = '\\';
	x[rF + 21][cF - 3] = ')';
	x[rF + 21][cF - 1] = ')';

	// rFow 22
	x[rF + 22][cF - 11] = ',';
	x[rF + 22][cF - 10] = ')';
	x[rF + 22][cF - 8] = ')';
	x[rF + 22][cF - 6] = ')';
	x[rF + 22][cF - 5] = ')';
	x[rF + 22][cF - 4] = ')';
	x[rF + 22][cF - 3] = ',';
	x[rF + 22][cF - 1] = '(';
	x[rF + 22][cF] = '(';

	// rFow 23
	x[rF + 23][cF - 13] = '`';
	x[rF + 23][cF - 12] = '~';
	x[rF + 23][cF - 11] = '\\';
	x[rF + 23][cF - 7] = '(';
	x[rF + 23][cF - 6] = '~';
	x[rF + 23][cF - 4] = '(';
	x[rF + 23][cF - 3] = ',';
	x[rF + 23][cF - 2] = '\\';
	x[rF + 23][cF - 1] = '|';

	// rFow 24

	x[rF + 24][cF - 15] = '.';
	x[rF + 24][cF - 14] = '_';
	x[rF + 24][cF - 13] = '-';
	x[rF + 24][cF - 12] = '~';
	x[rF + 24][cF - 11] = '\\';
	x[rF + 24][cF - 10] = '\\';
	x[rF + 24][cF - 9] = ')';
	x[rF + 24][cF - 7] = '(';
	x[rF + 24][cF - 6] = '\\';
	x[rF + 24][cF - 4] = '(';
	x[rF + 24][cF - 3] = '(';
	x[rF + 24][cF - 1] = '`';

	// rFow 25
	x[rF + 25][cF - 14] = ';';
	x[rF + 25][cF - 13] = '"';
	x[rF + 25][cF - 12] = ')';
	x[rF + 25][cF - 10] = '"';
	x[rF + 25][cF - 9] = '(';
	x[rF + 25][cF - 8] = '\\';
	x[rF + 25][cF - 6] = ',';
	x[rF + 25][cF - 5] = '(';
	x[rF + 25][cF - 4] = ')';

	// rFow 26

	x[rF + 26][cF - 15] = '"';
	x[rF + 26][cF - 13] = '"';
	x[rF + 26][cF - 12] = '(';
	x[rF + 26][cF - 10] = '"';
	x[rF + 26][cF - 9] = ')';
	x[rF + 26][cF - 7] = ')';
	x[rF + 26][cF - 6] = '\\';

	x[rF + 27][cF - 13] = '"';
	x[rF + 27][cF - 9] = '"';
	x[rF + 26][cF - 6] = '`';
}
void gymheal(char X[][1000], int rheal, int cheal)
{
	X[rheal][cheal + 2] = '|';
	X[rheal][cheal + 3] = '|';
	X[rheal][cheal + 4] = '|';
	X[rheal][cheal + 5] = '|';

	X[rheal - 1][cheal] = '(';
	X[rheal - 1][cheal + 1] = '_';
	X[rheal - 1][cheal + 2] = '^';
	X[rheal - 1][cheal + 3] = '.';
	X[rheal - 1][cheal + 4] = '.';
	X[rheal - 1][cheal + 5] = '^';
	X[rheal - 1][cheal + 6] = '_';
	X[rheal - 1][cheal + 7] = ')';

	X[rheal - 2][cheal + 2] = '-';
	X[rheal - 2][cheal + 3] = '~';
	X[rheal - 2][cheal + 4] = '~';
	X[rheal - 2][cheal + 5] = '-';
}
void tmnt(char x[][1000], int rtmnt, int ctmnt)
{
	// row 1 * Start from floor *
	x[rtmnt][ctmnt] = '|';
	x[rtmnt][ctmnt + 1] = '_';
	x[rtmnt][ctmnt + 2] = '_';
	x[rtmnt][ctmnt + 3] = '_';
	x[rtmnt][ctmnt + 4] = '_';
	x[rtmnt][ctmnt + 5] = '_';
	x[rtmnt][ctmnt + 6] = '_';
	x[rtmnt][ctmnt + 7] = '|';
	x[rtmnt][ctmnt + 8] = '-';
	x[rtmnt][ctmnt + 9] = '-';
	x[rtmnt][ctmnt + 10] = '-';
	x[rtmnt][ctmnt + 11] = '-';
	x[rtmnt][ctmnt + 12] = '-';
	x[rtmnt][ctmnt + 13] = '-';
	x[rtmnt][ctmnt + 14] = '-';
	x[rtmnt][ctmnt + 15] = '-';
	x[rtmnt][ctmnt + 16] = '-';
	x[rtmnt][ctmnt + 17] = '-';

	//row 2
	x[rtmnt - 1][ctmnt] = '|';
	x[rtmnt - 1][ctmnt + 2] = 'T';
	x[rtmnt - 1][ctmnt + 3] = 'M';
	x[rtmnt - 1][ctmnt + 4] = 'N';
	x[rtmnt - 1][ctmnt + 5] = 'T';
	x[rtmnt - 1][ctmnt + 7] = '|';
	x[rtmnt - 1][ctmnt + 8] = '_';
	x[rtmnt - 1][ctmnt + 9] = '_';
	x[rtmnt - 1][ctmnt + 10] = '_';
	x[rtmnt - 1][ctmnt + 11] = '_';
	x[rtmnt - 1][ctmnt + 12] = '_';
	x[rtmnt - 1][ctmnt + 13] = '_';
	x[rtmnt - 1][ctmnt + 14] = '_';
	x[rtmnt - 1][ctmnt + 15] = '_';
	x[rtmnt - 1][ctmnt + 16] = '_';
	x[rtmnt - 1][ctmnt + 17] = '_';

	// row 3
	x[rtmnt - 2][ctmnt] = '|';
	x[rtmnt - 2][ctmnt + 7] = '|';

	// row 4
	x[rtmnt - 3][ctmnt + 1] = '_';
	x[rtmnt - 3][ctmnt + 2] = ',';
	x[rtmnt - 3][ctmnt + 3] = 'H';
	x[rtmnt - 3][ctmnt + 4] = '_';
	x[rtmnt - 3][ctmnt + 5] = '_';

	// row 5
	x[rtmnt - 4][ctmnt] = 'c';
	x[rtmnt - 4][ctmnt + 1] = '=';
	x[rtmnt - 4][ctmnt + 2] = '=';
	x[rtmnt - 4][ctmnt + 3] = '=';
	x[rtmnt - 4][ctmnt + 4] = '=';
	x[rtmnt - 4][ctmnt + 5] = '=';
	x[rtmnt - 4][ctmnt + 6] = 'e';


}
void rocket(char x[][1000], int rrock, int crock)
{
	// row 1 * starting from down *
	x[rrock][crock] = '|';
	x[rrock][crock + 1] = '/';
	x[rrock][crock + 2] = '*';
	x[rrock][crock + 3] = '*';
	x[rrock][crock + 4] = '\\';
	x[rrock][crock + 5] = '|';

	//row 2
	x[rrock - 1][crock] = '/';
	x[rrock - 1][crock + 2] = '=';
	x[rrock - 1][crock + 3] = '=';
	x[rrock - 1][crock + 5] = '\\';

	// row 3
	x[rrock - 2][crock + 1] = '|';
	x[rrock - 2][crock + 4] = '|';

	// row 4
	x[rrock - 3][crock + 1] = '|';
	x[rrock - 3][crock + 4] = '|';

	// row 5
	x[rrock - 4][crock + 1] = '/';
	x[rrock - 4][crock + 4] = '\\';

	// row 6
	x[rrock - 5][crock + 2] = '/';
	x[rrock - 5][crock + 3] = '\\';
}
void popexplode(char X[][1000], int rexp, int cexp)
{
	X[rexp][cexp + 1] = '_';
	X[rexp][cexp + 2] = '_';
	X[rexp][cexp + 3] = '_';
	X[rexp][cexp + 4] = '_';
	X[rexp][cexp + 5] = '_';
	X[rexp][cexp + 6] = '_';
	X[rexp][cexp + 7] = '_';
	X[rexp][cexp + 8] = '_';
	X[rexp][cexp + 9] = '_';
	X[rexp][cexp + 10] = '_';
	X[rexp + 1][cexp] = '|';
	X[rexp + 1][cexp + 2] = 'P';
	X[rexp + 1][cexp + 3] = 'R';
	X[rexp + 1][cexp + 4] = 'E';
	X[rexp + 1][cexp + 5] = 'S';
	X[rexp + 1][cexp + 6] = 'S';
	X[rexp + 1][cexp + 9] = 'P';
	X[rexp + 1][cexp + 11] = '|';
	X[rexp + 2][cexp] = '|';
	X[rexp + 2][cexp + 4] = 'T';
	X[rexp + 2][cexp + 5] = 'O';
	X[rexp + 2][cexp + 11] = '|';
	X[rexp + 3][cexp] = '|';
	X[rexp + 3][cexp + 2] = 'L';
	X[rexp + 3][cexp + 3] = 'A';
	X[rexp + 3][cexp + 4] = 'U';
	X[rexp + 3][cexp + 5] = 'N';
	X[rexp + 3][cexp + 6] = 'C';
	X[rexp + 3][cexp + 7] = 'H';
	X[rexp + 3][cexp + 11] = '|';
	X[rexp + 4][cexp] = '|';
	X[rexp + 4][cexp + 1] = '_';
	X[rexp + 4][cexp + 2] = '_';
	X[rexp + 4][cexp + 3] = '_';
	X[rexp + 4][cexp + 4] = '_';
	X[rexp + 4][cexp + 5] = '_';
	X[rexp + 4][cexp + 6] = '_';
	X[rexp + 4][cexp + 7] = '_';
	X[rexp + 4][cexp + 8] = '_';
	X[rexp + 4][cexp + 9] = '_';
	X[rexp + 4][cexp + 10] = '_';
	X[rexp + 4][cexp + 11] = '|';
}
void moverocket(char X[][1000], int& rrock, int& crock)
{
	if (X[rrock - 1][crock] = ' ')
	{
		rrock--;
	}
}
void multibullet(char X[][1000], int& rH, int& cH, int M[][2], char chbu, int& rr)
{
	X[M[rr][0]][M[rr][1]] = '>';

}
void movemulti(char X[][1000], int& cH, int& rH, int M[][2], char& chbu, int& rr, int& var2)
{
	if (X[M[rr][0]][M[rr][1] + 1] == ' ')
	{
		M[rr][1]++;
	}
	else
		var2++;
}
void plane1(char x[][1000], int rplane, int cplane, int& moveplane)
{
	// row 0 * starting from up *
	x[rplane][cplane + 4] = '-';
	x[rplane][cplane + 5] = '-';
	x[rplane][cplane + 6] = '-';
	x[rplane][cplane + 7] = '-';
	x[rplane][cplane + 8] = '-';
	x[rplane][cplane + 9] = '|';
	x[rplane][cplane + 10] = '-';
	x[rplane][cplane + 11] = '-';
	x[rplane][cplane + 12] = '-';
	x[rplane][cplane + 13] = '-';
	x[rplane][cplane + 14] = '-';

	// row 1
	x[rplane + 1][cplane] = '*';
	x[rplane + 1][cplane + 1] = '>';
	x[rplane + 1][cplane + 2] = '=';
	x[rplane + 1][cplane + 3] = '=';
	x[rplane + 1][cplane + 4] = '=';
	x[rplane + 1][cplane + 5] = '=';
	x[rplane + 1][cplane + 6] = '=';
	x[rplane + 1][cplane + 7] = '[';
	x[rplane + 1][cplane + 8] = '_';
	x[rplane + 1][cplane + 9] = ']';
	x[rplane + 1][cplane + 10] = 'L';
	x[rplane + 1][cplane + 11] = ')';

	//row 2
	x[rplane + 2][cplane + 7] = '-';
	x[rplane + 2][cplane + 8] = '`';
	x[rplane + 2][cplane + 9] = '-';
	x[rplane + 2][cplane + 10] = '`';
	x[rplane + 2][cplane + 11] = '-';

	moveplane = 1;

}
void plane2(char x[][1000], int rplane, int cplane, int& moveplane)
{
	// row 0 * starting from up *
	x[rplane][cplane + 4] = '-';
	x[rplane][cplane + 5] = '-';
	x[rplane][cplane + 6] = '-';
	x[rplane][cplane + 7] = '-';
	x[rplane][cplane + 8] = '-';
	x[rplane][cplane + 9] = '|';
	x[rplane][cplane + 10] = '-';
	x[rplane][cplane + 11] = '-';
	x[rplane][cplane + 12] = '-';
	x[rplane][cplane + 13] = '-';
	x[rplane][cplane + 14] = '-';

	// row 1
	x[rplane + 1][cplane] = '*';
	x[rplane + 1][cplane + 1] = '>';
	x[rplane + 1][cplane + 2] = '=';
	x[rplane + 1][cplane + 3] = '=';
	x[rplane + 1][cplane + 4] = '=';
	x[rplane + 1][cplane + 5] = '=';
	x[rplane + 1][cplane + 6] = '=';
	x[rplane + 1][cplane + 7] = '[';
	x[rplane + 1][cplane + 8] = '_';
	x[rplane + 1][cplane + 9] = ']';
	x[rplane + 1][cplane + 10] = 'L';
	x[rplane + 1][cplane + 11] = ')';

	//row 2
	x[rplane + 2][cplane + 7] = '-';
	x[rplane + 2][cplane + 8] = '`';
	x[rplane + 2][cplane + 9] = '-';
	x[rplane + 2][cplane + 10] = '`';
	x[rplane + 2][cplane + 11] = '-';
}
void key(char x[][1000], int rkey, int ckey)
{
	x[rkey][ckey + 2] = '-';

	x[rkey - 1][ckey + 1] = '<';
	x[rkey - 1][ckey + 2] = '|';

	x[rkey - 2][ckey + 1] = '<';
	x[rkey - 2][ckey + 2] = '|';

	x[rkey - 3][ckey + 1] = '<';
	x[rkey - 3][ckey + 2] = '|';

	x[rkey - 4][ckey] = '\\';
	x[rkey - 4][ckey + 1] = '_';
	x[rkey - 4][ckey + 2] = '_';
	x[rkey - 4][ckey + 3] = '/';

	x[rkey - 5][ckey] = '/';
	x[rkey - 5][ckey + 2] = 'o';
	x[rkey - 5][ckey + 3] = '\\';

	x[rkey - 6][ckey + 1] = '_';
	x[rkey - 6][ckey + 2] = '_';

}
void movekey(char x[][1000], int& rkey, int ckey)
{
	if (x[rkey + 1][ckey + 3] == ' ')
	{
		rkey += 2;
	}
}
void lance(char x[][1000], int rlance, int clance)
{
	x[rlance][clance] = '|';
	x[rlance - 1][clance] = '|';
	x[rlance - 2][clance] = '|';
	x[rlance - 3][clance] = '^';

}
void enemybowling1(char x[][1000], int rebowl, int cebowl, int& drawbowling)
{
	// row 0 * started from bottom
	x[rebowl][cebowl + 1] = '/';
	x[rebowl][cebowl + 2] = '|';

	// row 1
	x[rebowl - 1][cebowl] = '/';
	x[rebowl - 1][cebowl + 2] = '\\';
	x[rebowl - 1][cebowl + 4] = '`';
	x[rebowl - 1][cebowl + 5] = 'O';

	// row 2
	x[rebowl - 2][cebowl + 1] = '0';
	x[rebowl - 2][cebowl + 2] = '_';

	drawbowling = 2;
}
void enemybowling2(char x[][1000], int rebowl, int cebowl, int& drawbowling)
{
	// row 0 * started from bottom

	x[rebowl][cebowl + 1] = '/';
	x[rebowl][cebowl + 2] = '|';

	// row 1
	x[rebowl - 1][cebowl] = '/';
	x[rebowl - 1][cebowl + 2] = '\\';

	// row 2
	x[rebowl - 2][cebowl + 1] = '0';
	x[rebowl - 2][cebowl + 2] = '_';

	drawbowling = 3;

}
void bowlingball(char x[][1000], int rball, int& cball)
{
	x[rball][cball] = 'O';
}
void moveball(char x[][1000], int& rball, int& cball)
{
	if (x[rball][cball - 1] == ' ')
	{
		cball--;
	}

	if (x[rball + 1][cball] == ' ')
	{
		rball++;
	}

}
void enemy_dragon1(char x[][1000], int rendrag1, int cendrag1)
{
	// dragon -1
	x[rendrag1 - 1][cendrag1 + 12] = '_';
	x[rendrag1 - 1][cendrag1 + 14] = '_';

	// dragon 0
	x[rendrag1][cendrag1] = '_';
	x[rendrag1][cendrag1 + 10] = '//';
	x[rendrag1][cendrag1 + 11] = '//';
	x[rendrag1][cendrag1 + 12] = '`';
	x[rendrag1][cendrag1 + 14] = '`';
	x[rendrag1][cendrag1 + 15] = '\\';

	// dragon 1
	x[rendrag1 + 1][cendrag1 - 4] = '_';
	x[rendrag1 + 1][cendrag1 - 3] = ',';
	x[rendrag1 + 1][cendrag1 - 2] = '-';
	x[rendrag1 + 1][cendrag1 - 1] = '"';
	x[rendrag1 + 1][cendrag1] = '\\';
	x[rendrag1 + 1][cendrag1 + 1] = '%';
	x[rendrag1 + 1][cendrag1 + 4] = 254;
	x[rendrag1 + 1][cendrag1 + 10] = '//';
	x[rendrag1 + 1][cendrag1 + 11] = '//';
	x[rendrag1 + 1][cendrag1 + 13] = '//';
	x[rendrag1 + 1][cendrag1 + 14] = '`';
	x[rendrag1 + 1][cendrag1 + 15] = '`';
	x[rendrag1 + 1][cendrag1 + 16] = '\\';
	x[rendrag1 + 1][cendrag1 + 17] = '`';
	x[rendrag1 + 1][cendrag1 + 18] = '\\';

	// dragon 2
	x[rendrag1 + 2][cendrag1 - 5] = '>';
	x[rendrag1 + 2][cendrag1 - 4] = '_';
	x[rendrag1 + 2][cendrag1 - 3] = '_';
	x[rendrag1 + 2][cendrag1 - 2] = '^';
	x[rendrag1 + 2][cendrag1 + 1] = '|';
	x[rendrag1 + 2][cendrag1 + 2] = '%';
	x[rendrag1 + 2][cendrag1 + 3] = '_';
	x[rendrag1 + 2][cendrag1 + 4] = 'O';
	x[rendrag1 + 2][cendrag1 + 7] = '//';
	x[rendrag1 + 2][cendrag1 + 8] = '//';
	x[rendrag1 + 2][cendrag1 + 10] = '//';
	x[rendrag1 + 2][cendrag1 + 14] = '}';
	x[rendrag1 + 2][cendrag1 + 16] = '`';
	x[rendrag1 + 2][cendrag1 + 17] = '\\';
	x[rendrag1 + 2][cendrag1 + 18] = '`';
	x[rendrag1 + 2][cendrag1 + 19] = '\\';

	// dragon 3
	x[rendrag1 + 3][cendrag1 - 2] = ')';
	x[rendrag1 + 3][cendrag1 + 1] = ')';
	x[rendrag1 + 3][cendrag1 + 2] = '%';
	x[rendrag1 + 3][cendrag1 + 4] = '|';
	x[rendrag1 + 3][cendrag1 + 6] = '//';
	x[rendrag1 + 3][cendrag1 + 7] = '//';
	x[rendrag1 + 3][cendrag1 + 9] = '//';
	x[rendrag1 + 3][cendrag1 + 11] = '}';
	x[rendrag1 + 3][cendrag1 + 15] = '}';
	x[rendrag1 + 3][cendrag1 + 17] = '}';
	x[rendrag1 + 3][cendrag1 + 18] = '`';
	x[rendrag1 + 3][cendrag1 + 19] = '\\';
	x[rendrag1 + 3][cendrag1 + 20] = '`';
	x[rendrag1 + 3][cendrag1 + 21] = '\\';

	// dragon 4
	x[rendrag1 + 4][cendrag1 - 3] = '/';
	x[rendrag1 + 4][cendrag1] = '(';
	x[rendrag1 + 4][cendrag1 + 1] = '%';
	x[rendrag1 + 4][cendrag1 + 2] = '_';
	x[rendrag1 + 4][cendrag1 + 3] = '_';
	x[rendrag1 + 4][cendrag1 + 4] = '//';
	x[rendrag1 + 4][cendrag1 + 5] = '_';
	x[rendrag1 + 4][cendrag1 + 6] = '//';
	x[rendrag1 + 4][cendrag1 + 7] = '`';
	x[rendrag1 + 4][cendrag1 + 8] = '//';
	x[rendrag1 + 4][cendrag1 + 9] = '.';
	x[rendrag1 + 4][cendrag1 + 10] = '\\';
	x[rendrag1 + 4][cendrag1 + 11] = '_';
	x[rendrag1 + 4][cendrag1 + 12] = '//';
	x[rendrag1 + 4][cendrag1 + 13] = '\\';
	x[rendrag1 + 4][cendrag1 + 14] = '_';
	x[rendrag1 + 4][cendrag1 + 15] = '//';
	x[rendrag1 + 4][cendrag1 + 16] = '\\';
	x[rendrag1 + 4][cendrag1 + 17] = '_';
	x[rendrag1 + 4][cendrag1 + 18] = '//';
	x[rendrag1 + 4][cendrag1 + 19] = '\\';
	x[rendrag1 + 4][cendrag1 + 20] = '`';
	x[rendrag1 + 4][cendrag1 + 21] = '//';
	x[rendrag1 + 4][cendrag1 + 13] = '\\';

	// rendrag1ow 5
	x[rendrag1 + 5][cendrag1 - 4] = '(';
	x[rendrag1 + 5][cendrag1 + 1] = '`';
	x[rendrag1 + 5][cendrag1 + 4] = '|';
	x[rendrag1 + 5][cendrag1 + 12] = '`';
	x[rendrag1 + 5][cendrag1 + 13] = '-';
	x[rendrag1 + 5][cendrag1 + 14] = '.';

	// dragon 6
	x[rendrag1 + 6][cendrag1 - 3] = '\\';
	x[rendrag1 + 6][cendrag1 + 1] = ',';
	x[rendrag1 + 6][cendrag1 + 7] = '(';
	x[rendrag1 + 6][cendrag1 + 10] = '\\';
	x[rendrag1 + 6][cendrag1 + 14] = '_';
	x[rendrag1 + 6][cendrag1 + 15] = '`';
	x[rendrag1 + 6][cendrag1 + 16] = '-';
	x[rendrag1 + 6][cendrag1 + 17] = '.';
	x[rendrag1 + 6][cendrag1 + 18] = '_';
	x[rendrag1 + 6][cendrag1 + 19] = '_';
	x[rendrag1 + 6][cendrag1 + 20] = '.';
	x[rendrag1 + 6][cendrag1 + 21] = '-';
	x[rendrag1 + 6][cendrag1 + 22] = ';';
	x[rendrag1 + 6][cendrag1 + 23] = '%';
	x[rendrag1 + 6][cendrag1 + 24] = '>';

	// dragon 7
	x[rendrag1 + 7][cendrag1 - 4] = '//';
	x[rendrag1 + 7][cendrag1 - 3] = '_';
	x[rendrag1 + 7][cendrag1 - 2] = '`';
	x[rendrag1 + 7][cendrag1 - 1] = '\\';
	x[rendrag1 + 7][cendrag1 + 1] = '\\';
	x[rendrag1 + 7][cendrag1 + 8] = '`';
	x[rendrag1 + 7][cendrag1 + 9] = '\\';
	x[rendrag1 + 7][cendrag1 + 11] = '\\';
	x[rendrag1 + 7][cendrag1 + 12] = '.';
	x[rendrag1 + 7][cendrag1 + 13] = '"';
	x[rendrag1 + 7][cendrag1 + 15] = '`';
	x[rendrag1 + 7][cendrag1 + 16] = '-';
	x[rendrag1 + 7][cendrag1 + 17] = '.';
	x[rendrag1 + 7][cendrag1 + 18] = '.';
	x[rendrag1 + 7][cendrag1 + 19] = '-';
	x[rendrag1 + 7][cendrag1 + 20] = '`';
	x[rendrag1 + 7][cendrag1 + 21] = '`';

	// dragon 8
	x[rendrag1 + 8][cendrag1 - 5] = '`';
	x[rendrag1 + 8][cendrag1 - 4] = '`';
	x[rendrag1 + 8][cendrag1 - 3] = '`';
	x[rendrag1 + 8][cendrag1 - 1] = '//';
	x[rendrag1 + 8][cendrag1] = '_';
	x[rendrag1 + 8][cendrag1 + 1] = '//';
	x[rendrag1 + 8][cendrag1 + 2] = '`';
	x[rendrag1 + 8][cendrag1 + 3] = '"';
	x[rendrag1 + 8][cendrag1 + 4] = '-';
	x[rendrag1 + 8][cendrag1 + 5] = '=';
	x[rendrag1 + 8][cendrag1 + 6] = '-';
	x[rendrag1 + 8][cendrag1 + 7] = '`';
	x[rendrag1 + 8][cendrag1 + 8] = '`';
	x[rendrag1 + 8][cendrag1 + 9] = '//';
	x[rendrag1 + 8][cendrag1 + 10] = '_';
	x[rendrag1 + 8][cendrag1 + 11] = '//';


	// dragon 9
	x[rendrag1 + 9][cendrag1 - 1] = '`';
	x[rendrag1 + 9][cendrag1] = '`';
	x[rendrag1 + 9][cendrag1 + 1] = '`';
	x[rendrag1 + 9][cendrag1 + 9] = '`';
	x[rendrag1 + 9][cendrag1 + 10] = '`';
	x[rendrag1 + 9][cendrag1 + 11] = '`';


}
void enemy_dragon2(char x[][1000], int rendrag2, int cendrag2)
{
	// row 0 start from up
	x[rendrag2][cendrag2 + 5] = '_';

	//row 1
	x[rendrag2 + 1][cendrag2 + 1] = '_';
	x[rendrag2 + 1][cendrag2 + 2] = ',';
	x[rendrag2 + 1][cendrag2 + 3] = '-';
	x[rendrag2 + 1][cendrag2 + 4] = '"';
	x[rendrag2 + 1][cendrag2 + 5] = '\\';
	x[rendrag2 + 1][cendrag2 + 6] = '%';
	x[rendrag2 + 1][cendrag2 + 10] = 254;

	//row 2
	x[rendrag2 + 2][cendrag2 + 1] = '>';
	x[rendrag2 + 2][cendrag2 + 2] = '_';
	x[rendrag2 + 2][cendrag2 + 3] = '_';
	x[rendrag2 + 2][cendrag2 + 4] = '^';
	x[rendrag2 + 2][cendrag2 + 7] = '|';
	x[rendrag2 + 2][cendrag2 + 8] = '%';
	x[rendrag2 + 2][cendrag2 + 9] = '_';
	x[rendrag2 + 2][cendrag2 + 10] = 'o';

	//row 3
	x[rendrag2 + 3][cendrag2 + 3] = ')';
	x[rendrag2 + 3][cendrag2 + 6] = ')';
	x[rendrag2 + 3][cendrag2 + 7] = '%';
	x[rendrag2 + 3][cendrag2 + 10] = '|';

	//row 4
	x[rendrag2 + 4][cendrag2 + 2] = '/';
	x[rendrag2 + 4][cendrag2 + 5] = '(';
	x[rendrag2 + 4][cendrag2 + 6] = '%';
	x[rendrag2 + 4][cendrag2 + 7] = '_';
	x[rendrag2 + 4][cendrag2 + 8] = '_';
	x[rendrag2 + 4][cendrag2 + 9] = '/';
	x[rendrag2 + 4][cendrag2 + 10] = '_';
	x[rendrag2 + 4][cendrag2 + 11] = '_';
	x[rendrag2 + 4][cendrag2 + 12] = '_';
	x[rendrag2 + 4][cendrag2 + 13] = '_';
	x[rendrag2 + 4][cendrag2 + 14] = '_';
	x[rendrag2 + 4][cendrag2 + 15] = '_';
	x[rendrag2 + 4][cendrag2 + 16] = '_';

	//row 5
	x[rendrag2 + 5][cendrag2 + 1] = '(';
	x[rendrag2 + 5][cendrag2 + 6] = '`';
	x[rendrag2 + 5][cendrag2 + 9] = '|';
	x[rendrag2 + 5][cendrag2 + 17] = '`';
	x[rendrag2 + 5][cendrag2 + 18] = '-';
	x[rendrag2 + 5][cendrag2 + 19] = '.';
	x[rendrag2 + 5][cendrag2 + 20] = '_';

	//row 6
	x[rendrag2 + 6][cendrag2 + 2] = '\\';
	x[rendrag2 + 6][cendrag2 + 6] = ',';
	x[rendrag2 + 6][cendrag2 + 12] = '(';
	x[rendrag2 + 6][cendrag2 + 15] = '\\';
	x[rendrag2 + 6][cendrag2 + 19] = '_';
	x[rendrag2 + 6][cendrag2 + 20] = '`';
	x[rendrag2 + 6][cendrag2 + 21] = '-';
	x[rendrag2 + 6][cendrag2 + 22] = '.';
	x[rendrag2 + 6][cendrag2 + 23] = '_';
	x[rendrag2 + 6][cendrag2 + 24] = '_';
	x[rendrag2 + 6][cendrag2 + 25] = '.';
	x[rendrag2 + 6][cendrag2 + 26] = '-';
	x[rendrag2 + 6][cendrag2 + 27] = ';';
	x[rendrag2 + 6][cendrag2 + 28] = '%';
	x[rendrag2 + 6][cendrag2 + 29] = '>';

	// row 7
	x[rendrag2 + 7][cendrag2 + 1] = '/';
	x[rendrag2 + 7][cendrag2 + 2] = '_';
	x[rendrag2 + 7][cendrag2 + 3] = '`';
	x[rendrag2 + 7][cendrag2 + 4] = '\\';
	x[rendrag2 + 7][cendrag2 + 6] = '\\';
	x[rendrag2 + 7][cendrag2 + 13] = '`';
	x[rendrag2 + 7][cendrag2 + 14] = '\\';
	x[rendrag2 + 7][cendrag2 + 16] = '\\';
	x[rendrag2 + 7][cendrag2 + 17] = '.';
	x[rendrag2 + 7][cendrag2 + 18] = '"';
	x[rendrag2 + 7][cendrag2 + 20] = '`';
	x[rendrag2 + 7][cendrag2 + 21] = '-';
	x[rendrag2 + 7][cendrag2 + 22] = '.';
	x[rendrag2 + 7][cendrag2 + 23] = '.';
	x[rendrag2 + 7][cendrag2 + 24] = '-';
	x[rendrag2 + 7][cendrag2 + 25] = '`';
	x[rendrag2 + 7][cendrag2 + 26] = '`';

	// row 8
	x[rendrag2 + 8][cendrag2 + 1] = '`';
	x[rendrag2 + 8][cendrag2 + 2] = '`';
	x[rendrag2 + 8][cendrag2 + 3] = '`';
	x[rendrag2 + 8][cendrag2 + 5] = '/';
	x[rendrag2 + 8][cendrag2 + 6] = '_';
	x[rendrag2 + 8][cendrag2 + 7] = '/';
	x[rendrag2 + 8][cendrag2 + 8] = '`';
	x[rendrag2 + 8][cendrag2 + 9] = '"';
	x[rendrag2 + 8][cendrag2 + 10] = '-';
	x[rendrag2 + 8][cendrag2 + 11] = '=';
	x[rendrag2 + 8][cendrag2 + 12] = '-';
	x[rendrag2 + 8][cendrag2 + 13] = '`';
	x[rendrag2 + 8][cendrag2 + 14] = '`';
	x[rendrag2 + 8][cendrag2 + 15] = '/';
	x[rendrag2 + 8][cendrag2 + 16] = '_';
	x[rendrag2 + 8][cendrag2 + 17] = '/';

	//row 9
	x[rendrag2 + 9][cendrag2 + 5] = '`';
	x[rendrag2 + 9][cendrag2 + 6] = '`';
	x[rendrag2 + 9][cendrag2 + 7] = '`';

	x[rendrag2 + 9][cendrag2 + 15] = '`';
	x[rendrag2 + 9][cendrag2 + 16] = '`';
	x[rendrag2 + 9][cendrag2 + 17] = '`';


}
void SetFloorDragon(char X[][1000], int rDr, int cDr)
{
	//Row 1
	X[rDr][cDr] = '.';
	X[rDr][cDr + 1] = '-';
	X[rDr][cDr + 2] = '-';
	X[rDr][cDr + 3] = '-';
	X[rDr][cDr + 4] = '-';

	//Row 2
	X[rDr + 1][cDr - 2] = '.';
	X[rDr + 1][cDr - 1] = '"';
	X[rDr + 1][cDr + 7] = '"';
	X[rDr + 1][cDr + 8] = '.';

	//Row 3
	X[rDr + 2][cDr - 3] = '|';
	X[rDr + 2][cDr + 9] = ':';

	//Row 4
	X[rDr + 3][cDr - 3] = '"';
	X[rDr + 3][cDr + 9] = '|';

	//Row 5
	X[rDr + 4][cDr - 3] = '|';
	X[rDr + 4][cDr + 9] = '|';

	//Row 6
	X[rDr + 5][cDr - 3] = '.';
	X[rDr + 5][cDr + 9] = '.';

	//Row 7
	X[rDr + 6][cDr - 3] = '|';
	X[rDr + 6][cDr + 9] = '|';

	//Row 8
	X[rDr + 7][cDr - 2] = '\\';
	X[rDr + 7][cDr + 8] = '/';

	//Row 9
	X[rDr + 8][cDr - 1] = '"';
	X[rDr + 8][cDr] = '-';
	X[rDr + 8][cDr + 1] = '.';
	X[rDr + 8][cDr + 2] = '_';
	X[rDr + 8][cDr + 3] = '_';
	X[rDr + 8][cDr + 4] = '_';
	X[rDr + 8][cDr + 5] = '.';
	X[rDr + 8][cDr + 6] = '-';
	X[rDr + 8][cDr + 7] = '"';
}
void SetFloorDragon2(char X[][1000], int rDrH, int cDrH)
{
	//Row 1
	X[rDrH][cDrH] = '.';
	X[rDrH][cDrH + 1] = '-';
	X[rDrH][cDrH + 2] = '-';
	X[rDrH][cDrH + 3] = '-';
	X[rDrH][cDrH + 4] = '-';
	X[rDrH][cDrH + 5] = '.';

	//Row 2
	X[rDrH + 1][cDrH - 2] = '.';
	X[rDrH + 1][cDrH - 1] = '"';
	X[rDrH + 1][cDrH + 2] = '\\';
	X[rDrH + 1][cDrH + 3] = '_';
	X[rDrH + 1][cDrH + 4] = '_';
	X[rDrH + 1][cDrH + 6] = '"';
	X[rDrH + 1][cDrH + 7] = '.';

	//Row 3
	X[rDrH + 2][cDrH - 3] = '|';
	X[rDrH + 2][cDrH + 1] = '_';
	X[rDrH + 2][cDrH + 2] = '_';
	X[rDrH + 2][cDrH + 3] = '|';
	X[rDrH + 2][cDrH + 5] = '_';
	X[rDrH + 2][cDrH + 7] = ':';

	//Row4
	X[rDrH + 3][cDrH - 3] = 'v';
	X[rDrH + 3][cDrH - 2] = '\\';
	X[rDrH + 3][cDrH - 1] = '/';
	X[rDrH + 3][cDrH] = '(';
	X[rDrH + 3][cDrH + 1] = '0';
	X[rDrH + 3][cDrH + 2] = 'I';
	X[rDrH + 3][cDrH + 3] = '0';
	X[rDrH + 3][cDrH + 4] = '\\';
	X[rDrH + 3][cDrH + 5] = '/';
	X[rDrH + 3][cDrH + 7] = '|';
	X[rDrH + 3][cDrH + 8] = '/';

	//Row5
	X[rDrH + 4][cDrH] = '\\';
	X[rDrH + 4][cDrH + 2] = ':';
	X[rDrH + 4][cDrH + 4] = '/';
	X[rDrH + 4][cDrH + 7] = '"';

	//Row6
	X[rDrH + 5][cDrH] = '(';
	X[rDrH + 5][cDrH + 1] = 'o';
	X[rDrH + 5][cDrH + 2] = 'Y';
	X[rDrH + 5][cDrH + 3] = 'o';
	X[rDrH + 5][cDrH + 4] = ')';

	//Row7
	X[rDrH + 6][cDrH - 3] = ':';
	X[rDrH + 6][cDrH - 2] = '/';
	X[rDrH + 6][cDrH - 1] = '\\';
	X[rDrH + 6][cDrH] = '_';
	X[rDrH + 6][cDrH + 1] = '/';
	X[rDrH + 6][cDrH + 2] = '\\';
	X[rDrH + 6][cDrH + 3] = '_';
	X[rDrH + 6][cDrH + 4] = '/';
	X[rDrH + 6][cDrH + 5] = '\\';
	X[rDrH + 6][cDrH + 6] = '_';
	X[rDrH + 6][cDrH + 7] = '/';
	X[rDrH + 6][cDrH + 8] = '\\';

	//Row8
	X[rDrH + 6][cDrH - 2] = '\\';
	X[rDrH + 6][cDrH + 2] = '-';
	X[rDrH + 6][cDrH + 3] = '"';
	X[rDrH + 6][cDrH + 8] = '/';

	//Row9
	X[rDrH + 7][cDrH - 1] = '"';
	X[rDrH + 7][cDrH] = '-';
	X[rDrH + 7][cDrH + 1] = '.';
	X[rDrH + 7][cDrH + 2] = '_';
	X[rDrH + 7][cDrH + 3] = '_';
	X[rDrH + 7][cDrH + 4] = '_';
	X[rDrH + 7][cDrH + 5] = '.';
	X[rDrH + 7][cDrH + 6] = '-';
	X[rDrH + 7][cDrH + 7] = '"';

}
void SetFloorDragon3(char X[][1000], int rDrF, int cDrF)
{
	//Row1
	X[rDrF][cDrF] = '_';
	X[rDrF][cDrF + 1] = '_';
	X[rDrF][cDrF + 2] = '_';
	X[rDrF][cDrF + 9] = ',';

	//Row2
	X[rDrF + 1][cDrF - 5] = '.';
	X[rDrF + 1][cDrF - 4] = '.';
	X[rDrF + 1][cDrF - 3] = '-';
	X[rDrF + 1][cDrF - 2] = '"';
	X[rDrF + 1][cDrF - 1] = '"';
	X[rDrF + 1][cDrF + 3] = '"';
	X[rDrF + 1][cDrF + 4] = '"';
	X[rDrF + 1][cDrF + 5] = '-';
	X[rDrF + 1][cDrF + 6] = '.';
	X[rDrF + 1][cDrF + 7] = '_';
	X[rDrF + 1][cDrF + 8] = '_';
	X[rDrF + 1][cDrF + 9] = '_';
	X[rDrF + 1][cDrF + 10] = '|';
	X[rDrF + 1][cDrF + 11] = '\\';
	X[rDrF + 1][cDrF + 12] = '_';
	X[rDrF + 1][cDrF + 13] = '_';

	//Row3
	X[rDrF + 2][cDrF - 12] = '_';
	X[rDrF + 2][cDrF - 11] = '.';
	X[rDrF + 2][cDrF - 10] = '-';
	X[rDrF + 2][cDrF - 9] = '-';
	X[rDrF + 2][cDrF - 8] = '"';
	X[rDrF + 2][cDrF - 7] = '"';
	X[rDrF + 2][cDrF - 6] = '"';
	X[rDrF + 2][cDrF - 1] = '"';
	X[rDrF + 2][cDrF] = ')';
	X[rDrF + 2][cDrF + 1] = '_';
	X[rDrF + 2][cDrF + 2] = '_';
	X[rDrF + 2][cDrF + 7] = ')';
	X[rDrF + 2][cDrF + 8] = '_';
	X[rDrF + 2][cDrF + 9] = '_';
	X[rDrF + 2][cDrF + 13] = '@';
	X[rDrF + 2][cDrF + 14] = '\\';
	X[rDrF + 2][cDrF + 15] = '_';
	X[rDrF + 2][cDrF + 16] = '_';

	//Row4
	X[rDrF + 3][cDrF - 13] = '(';
	X[rDrF + 3][cDrF - 11] = ',';
	X[rDrF + 3][cDrF - 10] = ',';
	X[rDrF + 3][cDrF - 8] = '"';
	X[rDrF + 3][cDrF - 7] = '"';
	X[rDrF + 3][cDrF - 6] = '-';
	X[rDrF + 3][cDrF - 5] = '-';
	X[rDrF + 3][cDrF - 4] = '-';
	X[rDrF + 3][cDrF - 3] = '/';
	X[rDrF + 3][cDrF - 2] = '_';
	X[rDrF + 3][cDrF - 1] = '_';
	X[rDrF + 3][cDrF] = '_';
	X[rDrF + 3][cDrF + 1] = ',';
	X[rDrF + 3][cDrF + 2] = ',';
	X[rDrF + 3][cDrF + 3] = 'E';
	X[rDrF + 3][cDrF + 4] = '_';
	X[rDrF + 3][cDrF + 5] = '/';
	X[rDrF + 3][cDrF + 6] = '_';
	X[rDrF + 3][cDrF + 7] = '_';
	X[rDrF + 3][cDrF + 8] = ',';
	X[rDrF + 3][cDrF + 9] = 'E';
	X[rDrF + 3][cDrF + 10] = '"';
	X[rDrF + 3][cDrF + 11] = '-';
	X[rDrF + 3][cDrF + 12] = '-';
	X[rDrF + 3][cDrF + 13] = '-';
	X[rDrF + 3][cDrF + 14] = '-';
	X[rDrF + 3][cDrF + 15] = '-';
	X[rDrF + 3][cDrF + 16] = '-';
	X[rDrF + 3][cDrF + 17] = '"';

	//Row5
	X[rDrF + 4][cDrF - 12] = '"';
	X[rDrF + 4][cDrF - 11] = '-';
	X[rDrF + 4][cDrF - 10] = '"';
	X[rDrF + 4][cDrF - 9] = '"';
	X[rDrF + 4][cDrF - 8] = '"';
	X[rDrF + 4][cDrF - 7] = '"';
	X[rDrF + 4][cDrF - 6] = '"';

}
void SetFlyingDragon(char X[][1000], int& rDrF, int& cDrF, int& dragonflag)
{
	//Row0
	X[rDrF - 1][cDrF + 5] = '\\';
	X[rDrF - 1][cDrF + 6] = '_';
	X[rDrF - 1][cDrF + 7] = 254;
	X[rDrF - 1][cDrF + 8] = '_';
	X[rDrF - 1][cDrF + 9] = '_/';

	//Row1
	X[rDrF][cDrF] = '_';
	X[rDrF][cDrF + 1] = '_';
	X[rDrF][cDrF + 2] = '_';
	X[rDrF][cDrF + 7] = '0';
	X[rDrF][cDrF + 8] = '_';
	X[rDrF][cDrF + 9] = ',';

	//Row2
	X[rDrF + 1][cDrF - 5] = '.';
	X[rDrF + 1][cDrF - 4] = '.';
	X[rDrF + 1][cDrF - 3] = '-';
	X[rDrF + 1][cDrF - 2] = '"';
	X[rDrF + 1][cDrF - 1] = '"';
	X[rDrF + 1][cDrF + 3] = '"';
	X[rDrF + 1][cDrF + 4] = '"';
	X[rDrF + 1][cDrF + 5] = '-';
	X[rDrF + 1][cDrF + 6] = '.';
	X[rDrF + 1][cDrF + 7] = '|';
	X[rDrF + 1][cDrF + 8] = '_';
	X[rDrF + 1][cDrF + 9] = '_';
	X[rDrF + 1][cDrF + 10] = '|';
	X[rDrF + 1][cDrF + 11] = '\\';
	X[rDrF + 1][cDrF + 12] = '_';
	X[rDrF + 1][cDrF + 13] = '_';

	//Row3
	X[rDrF + 2][cDrF - 12] = '_';
	X[rDrF + 2][cDrF - 11] = '.';
	X[rDrF + 2][cDrF - 10] = '-';
	X[rDrF + 2][cDrF - 9] = '-';
	X[rDrF + 2][cDrF - 8] = '"';
	X[rDrF + 2][cDrF - 7] = '"';
	X[rDrF + 2][cDrF - 6] = '"';
	X[rDrF + 2][cDrF - 1] = '"';
	X[rDrF + 2][cDrF] = ')';
	X[rDrF + 2][cDrF + 1] = '_';
	X[rDrF + 2][cDrF + 2] = '_';
	X[rDrF + 2][cDrF + 7] = ')';
	X[rDrF + 2][cDrF + 8] = '_';
	X[rDrF + 2][cDrF + 9] = '\\';
	X[rDrF + 2][cDrF + 13] = '@';
	X[rDrF + 2][cDrF + 14] = '\\';
	X[rDrF + 2][cDrF + 15] = '_';
	X[rDrF + 2][cDrF + 16] = '_';

	//Row4
	X[rDrF + 3][cDrF - 13] = '(';
	X[rDrF + 3][cDrF - 11] = ',';
	X[rDrF + 3][cDrF - 10] = ',';
	X[rDrF + 3][cDrF - 8] = '"';
	X[rDrF + 3][cDrF - 7] = '"';
	X[rDrF + 3][cDrF - 6] = '-';
	X[rDrF + 3][cDrF - 5] = '-';
	X[rDrF + 3][cDrF - 4] = '-';
	X[rDrF + 3][cDrF - 3] = '/';
	X[rDrF + 3][cDrF - 2] = '_';
	X[rDrF + 3][cDrF - 1] = '_';
	X[rDrF + 3][cDrF] = '_';
	X[rDrF + 3][cDrF + 1] = ',';
	X[rDrF + 3][cDrF + 2] = ',';
	X[rDrF + 3][cDrF + 3] = 'E';
	X[rDrF + 3][cDrF + 4] = '_';
	X[rDrF + 3][cDrF + 5] = '/';
	X[rDrF + 3][cDrF + 6] = '_';
	X[rDrF + 3][cDrF + 7] = '_';
	X[rDrF + 3][cDrF + 8] = ',';
	X[rDrF + 3][cDrF + 9] = 'E';
	X[rDrF + 3][cDrF + 10] = '"';
	X[rDrF + 3][cDrF + 11] = '-';
	X[rDrF + 3][cDrF + 12] = '-';
	X[rDrF + 3][cDrF + 13] = '-';
	X[rDrF + 3][cDrF + 14] = '-';
	X[rDrF + 3][cDrF + 15] = '-';
	X[rDrF + 3][cDrF + 16] = '-';
	X[rDrF + 3][cDrF + 17] = '"';

	//Row5
	X[rDrF + 4][cDrF - 12] = '"';
	X[rDrF + 4][cDrF - 11] = '-';
	X[rDrF + 4][cDrF - 10] = '"';
	X[rDrF + 4][cDrF - 9] = '"';
	X[rDrF + 4][cDrF - 8] = '"';
	X[rDrF + 4][cDrF - 7] = '"';
	X[rDrF + 4][cDrF - 6] = '"';

	dragonflag = 1;
}
void FlyingDragonL(char X[][1000], int rDrF, int cDrF, int& dragonflag)
{
	//Row0
	X[rDrF - 1][cDrF - 5] = '//';
	X[rDrF - 1][cDrF - 6] = '_';
	X[rDrF - 1][cDrF - 7] = 254;
	X[rDrF - 1][cDrF - 8] = '_';
	X[rDrF - 1][cDrF - 9] = '_';

	//Row1
	X[rDrF][cDrF] = '_';
	X[rDrF][cDrF - 1] = '_';
	X[rDrF][cDrF - 2] = '_';
	X[rDrF][cDrF - 7] = '0';
	X[rDrF][cDrF - 8] = '_';
	X[rDrF][cDrF - 9] = ',';

	//Row2
	X[rDrF + 1][cDrF + 5] = '.';
	X[rDrF + 1][cDrF + 4] = '.';
	X[rDrF + 1][cDrF + 3] = '-';
	X[rDrF + 1][cDrF + 2] = '"';
	X[rDrF + 1][cDrF + 1] = '"';
	X[rDrF + 1][cDrF - 3] = '"';
	X[rDrF + 1][cDrF - 4] = '"';
	X[rDrF + 1][cDrF - 5] = '-';
	X[rDrF + 1][cDrF - 6] = '.';
	X[rDrF + 1][cDrF - 7] = '|';
	X[rDrF + 1][cDrF - 8] = '_';
	X[rDrF + 1][cDrF - 9] = '_';
	X[rDrF + 1][cDrF - 10] = '|';
	X[rDrF + 1][cDrF - 11] = '//';
	X[rDrF + 1][cDrF - 12] = '_';
	X[rDrF + 1][cDrF - 13] = '_';

	//Row3
	X[rDrF + 2][cDrF + 12] = '_';
	X[rDrF + 2][cDrF + 11] = '.';
	X[rDrF + 2][cDrF + 10] = '-';
	X[rDrF + 2][cDrF + 9] = '-';
	X[rDrF + 2][cDrF + 8] = '"';
	X[rDrF + 2][cDrF + 7] = '"';
	X[rDrF + 2][cDrF + 6] = '"';
	X[rDrF + 2][cDrF + 1] = '"';
	X[rDrF + 2][cDrF] = '(';
	X[rDrF + 2][cDrF - 1] = '_';
	X[rDrF + 2][cDrF - 2] = '_';
	X[rDrF + 2][cDrF - 7] = '(';
	X[rDrF + 2][cDrF - 8] = '_';
	X[rDrF + 2][cDrF - 9] = '//';
	X[rDrF + 2][cDrF - 13] = '@';
	X[rDrF + 2][cDrF - 14] = '//';
	X[rDrF + 2][cDrF - 15] = '_';
	X[rDrF + 2][cDrF - 16] = '_';

	//Row4
	X[rDrF + 3][cDrF + 13] = ')';
	X[rDrF + 3][cDrF + 11] = ',';
	X[rDrF + 3][cDrF + 10] = ',';
	X[rDrF + 3][cDrF + 8] = '"';
	X[rDrF + 3][cDrF + 7] = '"';
	X[rDrF + 3][cDrF + 6] = '-';
	X[rDrF + 3][cDrF + 5] = '-';
	X[rDrF + 3][cDrF + 4] = '-';
	X[rDrF + 3][cDrF + 3] = '\\';
	X[rDrF + 3][cDrF + 2] = '_';
	X[rDrF + 3][cDrF + 1] = '_';
	X[rDrF + 3][cDrF] = '_';
	X[rDrF + 3][cDrF - 1] = ',';
	X[rDrF + 3][cDrF - 2] = ',';
	X[rDrF + 3][cDrF - 3] = 'E';
	X[rDrF + 3][cDrF - 4] = '_';
	X[rDrF + 3][cDrF - 5] = '\\';
	X[rDrF + 3][cDrF - 6] = '_';
	X[rDrF + 3][cDrF - 7] = '_';
	X[rDrF + 3][cDrF - 8] = ',';
	X[rDrF + 3][cDrF - 9] = 'E';
	X[rDrF + 3][cDrF - 10] = '"';
	X[rDrF + 3][cDrF - 11] = '-';
	X[rDrF + 3][cDrF - 12] = '-';
	X[rDrF + 3][cDrF - 13] = '-';
	X[rDrF + 3][cDrF - 14] = '-';
	X[rDrF + 3][cDrF - 15] = '-';
	X[rDrF + 3][cDrF - 16] = '-';
	X[rDrF + 3][cDrF - 17] = '"';

	//Row5
	X[rDrF + 4][cDrF + 12] = '"';
	X[rDrF + 4][cDrF + 11] = '-';
	X[rDrF + 4][cDrF + 10] = '"';
	X[rDrF + 4][cDrF + 9] = '"';
	X[rDrF + 4][cDrF + 8] = '"';
	X[rDrF + 4][cDrF + 7] = '"';
	X[rDrF + 4][cDrF + 6] = '"';

	dragonflag = 1;
}
void SetFlyingDragon2(char X[][1000], int& rdf, int& cdf, int& dragonflag)
{
	//Row 1
	X[rdf][cdf] = '_';
	X[rdf][cdf + 1] = '_';
	X[rdf][cdf + 2] = ',';
	X[rdf][cdf + 3] = ',';
	X[rdf][cdf + 4] = '-';
	X[rdf][cdf + 5] = '-';
	X[rdf][cdf + 6] = '"';
	X[rdf][cdf + 7] = '"';
	X[rdf][cdf + 8] = '\\';
	X[rdf][cdf + 9] = '\\';
	X[rdf][cdf + 11] = '\\';
	X[rdf][cdf + 12] = '_';
	X[rdf][cdf + 13] = 254;
	X[rdf][cdf + 14] = '_';
	X[rdf][cdf + 15] = '/';

	//Row 2
	X[rdf + 1][cdf - 8] = '_';
	X[rdf + 1][cdf - 7] = ',';
	X[rdf + 1][cdf - 6] = ',';
	X[rdf + 1][cdf - 5] = ',';
	X[rdf + 1][cdf - 4] = '-';
	X[rdf + 1][cdf - 3] = '"';
	X[rdf + 1][cdf - 2] = '"';
	X[rdf + 1][cdf - 1] = '"';
	X[rdf + 1][cdf] = '"';
	X[rdf + 1][cdf + 9] = '\\';
	X[rdf + 1][cdf + 10] = '\\';
	X[rdf + 1][cdf + 13] = '0';
	X[rdf + 1][cdf + 14] = '_';
	X[rdf + 1][cdf + 16] = ',';

	//Row 3
	X[rdf + 2][cdf - 9] = '"';
	X[rdf + 2][cdf - 8] = '-';
	X[rdf + 2][cdf - 7] = '-';
	X[rdf + 2][cdf - 6] = '-';
	X[rdf + 2][cdf - 5] = '-';
	X[rdf + 2][cdf - 4] = '-';
	X[rdf + 2][cdf - 3] = '-';
	X[rdf + 2][cdf - 2] = '-';
	X[rdf + 2][cdf - 1] = '-';
	X[rdf + 2][cdf] = '-';
	X[rdf + 2][cdf + 1] = '-';
	X[rdf + 2][cdf + 2] = '_';
	X[rdf + 2][cdf + 3] = '.';
	X[rdf + 2][cdf + 4] = '-';
	X[rdf + 2][cdf + 5] = '-';
	X[rdf + 2][cdf + 6] = '-';
	X[rdf + 2][cdf + 7] = '-';
	X[rdf + 2][cdf + 8] = '-';
	X[rdf + 2][cdf + 9] = '-';
	X[rdf + 2][cdf + 10] = '"';
	X[rdf + 2][cdf + 11] = '-';
	X[rdf + 2][cdf + 12] = '.';
	X[rdf + 2][cdf + 13] = '|';
	X[rdf + 2][cdf + 14] = '_';
	X[rdf + 2][cdf + 15] = '_';
	X[rdf + 2][cdf + 16] = '|';
	X[rdf + 2][cdf + 17] = '\\';
	X[rdf + 2][cdf + 18] = '_';
	X[rdf + 2][cdf + 19] = '_';

	//Row 4
	X[rdf + 3][cdf - 6] = '_';
	X[rdf + 3][cdf - 5] = '.';
	X[rdf + 3][cdf - 4] = '-';
	X[rdf + 3][cdf - 3] = '-';
	X[rdf + 3][cdf - 2] = '"';
	X[rdf + 3][cdf - 1] = '"';
	X[rdf + 3][cdf] = '"';
	X[rdf + 3][cdf + 1] = '"';
	X[rdf + 3][cdf + 6] = '"';
	X[rdf + 3][cdf + 7] = ')';
	X[rdf + 3][cdf + 8] = '_';
	X[rdf + 3][cdf + 9] = '_';
	X[rdf + 3][cdf + 13] = ')';
	X[rdf + 3][cdf + 14] = '_';
	X[rdf + 3][cdf + 15] = '\\';
	X[rdf + 3][cdf + 15] = '_';
	X[rdf + 3][cdf + 19] = '@';
	X[rdf + 3][cdf + 20] = '\\';
	X[rdf + 3][cdf + 21] = '_';
	X[rdf + 3][cdf + 22] = '_';

	//Row 5
	X[rdf + 4][cdf - 7] = '(';
	X[rdf + 4][cdf - 4] = '.';
	X[rdf + 4][cdf - 3] = '.';
	X[rdf + 4][cdf - 1] = '"';
	X[rdf + 4][cdf] = '"';
	X[rdf + 4][cdf + 1] = '-';
	X[rdf + 4][cdf + 2] = '-';
	X[rdf + 4][cdf + 3] = '-';
	X[rdf + 4][cdf + 4] = '/';
	X[rdf + 4][cdf + 7] = '/';
	X[rdf + 4][cdf + 9] = '/';
	X[rdf + 4][cdf + 13] = '/';
	X[rdf + 4][cdf + 15] = '"';
	X[rdf + 4][cdf + 16] = '-';
	X[rdf + 4][cdf + 17] = '-';
	X[rdf + 4][cdf + 18] = '-';
	X[rdf + 4][cdf + 19] = '-';
	X[rdf + 4][cdf + 20] = '-';
	X[rdf + 4][cdf + 21] = '-';
	X[rdf + 4][cdf + 22] = '"';

	//Row 6
	X[rdf + 5][cdf - 6] = '\\';
	X[rdf + 5][cdf - 4] = '\\';
	X[rdf + 5][cdf + 4] = '\\';
	X[rdf + 5][cdf + 6] = '\\';
	X[rdf + 5][cdf + 8] = '\\';
	X[rdf + 5][cdf + 10] = '\\';

	//Row 7
	X[rdf + 6][cdf - 5] = '\\';
	X[rdf + 6][cdf - 4] = '"';
	X[rdf + 6][cdf - 3] = '\\';
	X[rdf + 6][cdf + 5] = '\\';
	X[rdf + 6][cdf + 6] = 'M';
	X[rdf + 6][cdf + 7] = 'M';
	X[rdf + 6][cdf + 8] = '\\';
	X[rdf + 6][cdf + 10] = '\\';
	X[rdf + 6][cdf + 11] = 'M';
	X[rdf + 6][cdf + 12] = 'M';
	X[rdf + 6][cdf + 13] = '\\';

	//Row 8
	X[rdf + 7][cdf - 4] = '\\';
	X[rdf + 7][cdf - 3] = '/';

	dragonflag = 0;

}
void MoveDragon(char X[][1000], int& rdf, int& cdf, int varD, int& flagDragononce)
{
	if (rdf > varD)
	{
		rdf--;
	}
	if (rdf == varD + 1)
	{
		flagDragononce = 1;
	}
}
void MoveDragonH(char X[][1000], int& rdf, int& cdf, char& chdr)
{
	if (chdr == 'a')
	{
		cdf--;
	}
	if (chdr == 'd')
	{
		cdf++;
	}
	if (chdr == 'w')
	{
		rdf--;
	}
	if (chdr == 's')
	{
		rdf++;
	}
	chdr = '.';
}
void SetDrBullet(char X[][1000], int& rdrb, int& cdrb, char& chdrb)
{
	//Row 1
	X[rdrb][cdrb] = '.';
	X[rdrb][cdrb + 1] = ')';
	X[rdrb][cdrb + 2] = '%';
	X[rdrb][cdrb + 3] = '%';
	X[rdrb][cdrb + 4] = '%';
	X[rdrb][cdrb + 5] = ')';
	X[rdrb][cdrb + 6] = '%';
	X[rdrb][cdrb + 7] = '%';

	//Row 2
	X[rdrb + 1][cdrb - 1] = '%';
	X[rdrb + 1][cdrb] = ')';
	X[rdrb + 1][cdrb + 1] = '%';
	X[rdrb + 1][cdrb + 2] = '%';
	X[rdrb + 1][cdrb + 3] = '(';
	X[rdrb + 1][cdrb + 4] = '%';
	X[rdrb + 1][cdrb + 5] = '%';
	X[rdrb + 1][cdrb + 6] = '(';
	X[rdrb + 1][cdrb + 7] = '%';
	X[rdrb + 1][cdrb + 8] = '%';
	X[rdrb + 1][cdrb + 9] = '%';

	//Row 3
	X[rdrb + 2][cdrb - 3] = '-';
	X[rdrb + 2][cdrb - 2] = '%';
	X[rdrb + 2][cdrb - 1] = '(';
	X[rdrb + 2][cdrb] = '%';
	X[rdrb + 2][cdrb + 1] = '%';
	X[rdrb + 2][cdrb + 2] = '%';
	X[rdrb + 2][cdrb + 3] = '%';
	X[rdrb + 2][cdrb + 4] = ')';
	X[rdrb + 2][cdrb + 5] = '%';
	X[rdrb + 2][cdrb + 6] = '%';
	X[rdrb + 2][cdrb + 7] = ';';
	X[rdrb + 2][cdrb + 8] = '%';
	X[rdrb + 2][cdrb + 9] = '%';
	X[rdrb + 2][cdrb + 10] = '%';

	//Row 4
	X[rdrb + 3][cdrb - 1] = '%';
	X[rdrb + 3][cdrb] = '%';
	X[rdrb + 3][cdrb + 1] = ')';
	X[rdrb + 3][cdrb + 2] = '%';
	X[rdrb + 3][cdrb + 3] = '%';
	X[rdrb + 3][cdrb + 4] = '%';
	X[rdrb + 3][cdrb + 5] = '%';
	X[rdrb + 3][cdrb + 6] = ')';
	X[rdrb + 3][cdrb + 7] = '%';
	X[rdrb + 3][cdrb + 8] = '%';
	X[rdrb + 3][cdrb + 9] = '%';
	X[rdrb + 3][cdrb + 10] = '"';

	//Row 5
	X[rdrb + 4][cdrb] = '"';
	X[rdrb + 4][cdrb + 1] = '%';
	X[rdrb + 4][cdrb + 2] = '%';
	X[rdrb + 4][cdrb + 3] = '%';
	X[rdrb + 4][cdrb + 4] = '%';
	X[rdrb + 4][cdrb + 5] = '(';
	X[rdrb + 4][cdrb + 6] = '%';
	X[rdrb + 4][cdrb + 7] = '%';
	X[rdrb + 4][cdrb + 8] = '"';
}
void SetDrBullet2(char X[][1000], int& rdrb, int& cdrb, char& chdrb)
{

	//Row 1
	X[rdrb][cdrb] = '.';
	X[rdrb][cdrb + 1] = '(';
	X[rdrb][cdrb + 2] = '%';
	X[rdrb][cdrb + 3] = '%';
	X[rdrb][cdrb + 4] = '%';
	X[rdrb][cdrb + 5] = ')';
	X[rdrb][cdrb + 6] = '%';
	X[rdrb][cdrb + 7] = '%';

	//Row 2
	X[rdrb + 1][cdrb - 1] = '\\';
	X[rdrb + 1][cdrb] = '(';
	X[rdrb + 1][cdrb + 1] = '\\';
	X[rdrb + 1][cdrb + 2] = '%';
	X[rdrb + 1][cdrb + 3] = '(';
	X[rdrb + 1][cdrb + 4] = '%';
	X[rdrb + 1][cdrb + 5] = '%';
	X[rdrb + 1][cdrb + 6] = '(';
	X[rdrb + 1][cdrb + 7] = '%';
	X[rdrb + 1][cdrb + 8] = '%';
	X[rdrb + 1][cdrb + 9] = '%';

	//Row 3
	X[rdrb + 2][cdrb - 3] = '-';
	X[rdrb + 2][cdrb - 2] = '\\';
	X[rdrb + 2][cdrb - 1] = ')';
	X[rdrb + 2][cdrb] = '\\';
	X[rdrb + 2][cdrb + 1] = '%';
	X[rdrb + 2][cdrb + 2] = '%';
	X[rdrb + 2][cdrb + 3] = '%';
	X[rdrb + 2][cdrb + 4] = ')';
	X[rdrb + 2][cdrb + 5] = '%';
	X[rdrb + 2][cdrb + 6] = '%';
	X[rdrb + 2][cdrb + 7] = ';';
	X[rdrb + 2][cdrb + 8] = '%';
	X[rdrb + 2][cdrb + 9] = '%';
	X[rdrb + 2][cdrb + 10] = '%';

	//Row 4
	X[rdrb + 3][cdrb - 1] = '\\';
	X[rdrb + 3][cdrb] = '\\';
	X[rdrb + 3][cdrb + 1] = '(';
	X[rdrb + 3][cdrb + 2] = '%';
	X[rdrb + 3][cdrb + 3] = '%';
	X[rdrb + 3][cdrb + 4] = '%';
	X[rdrb + 3][cdrb + 5] = '%';
	X[rdrb + 3][cdrb + 6] = ')';
	X[rdrb + 3][cdrb + 7] = '%';
	X[rdrb + 3][cdrb + 8] = '%';
	X[rdrb + 3][cdrb + 9] = '%';
	X[rdrb + 3][cdrb + 10] = '"';

	//Row 5
	X[rdrb + 4][cdrb] = '/';
	X[rdrb + 4][cdrb + 1] = '%';
	X[rdrb + 4][cdrb + 2] = '%';
	X[rdrb + 4][cdrb + 3] = '%';
	X[rdrb + 4][cdrb + 4] = '%';
	X[rdrb + 4][cdrb + 5] = '(';
	X[rdrb + 4][cdrb + 6] = '%';
	X[rdrb + 4][cdrb + 7] = '%';
	X[rdrb + 4][cdrb + 8] = '"';
}
void MoveDrBullet(char X[][1000], int rdrb, int& cdrb, int& sdrflag, char& chdrb, int& fdrb, int& drawbigdragon)
{
	if (X[rdrb][cdrb + 13] == ' ')
	{
		cdrb += 3;
	}
	else
	{
		sdrflag = 1;
		fdrb = 0;
		chdrb = '.';
		drawbigdragon++;
	}

}
void enemybike(char x[][1000], int rbike, int cbike)
{
	// Row 0 
	x[rbike][cbike] = '(';
	x[rbike][cbike + 1] = '_';
	x[rbike][cbike + 2] = ')';
	x[rbike][cbike + 4] = '\\';
	x[rbike][cbike + 5] = '(';
	x[rbike][cbike + 6] = '_';
	x[rbike][cbike + 7] = ')';

	// Row 1
	x[rbike - 1][cbike] = '-';
	x[rbike - 1][cbike + 1] = 181;
	x[rbike - 1][cbike + 2] = '_';
	x[rbike - 1][cbike + 3] = '-';
	x[rbike - 1][cbike + 4] = '>';
	x[rbike - 1][cbike + 5] = '/';
	x[rbike - 1][cbike + 7] = '_';

	// Row 2
	x[rbike - 2][cbike + 3] = 'o';
	x[rbike - 1][cbike + 4] = '_';
	x[rbike - 1][cbike + 5] = '_';

}
void movebike(char x[][1000], int& rbike, int& cbike, int& bikerflag)
{
	if (x[rbike][cbike - 2] = ' ')
	{
		cbike -= 2;
	}
	if (cbike < 0)
	{
		bikerflag = 1;
	}
}
void set_monkey(char X[][1000], int RMonkey, int CMonkey)
{
	X[RMonkey][CMonkey + 7] = '_';
	X[RMonkey][CMonkey + 8] = '_';

	X[RMonkey + 1][CMonkey + 6] = '(';
	X[RMonkey + 1][CMonkey + 5] = 'c';

	X[RMonkey + 1][CMonkey + 7] = '.';
	X[RMonkey + 1][CMonkey + 8] = '.';
	X[RMonkey + 1][CMonkey + 9] = ')';
	X[RMonkey + 1][CMonkey + 10] = 'o';
	X[RMonkey + 1][CMonkey + 14] = '(';


	X[RMonkey + 2][CMonkey + 7] = '-';
	X[RMonkey + 2][CMonkey + 8] = ')';
	X[RMonkey + 2][CMonkey + 6] = '(';
	X[RMonkey + 2][CMonkey + 5] = '_';
	X[RMonkey + 2][CMonkey + 4] = '_';
	X[RMonkey + 2][CMonkey + 3] = '\\';
	X[RMonkey + 2][CMonkey + 13] = '_';
	X[RMonkey + 2][CMonkey + 14] = '_';
	X[RMonkey + 2][CMonkey + 15] = ')';

	X[RMonkey + 3][CMonkey + 7] = '/';
	X[RMonkey + 3][CMonkey + 8] = '\\';
	X[RMonkey + 3][CMonkey + 12] = '(';

	X[RMonkey + 4][CMonkey + 7] = '(';
	X[RMonkey + 4][CMonkey + 6] = '/';
	X[RMonkey + 4][CMonkey + 8] = '_';
	X[RMonkey + 4][CMonkey + 9] = ')';
	X[RMonkey + 4][CMonkey + 10] = '_';
	X[RMonkey + 4][CMonkey + 11] = '_';
	X[RMonkey + 4][CMonkey + 12] = '_';
	X[RMonkey + 4][CMonkey + 13] = ')';


	X[RMonkey + 5][CMonkey + 8] = '/';
	X[RMonkey + 5][CMonkey + 9] = '|';
	X[RMonkey + 5][CMonkey + 6] = 'w';

	X[RMonkey + 6][CMonkey + 7] = '|';
	X[RMonkey + 6][CMonkey + 9] = '\\';


	X[RMonkey + 7][CMonkey + 9] = 'm';
	X[RMonkey + 7][CMonkey + 7] = 'm';




}
void monkey_throw(char X[][1000], int RThrow, int CThrow)
{
	X[RThrow + 1][CThrow + 2] = '|';
	X[RThrow + 1][CThrow + 3] = ')';
	X[RThrow + 1][CThrow + 1] = '(';
}
void throw_move(char X[][1000], int& RThrow, int& CThrow, int& flagApple)
{

	if (X[RThrow + 2][CThrow - 1] == ' ')
	{
		CThrow -= 2;
		RThrow++;
	}


}
void move_Apple(char X[][1000], int& RApple, int& CApple)
{
	X[RApple][CApple] = '(';
	X[RApple][CApple + 1] = '|';
	X[RApple][CApple + 2] = ')';
}
void Hero_with_Apple(char X[][1000], int& RApple, int& CApple, char& ChMonkey)
{

	if (ChMonkey == 'o')
	{
		RApple--;
		CApple += 2;
	}

}
void SetFlyingBox(char X[][1000], int& rFB, int& cFB)
{
	//Row 1
	X[rFB][cFB] = '_';
	X[rFB][cFB + 1] = '_';
	X[rFB][cFB + 11] = '_';
	X[rFB][cFB + 12] = '_';

	//Row 2
	X[rFB + 1][cFB - 1] = '/';
	X[rFB + 1][cFB + 2] = '\\';
	X[rFB + 1][cFB + 10] = '/';
	X[rFB + 1][cFB + 12] = '\\';

	//Row3
	X[rFB + 2][cFB - 2] = '/';
	X[rFB + 2][cFB + 3] = '\\';
	X[rFB + 2][cFB + 4] = '_';
	X[rFB + 2][cFB + 5] = '_';
	X[rFB + 2][cFB + 6] = '_';
	X[rFB + 2][cFB + 7] = '_';
	X[rFB + 2][cFB + 8] = '_';

	//Row4
	X[rFB + 3][cFB - 2] = '|';
	X[rFB + 3][cFB - 1] = '/';
	X[rFB + 3][cFB] = '|';
	X[rFB + 3][cFB + 1] = '/';
	X[rFB + 3][cFB + 2] = '/';
	X[rFB + 3][cFB + 3] = '_';
	X[rFB + 3][cFB + 4] = '_';
	X[rFB + 3][cFB + 5] = '_';
	X[rFB + 3][cFB + 7] = '/';
	X[rFB + 3][cFB + 8] = '|';
	X[rFB + 3][cFB + 9] = '\\';
	X[rFB + 3][cFB + 10] = '|';
	X[rFB + 3][cFB + 11] = '\\';
	X[rFB + 3][cFB + 12] = '|';
	X[rFB + 3][cFB + 13] = '/';
	X[rFB + 3][cFB + 14] = '|';

	//Row5
	X[rFB + 4][cFB + 2] = '|';
	X[rFB + 4][cFB + 3] = '_';
	X[rFB + 4][cFB + 4] = '_';
	X[rFB + 4][cFB + 5] = '_';
	X[rFB + 4][cFB + 6] = '_';
	X[rFB + 4][cFB + 8] = '|';

	//Row6
	X[rFB + 5][cFB + 2] = '|';
	X[rFB + 5][cFB + 3] = '_';
	X[rFB + 5][cFB + 4] = '_';
	X[rFB + 5][cFB + 5] = '_';
	X[rFB + 5][cFB + 6] = '_';
	X[rFB + 5][cFB + 7] = '|';
	X[rFB + 5][cFB + 8] = '/';

}
void SetFlyingBox2(char X[][1000], int& rFB, int& cFB)
{
	//Row1
	X[rFB][cFB] = '/';
	X[rFB][cFB + 1] = '^';
	X[rFB][cFB + 2] = '-';
	X[rFB][cFB + 3] = '^';
	X[rFB][cFB + 4] = '-';
	X[rFB][cFB + 5] = '^';
	X[rFB][cFB + 7] = '\\';
	X[rFB][cFB + 17] = '/';
	X[rFB][cFB + 18] = '^';
	X[rFB][cFB + 19] = '-';
	X[rFB][cFB + 20] = '^';
	X[rFB][cFB + 21] = '-';
	X[rFB][cFB + 22] = '^';
	X[rFB][cFB + 23] = '\\';

	//Row2
	X[rFB + 1][cFB - 1] = '/';
	X[rFB + 1][cFB + 1] = '/';
	X[rFB + 1][cFB + 2] = '\\';
	X[rFB + 1][cFB + 3] = '/';
	X[rFB + 1][cFB + 4] = '\\';
	X[rFB + 1][cFB + 5] = '/';
	X[rFB + 1][cFB + 6] = '\\';
	X[rFB + 1][cFB + 7] = '/';
	X[rFB + 1][cFB + 8] = '\\';
	X[rFB + 1][cFB + 10] = '_';
	X[rFB + 1][cFB + 11] = '_';
	X[rFB + 1][cFB + 12] = '_';
	X[rFB + 1][cFB + 13] = '_';
	X[rFB + 1][cFB + 14] = '_';
	X[rFB + 1][cFB + 16] = '/';
	X[rFB + 1][cFB + 17] = '\\';
	X[rFB + 1][cFB + 18] = '/';
	X[rFB + 1][cFB + 19] = '\\';
	X[rFB + 1][cFB + 20] = '/';
	X[rFB + 1][cFB + 22] = '\\';

	//Row3
	X[rFB + 2][cFB - 2] = '/';
	X[rFB + 2][cFB - 1] = '_';
	X[rFB + 2][cFB] = '/';
	X[rFB + 2][cFB + 1] = '|';
	X[rFB + 2][cFB + 2] = '/';
	X[rFB + 2][cFB + 3] = '\\';
	X[rFB + 2][cFB + 4] = '|';
	X[rFB + 2][cFB + 5] = '/';
	X[rFB + 2][cFB + 6] = '|';
	X[rFB + 2][cFB + 7] = '/';
	X[rFB + 2][cFB + 8] = '\\';
	X[rFB + 2][cFB + 9] = '/';
	X[rFB + 2][cFB + 10] = '_';
	X[rFB + 2][cFB + 14] = '/';
	X[rFB + 2][cFB + 15] = '|';
	X[rFB + 2][cFB + 16] = '/';
	X[rFB + 2][cFB + 17] = '\\';
	X[rFB + 2][cFB + 18] = '/';
	X[rFB + 2][cFB + 19] = '\\';
	X[rFB + 2][cFB + 20] = '/';
	X[rFB + 2][cFB + 22] = '\\';

	//Row 4
	X[rFB + 3][cFB + 7] = '|';
	X[rFB + 3][cFB + 8] = '_';
	X[rFB + 3][cFB + 9] = '_';
	X[rFB + 3][cFB + 10] = '_';
	X[rFB + 3][cFB + 11] = '_';
	X[rFB + 3][cFB + 12] = '|';
	X[rFB + 3][cFB + 14] = '/';
	X[rFB + 3][cFB + 15] = '|';
	X[rFB + 3][cFB + 16] = '/';
	X[rFB + 3][cFB + 17] = '\\';
	X[rFB + 3][cFB + 18] = '/';
	X[rFB + 3][cFB + 19] = '\\';
	X[rFB + 3][cFB + 20] = '/';
	X[rFB + 3][cFB + 22] = '\\';

	//Row 5
	X[rFB + 4][cFB + 7] = '|';
	X[rFB + 4][cFB + 8] = '_';
	X[rFB + 4][cFB + 9] = '_';
	X[rFB + 4][cFB + 10] = '_';
	X[rFB + 4][cFB + 11] = '_';
	X[rFB + 4][cFB + 12] = '|';
	X[rFB + 4][cFB + 14] = '/';

}
void Laser(char X[][1000], int& rdf, int& cdf, int L[][2], char chdrL, int& rrr)
{
	X[L[rrr][0]][L[rrr][1]] = '>';
}
void movelaser(char X[][1000], int& rdf, int& cdf, int L[][2], char& chdrL, int& rrr, int& varL2)
{
	if (X[L[rrr][0]][L[rrr][1] + 1] == ' ')
	{
		L[rrr][1]++;
	}
	else
		varL2++;
}
void SetCrown(char X[][1000], int& Rcrown, int& Ccrown)
{
	//Row1
	X[Rcrown][Ccrown] = '_';
	X[Rcrown][Ccrown + 1] = '.';
	X[Rcrown][Ccrown + 2] = '+';
	X[Rcrown][Ccrown + 3] = '.';
	X[Rcrown][Ccrown + 4] = '_';

	//Row2
	X[Rcrown + 1][Ccrown - 2] = '(';
	X[Rcrown + 1][Ccrown - 1] = '^';
	X[Rcrown + 1][Ccrown] = '\\';
	X[Rcrown + 1][Ccrown + 1] = '/';
	X[Rcrown + 1][Ccrown + 2] = '^';
	X[Rcrown + 1][Ccrown + 3] = '\\';
	X[Rcrown + 1][Ccrown + 4] = '/';
	X[Rcrown + 1][Ccrown + 5] = '^';
	X[Rcrown + 1][Ccrown + 6] = ')';

	//Row3
	X[Rcrown + 2][Ccrown - 1] = '\\';
	X[Rcrown + 2][Ccrown] = '@';
	X[Rcrown + 2][Ccrown + 1] = '*';
	X[Rcrown + 2][Ccrown + 2] = '@';
	X[Rcrown + 2][Ccrown + 3] = '*';
	X[Rcrown + 2][Ccrown + 4] = '@';
	X[Rcrown + 2][Ccrown + 5] = '/';

	//Row4
	X[Rcrown + 3][Ccrown - 1] = '{';
	X[Rcrown + 3][Ccrown] = '_';
	X[Rcrown + 3][Ccrown + 1] = '_';
	X[Rcrown + 3][Ccrown + 2] = '_';
	X[Rcrown + 3][Ccrown + 3] = '_';
	X[Rcrown + 3][Ccrown + 4] = '_';
	X[Rcrown + 3][Ccrown + 5] = '}';


}
void MoveCrown(char X[][1000], int& Rcrown, int& Ccrown)
{
	if (Rcrown + 5 == ' ')
	{
		Rcrown++;
	}
}
void SetTiger1(char X[][1000], int& rTiger, int& cTiger, int& flT)
{
	//Row1
	X[rTiger][cTiger] = '(';
	X[rTiger][cTiger + 1] = '^';
	X[rTiger][cTiger + 2] = '\\';
	X[rTiger][cTiger + 3] = '-';
	X[rTiger][cTiger + 4] = '=';
	X[rTiger][cTiger + 5] = '=';
	X[rTiger][cTiger + 6] = '-';
	X[rTiger][cTiger + 7] = '/';
	X[rTiger][cTiger + 8] = '^';
	X[rTiger][cTiger + 9] = ')';

	//Row2
	X[rTiger + 1][cTiger] = '<';
	X[rTiger + 1][cTiger + 1] = '\\';
	X[rTiger + 1][cTiger + 2] = '\\';
	X[rTiger + 1][cTiger + 4] = '=';
	X[rTiger + 1][cTiger + 5] = '=';
	X[rTiger + 1][cTiger + 7] = '/';
	X[rTiger + 1][cTiger + 8] = '/';
	X[rTiger + 1][cTiger + 9] = '<';

	//Row3
	X[rTiger + 2][cTiger - 1] = ':';
	X[rTiger + 2][cTiger] = '=';
	X[rTiger + 2][cTiger + 1] = '=';
	X[rTiger + 2][cTiger + 3] = 'q';
	X[rTiger + 2][cTiger + 5] = '"';
	X[rTiger + 2][cTiger + 7] = 'p';
	X[rTiger + 2][cTiger + 9] = '=';
	X[rTiger + 2][cTiger + 10] = '=';
	X[rTiger + 2][cTiger + 11] = ':';
	X[rTiger + 2][cTiger + 18] = '_';
	X[rTiger + 2][cTiger + 19] = ',';
	X[rTiger + 2][cTiger + 20] = '.';
	X[rTiger + 2][cTiger + 21] = '-';
	X[rTiger + 2][cTiger + 22] = '-';
	X[rTiger + 2][cTiger + 23] = '-';
	X[rTiger + 2][cTiger + 24] = '.';
	X[rTiger + 2][cTiger + 25] = '.';
	X[rTiger + 2][cTiger + 26] = '_';

	//Row4
	X[rTiger + 3][cTiger] = '.';
	X[rTiger + 3][cTiger + 1] = '_';
	X[rTiger + 3][cTiger + 2] = '_';
	X[rTiger + 3][cTiger + 4] = 'q';
	X[rTiger + 3][cTiger + 5] = 'p';
	X[rTiger + 3][cTiger + 7] = '_';
	X[rTiger + 3][cTiger + 8] = '_';
	X[rTiger + 3][cTiger + 9] = '.';
	X[rTiger + 3][cTiger + 11] = '~';
	X[rTiger + 3][cTiger + 12] = '.';
	X[rTiger + 3][cTiger + 13] = '-';
	X[rTiger + 3][cTiger + 14] = '"';
	X[rTiger + 3][cTiger + 15] = '"';
	X[rTiger + 3][cTiger + 16] = '"';
	X[rTiger + 3][cTiger + 17] = '\\';
	X[rTiger + 3][cTiger + 21] = '|';
	X[rTiger + 3][cTiger + 25] = '|';
	X[rTiger + 3][cTiger + 26] = '"';
	X[rTiger + 3][cTiger + 27] = '"';
	X[rTiger + 3][cTiger + 28] = '.';
	X[rTiger + 3][cTiger + 29] = '.';

	//Row5
	X[rTiger + 4][cTiger + 3] = '^';
	X[rTiger + 4][cTiger + 4] = '-';
	X[rTiger + 4][cTiger + 5] = '-';
	X[rTiger + 4][cTiger + 6] = '^';
	X[rTiger + 4][cTiger + 9] = '|';
	X[rTiger + 4][cTiger + 11] = '|';
	X[rTiger + 4][cTiger + 13] = '\\';
	X[rTiger + 4][cTiger + 16] = '\\';
	X[rTiger + 4][cTiger + 18] = '|';
	X[rTiger + 4][cTiger + 22] = ',';
	X[rTiger + 4][cTiger + 24] = '|';
	X[rTiger + 4][cTiger + 25] = '|';
	X[rTiger + 4][cTiger + 27] = '/';
	X[rTiger + 4][cTiger + 30] = '"';
	X[rTiger + 4][cTiger + 31] = '-';
	X[rTiger + 4][cTiger + 32] = '.';
	X[rTiger + 4][cTiger + 34] = '_';
	X[rTiger + 4][cTiger + 35] = '_';
	X[rTiger + 4][cTiger + 36] = '_';
	X[rTiger + 4][cTiger + 37] = '_';
	X[rTiger + 4][cTiger + 38] = '_';
	X[rTiger + 4][cTiger + 39] = '_';
	X[rTiger + 4][cTiger + 40] = '_';
	X[rTiger + 4][cTiger + 42] = '.';
	X[rTiger + 4][cTiger + 43] = '"';
	X[rTiger + 4][cTiger + 44] = ':';

	//Row6
	X[rTiger + 5][cTiger + 4] = ';';
	X[rTiger + 5][cTiger + 5] = '|';
	X[rTiger + 5][cTiger + 8] = '|';
	X[rTiger + 5][cTiger + 10] = '|';
	X[rTiger + 5][cTiger + 14] = '|';
	X[rTiger + 5][cTiger + 16] = '|';
	X[rTiger + 5][cTiger + 21] = '|';
	X[rTiger + 5][cTiger + 22] = '/';
	X[rTiger + 5][cTiger + 25] = '.';
	X[rTiger + 5][cTiger + 26] = '^';
	X[rTiger + 5][cTiger + 27] = '-';
	X[rTiger + 5][cTiger + 28] = '.';
	X[rTiger + 5][cTiger + 29] = '/';
	X[rTiger + 5][cTiger + 31] = '_';
	X[rTiger + 5][cTiger + 32] = ')';
	X[rTiger + 5][cTiger + 33] = '_';
	X[rTiger + 5][cTiger + 34] = ')';
	X[rTiger + 5][cTiger + 35] = '_';
	X[rTiger + 5][cTiger + 36] = '_';
	X[rTiger + 5][cTiger + 37] = ')';
	X[rTiger + 5][cTiger + 38] = ')';
	X[rTiger + 5][cTiger + 39] = '_';
	X[rTiger + 5][cTiger + 40] = ')';
	X[rTiger + 5][cTiger + 41] = '.';
	X[rTiger + 5][cTiger + 42] = '_';
	X[rTiger + 5][cTiger + 43] = '.';
	X[rTiger + 5][cTiger + 44] = '"';

	//Row7
	X[rTiger + 6][cTiger + 3] = '/';
	X[rTiger + 6][cTiger + 5] = '\\';
	X[rTiger + 6][cTiger + 7] = '/';
	X[rTiger + 6][cTiger + 14] = '|';
	X[rTiger + 6][cTiger + 21] = '\\';
	X[rTiger + 6][cTiger + 23] = '/';
	X[rTiger + 6][cTiger + 26] = '{';
	X[rTiger + 6][cTiger + 27] = '/';
	X[rTiger + 6][cTiger + 29] = '\\';

	//Row8
	X[rTiger + 7][cTiger + 2] = '`';
	X[rTiger + 7][cTiger + 3] = '\\';
	X[rTiger + 7][cTiger + 4] = '_';
	X[rTiger + 7][cTiger + 6] = '\\';
	X[rTiger + 7][cTiger + 10] = '\\';
	X[rTiger + 7][cTiger + 18] = ',';
	X[rTiger + 7][cTiger + 19] = '.';
	X[rTiger + 7][cTiger + 20] = '-';
	X[rTiger + 7][cTiger + 21] = '-';
	X[rTiger + 7][cTiger + 22] = '`';
	X[rTiger + 7][cTiger + 23] = '\\';
	X[rTiger + 7][cTiger + 25] = '_';
	X[rTiger + 7][cTiger + 27] = ')';
	X[rTiger + 7][cTiger + 29] = '_';
	X[rTiger + 7][cTiger + 30] = '/';
	X[rTiger + 7][cTiger + 31] = '\\';

	//Row9
	X[rTiger + 8][cTiger + 5] = '|';
	X[rTiger + 8][cTiger + 7] = '\\';
	X[rTiger + 8][cTiger + 8] = '-';
	X[rTiger + 8][cTiger + 10] = '|';
	X[rTiger + 8][cTiger + 11] = '`';
	X[rTiger + 8][cTiger + 12] = '-';
	X[rTiger + 8][cTiger + 13] = '-';
	X[rTiger + 8][cTiger + 14] = '-';
	X[rTiger + 8][cTiger + 15] = '"';
	X[rTiger + 8][cTiger + 16] = '"';
	X[rTiger + 8][cTiger + 17] = '"';
	X[rTiger + 8][cTiger + 24] = '|';
	X[rTiger + 8][cTiger + 27] = '|';
	X[rTiger + 8][cTiger + 28] = '\\';
	X[rTiger + 8][cTiger + 31] = '|';

	//Row10
	X[rTiger + 9][cTiger + 5] = '|';
	X[rTiger + 9][cTiger + 7] = '|';
	X[rTiger + 9][cTiger + 8] = '|';
	X[rTiger + 9][cTiger + 10] = '|';
	X[rTiger + 9][cTiger + 24] = '|';
	X[rTiger + 9][cTiger + 27] = '|';
	X[rTiger + 9][cTiger + 29] = '|';
	X[rTiger + 9][cTiger + 30] = '-';
	X[rTiger + 9][cTiger + 31] = '|';

	//Row11
	X[rTiger + 10][cTiger + 5] = '|';
	X[rTiger + 10][cTiger + 7] = '|';
	X[rTiger + 10][cTiger + 8] = '|';
	X[rTiger + 10][cTiger + 10] = '|';
	X[rTiger + 10][cTiger + 24] = '|';
	X[rTiger + 10][cTiger + 27] = '|';
	X[rTiger + 10][cTiger + 29] = '|';
	X[rTiger + 10][cTiger + 31] = '|';

	//Row12
	X[rTiger + 10][cTiger + 5] = 'd';
	X[rTiger + 10][cTiger + 6] = 'd';
	X[rTiger + 10][cTiger + 7] = '`';
	X[rTiger + 10][cTiger + 8] = 'd';
	X[rTiger + 10][cTiger + 9] = 'd';
	X[rTiger + 10][cTiger + 10] = 'd';
	X[rTiger + 10][cTiger + 11] = '`';
	X[rTiger + 10][cTiger + 24] = 'd';
	X[rTiger + 10][cTiger + 25] = 'd';
	X[rTiger + 10][cTiger + 26] = 'd';
	X[rTiger + 10][cTiger + 27] = '`';
	X[rTiger + 10][cTiger + 29] = 'd';
	X[rTiger + 10][cTiger + 30] = 'd';
	X[rTiger + 10][cTiger + 31] = 'd';
	X[rTiger + 10][cTiger + 32] = '`';

	flT = 1;
}
void SetTiger2(char X[][1000], int& rTiger, int& cTiger, int& flT)
{
	//Row1
	X[rTiger][cTiger] = '(';
	X[rTiger][cTiger + 1] = '^';
	X[rTiger][cTiger + 2] = '\\';
	X[rTiger][cTiger + 3] = '-';
	X[rTiger][cTiger + 4] = '=';
	X[rTiger][cTiger + 5] = '=';
	X[rTiger][cTiger + 6] = '-';
	X[rTiger][cTiger + 7] = '/';
	X[rTiger][cTiger + 8] = '^';
	X[rTiger][cTiger + 9] = ')';

	//Row2
	X[rTiger + 1][cTiger] = '<';
	X[rTiger + 1][cTiger + 1] = '\\';
	X[rTiger + 1][cTiger + 2] = '\\';
	X[rTiger + 1][cTiger + 4] = '=';
	X[rTiger + 1][cTiger + 5] = '=';
	X[rTiger + 1][cTiger + 7] = '/';
	X[rTiger + 1][cTiger + 8] = '/';
	X[rTiger + 1][cTiger + 9] = '<';

	//Row3
	X[rTiger + 2][cTiger - 1] = ':';
	X[rTiger + 2][cTiger] = '=';
	X[rTiger + 2][cTiger + 1] = '=';
	X[rTiger + 2][cTiger + 3] = 'q';
	X[rTiger + 2][cTiger + 5] = '"';
	X[rTiger + 2][cTiger + 7] = 'p';
	X[rTiger + 2][cTiger + 9] = '=';
	X[rTiger + 2][cTiger + 10] = '=';
	X[rTiger + 2][cTiger + 11] = ':';
	X[rTiger + 2][cTiger + 18] = '_';
	X[rTiger + 2][cTiger + 19] = ',';
	X[rTiger + 2][cTiger + 20] = '.';
	X[rTiger + 2][cTiger + 21] = '-';
	X[rTiger + 2][cTiger + 22] = '-';
	X[rTiger + 2][cTiger + 23] = '-';
	X[rTiger + 2][cTiger + 24] = '.';
	X[rTiger + 2][cTiger + 25] = '.';
	X[rTiger + 2][cTiger + 26] = '_';

	//Row4
	X[rTiger + 3][cTiger] = '.';
	X[rTiger + 3][cTiger + 1] = '_';
	X[rTiger + 3][cTiger + 2] = '_';
	X[rTiger + 3][cTiger + 4] = 'q';
	X[rTiger + 3][cTiger + 5] = 'p';
	X[rTiger + 3][cTiger + 7] = '_';
	X[rTiger + 3][cTiger + 8] = '_';
	X[rTiger + 3][cTiger + 9] = '.';
	X[rTiger + 3][cTiger + 11] = '~';
	X[rTiger + 3][cTiger + 12] = '.';
	X[rTiger + 3][cTiger + 13] = '-';
	X[rTiger + 3][cTiger + 14] = '"';
	X[rTiger + 3][cTiger + 15] = '"';
	X[rTiger + 3][cTiger + 16] = '"';
	X[rTiger + 3][cTiger + 17] = '\\';
	X[rTiger + 3][cTiger + 21] = '|';
	X[rTiger + 3][cTiger + 25] = '|';
	X[rTiger + 3][cTiger + 26] = '"';
	X[rTiger + 3][cTiger + 27] = '"';
	X[rTiger + 3][cTiger + 28] = '.';
	X[rTiger + 3][cTiger + 29] = '.';

	//Row5
	X[rTiger + 4][cTiger + 3] = '^';
	X[rTiger + 4][cTiger + 4] = '-';
	X[rTiger + 4][cTiger + 5] = '-';
	X[rTiger + 4][cTiger + 6] = '^';
	X[rTiger + 4][cTiger + 9] = '|';
	X[rTiger + 4][cTiger + 11] = '|';
	X[rTiger + 4][cTiger + 13] = '\\';
	X[rTiger + 4][cTiger + 16] = '\\';
	X[rTiger + 4][cTiger + 18] = '|';
	X[rTiger + 4][cTiger + 22] = ',';
	X[rTiger + 4][cTiger + 24] = '|';
	X[rTiger + 4][cTiger + 25] = '|';
	X[rTiger + 4][cTiger + 27] = '/';
	X[rTiger + 4][cTiger + 30] = '"';
	X[rTiger + 4][cTiger + 31] = '-';
	X[rTiger + 4][cTiger + 32] = '.';
	X[rTiger + 4][cTiger + 34] = '_';
	X[rTiger + 4][cTiger + 35] = '_';
	X[rTiger + 4][cTiger + 36] = '_';
	X[rTiger + 4][cTiger + 37] = '_';
	X[rTiger + 4][cTiger + 38] = '_';
	X[rTiger + 4][cTiger + 39] = '_';
	X[rTiger + 4][cTiger + 40] = '_';
	X[rTiger + 4][cTiger + 42] = '.';
	X[rTiger + 4][cTiger + 43] = '"';
	X[rTiger + 4][cTiger + 44] = ':';

	//Row6
	X[rTiger + 5][cTiger + 4] = ';';
	X[rTiger + 5][cTiger + 5] = '|';
	X[rTiger + 5][cTiger + 8] = '|';
	X[rTiger + 5][cTiger + 10] = '|';
	X[rTiger + 5][cTiger + 14] = '|';
	X[rTiger + 5][cTiger + 16] = '|';
	X[rTiger + 5][cTiger + 21] = '|';
	X[rTiger + 5][cTiger + 22] = '/';
	X[rTiger + 5][cTiger + 25] = '.';
	X[rTiger + 5][cTiger + 26] = '^';
	X[rTiger + 5][cTiger + 27] = '-';
	X[rTiger + 5][cTiger + 28] = '.';
	X[rTiger + 5][cTiger + 29] = '/';
	X[rTiger + 5][cTiger + 31] = '_';
	X[rTiger + 5][cTiger + 32] = ')';
	X[rTiger + 5][cTiger + 33] = '_';
	X[rTiger + 5][cTiger + 34] = ')';
	X[rTiger + 5][cTiger + 35] = '_';
	X[rTiger + 5][cTiger + 36] = '_';
	X[rTiger + 5][cTiger + 37] = ')';
	X[rTiger + 5][cTiger + 38] = ')';
	X[rTiger + 5][cTiger + 39] = '_';
	X[rTiger + 5][cTiger + 40] = ')';
	X[rTiger + 5][cTiger + 41] = '.';
	X[rTiger + 5][cTiger + 42] = '_';
	X[rTiger + 5][cTiger + 43] = '.';
	X[rTiger + 5][cTiger + 44] = '"';

	//Row7
	X[rTiger + 6][cTiger + 3] = '/';
	X[rTiger + 6][cTiger + 5] = '\\';
	X[rTiger + 6][cTiger + 7] = '/';
	X[rTiger + 6][cTiger + 14] = '|';
	X[rTiger + 6][cTiger + 21] = '\\';
	X[rTiger + 6][cTiger + 23] = '/';
	X[rTiger + 6][cTiger + 26] = '{';
	X[rTiger + 6][cTiger + 27] = '/';
	X[rTiger + 6][cTiger + 29] = '\\';

	//Row8
	X[rTiger + 7][cTiger - 1] = '.';
	X[rTiger + 7][cTiger] = '.';
	X[rTiger + 7][cTiger + 1] = '-';
	X[rTiger + 7][cTiger + 2] = '`';
	X[rTiger + 7][cTiger + 3] = '\\';
	X[rTiger + 7][cTiger + 4] = '_';
	X[rTiger + 7][cTiger + 6] = '\\';
	X[rTiger + 7][cTiger + 10] = '\\';
	X[rTiger + 7][cTiger + 18] = ',';
	X[rTiger + 7][cTiger + 19] = '.';
	X[rTiger + 7][cTiger + 20] = '-';
	X[rTiger + 7][cTiger + 21] = '-';
	X[rTiger + 7][cTiger + 22] = '`';
	X[rTiger + 7][cTiger + 23] = '\\';
	X[rTiger + 7][cTiger + 25] = '_';
	X[rTiger + 7][cTiger + 27] = ')';
	X[rTiger + 7][cTiger + 29] = '_';
	X[rTiger + 7][cTiger + 30] = '/';
	X[rTiger + 7][cTiger + 31] = '\\';

	//Row9
	X[rTiger + 8][cTiger - 2] = '|';
	X[rTiger + 8][cTiger + 1] = ',';
	X[rTiger + 8][cTiger + 2] = '_';
	X[rTiger + 8][cTiger + 3] = '.';
	X[rTiger + 8][cTiger + 4] = '.';
	X[rTiger + 8][cTiger + 5] = '/';
	X[rTiger + 8][cTiger + 7] = '\\';
	X[rTiger + 8][cTiger + 8] = '-';
	X[rTiger + 8][cTiger + 10] = '|';
	X[rTiger + 8][cTiger + 11] = '`';
	X[rTiger + 8][cTiger + 12] = '-';
	X[rTiger + 8][cTiger + 13] = '-';
	X[rTiger + 8][cTiger + 14] = '-';
	X[rTiger + 8][cTiger + 15] = '"';
	X[rTiger + 8][cTiger + 16] = '"';
	X[rTiger + 8][cTiger + 17] = '"';
	X[rTiger + 8][cTiger + 24] = '`';
	X[rTiger + 8][cTiger + 25] = '-';
	X[rTiger + 8][cTiger + 26] = '/';
	X[rTiger + 8][cTiger + 28] = '\\';
	X[rTiger + 8][cTiger + 31] = '|';

	//Row10
	X[rTiger + 9][cTiger - 1] = '-';
	X[rTiger + 9][cTiger] = '-';
	X[rTiger + 9][cTiger + 8] = '|';
	X[rTiger + 9][cTiger + 10] = '|';
	X[rTiger + 9][cTiger + 23] = '/';
	X[rTiger + 9][cTiger + 24] = '_';
	X[rTiger + 9][cTiger + 25] = '.';
	X[rTiger + 9][cTiger + 29] = '|';
	X[rTiger + 9][cTiger + 30] = '-';
	X[rTiger + 9][cTiger + 31] = '|';

	//Row11
	X[rTiger + 10][cTiger + 8] = '|';
	X[rTiger + 10][cTiger + 10] = '|';
	X[rTiger + 10][cTiger + 23] = '\\';
	X[rTiger + 10][cTiger + 25] = ')';
	X[rTiger + 10][cTiger + 29] = '|';
	X[rTiger + 10][cTiger + 31] = '|';

	//Row12
	X[rTiger + 11][cTiger + 8] = 'd';
	X[rTiger + 10][cTiger + 9] = 'd';
	X[rTiger + 10][cTiger + 10] = 'd';
	X[rTiger + 10][cTiger + 11] = '`';
	X[rTiger + 10][cTiger + 24] = '-';
	X[rTiger + 10][cTiger + 25] = '-';
	X[rTiger + 10][cTiger + 29] = 'd';
	X[rTiger + 10][cTiger + 30] = 'd';
	X[rTiger + 10][cTiger + 31] = 'd';
	X[rTiger + 10][cTiger + 32] = '`';

	flT = 0;
}
void MoveTiger(char X[][1000], int& rTiger, int& cTiger)
{
	cTiger--;
}
void SetPill(char X[][1000], int& rPill, int& cPill)
{
	//Row1
	X[rPill][cPill] = '_';
	X[rPill][cPill + 1] = '_';
	X[rPill][cPill + 2] = '_';
	X[rPill][cPill + 3] = '_';
	X[rPill][cPill + 4] = '_';

	//Row2
	X[rPill + 1][cPill - 1] = '[';
	X[rPill + 1][cPill] = 'I';
	X[rPill + 1][cPill + 1] = 'I';
	X[rPill + 1][cPill + 2] = 'I';
	X[rPill + 1][cPill + 3] = 'I';
	X[rPill + 1][cPill + 4] = 'I';
	X[rPill + 1][cPill + 5] = ']';

	//Row3
	X[rPill + 2][cPill] = ')';
	X[rPill + 2][cPill + 1] = '"';
	X[rPill + 2][cPill + 2] = '"';
	X[rPill + 2][cPill + 3] = '"';
	X[rPill + 2][cPill + 4] = '(';

	//Row4
	X[rPill + 3][cPill - 1] = '/';
	X[rPill + 3][cPill + 5] = '\\';

	//Row5
	X[rPill + 4][cPill - 2] = '/';
	X[rPill + 4][cPill + 6] = '\\';

	//Row6
	X[rPill + 5][cPill - 2] = '|';
	X[rPill + 5][cPill - 1] = '`';
	X[rPill + 5][cPill] = '-';
	X[rPill + 5][cPill + 1] = '.';
	X[rPill + 5][cPill + 2] = '.';
	X[rPill + 5][cPill + 3] = '.';
	X[rPill + 5][cPill + 4] = '-';
	X[rPill + 5][cPill + 5] = '`';
	X[rPill + 5][cPill + 6] = '|';

	//Row7
	X[rPill + 6][cPill - 2] = '|';
	X[rPill + 6][cPill - 1] = 'a';
	X[rPill + 6][cPill] = 's';
	X[rPill + 6][cPill + 1] = 'p';
	X[rPill + 6][cPill + 2] = 'i';
	X[rPill + 6][cPill + 3] = 'r';
	X[rPill + 6][cPill + 4] = 'i';
	X[rPill + 6][cPill + 5] = 'n';
	X[rPill + 6][cPill + 6] = '|';

	//Row8
	X[rPill + 7][cPill - 4] = '_';
	X[rPill + 7][cPill - 2] = '|';
	X[rPill + 7][cPill - 1] = '`';
	X[rPill + 7][cPill] = '-';
	X[rPill + 7][cPill + 1] = '.';
	X[rPill + 7][cPill + 2] = '.';
	X[rPill + 7][cPill + 3] = '.';
	X[rPill + 7][cPill + 4] = '-';
	X[rPill + 7][cPill + 5] = '`';
	X[rPill + 7][cPill + 6] = 'j';

	//Row9
	X[rPill + 8][cPill - 5] = '(';
	X[rPill + 7][cPill - 4] = '\\';
	X[rPill + 7][cPill - 3] = ')';
	X[rPill + 7][cPill - 2] = '`';
	X[rPill + 7][cPill - 1] = '-';
	X[rPill + 7][cPill] = '.';
	X[rPill + 7][cPill + 1] = '_';
	X[rPill + 7][cPill + 2] = '_';
	X[rPill + 7][cPill + 3] = '_';
	X[rPill + 7][cPill + 4] = '.';
	X[rPill + 7][cPill + 5] = '(';
	X[rPill + 7][cPill + 6] = 'I';
	X[rPill + 7][cPill + 7] = ')';
}
void SetHorse1(char X[][1000], int& rHorse, int& cHorse, int& HorseFl)
{
	//Row1
	X[rHorse][cHorse + 9] = '.';
	X[rHorse][cHorse + 10] = '`';
	X[rHorse][cHorse + 11] = '`';

	//Row2
	X[rHorse + 1][cHorse] = '.';
	X[rHorse + 1][cHorse + 1] = '_';
	X[rHorse + 1][cHorse + 2] = '.';
	X[rHorse + 1][cHorse + 3] = '-';
	X[rHorse + 1][cHorse + 4] = '.';
	X[rHorse + 1][cHorse + 5] = '_';
	X[rHorse + 1][cHorse + 6] = '_';
	X[rHorse + 1][cHorse + 7] = '_';
	X[rHorse + 1][cHorse + 8] = '.';
	X[rHorse + 1][cHorse + 9] = '`';
	X[rHorse + 1][cHorse + 11] = '(';
	X[rHorse + 1][cHorse + 12] = '`';
	X[rHorse + 1][cHorse + 13] = '\\';

	//Row3
	X[rHorse + 2][cHorse - 1] = '/';
	X[rHorse + 2][cHorse] = '/';
	X[rHorse + 2][cHorse + 1] = '(';
	X[rHorse + 2][cHorse + 9] = '(';
	X[rHorse + 2][cHorse + 11] = '`';
	X[rHorse + 2][cHorse + 12] = '"';

	//Row4
	X[rHorse + 3][cHorse - 2] = '`';
	X[rHorse + 3][cHorse - 1] = '/';
	X[rHorse + 3][cHorse + 1] = ')';
	X[rHorse + 3][cHorse + 2] = '\\';
	X[rHorse + 3][cHorse + 4] = ')';
	X[rHorse + 3][cHorse + 5] = '.';
	X[rHorse + 3][cHorse + 6] = '_';
	X[rHorse + 3][cHorse + 7] = '_';
	X[rHorse + 3][cHorse + 8] = '.';
	X[rHorse + 3][cHorse + 10] = ')';

	//Row5
	X[rHorse + 4][cHorse - 2] = '`';
	X[rHorse + 4][cHorse + 1] = '|';
	X[rHorse + 4][cHorse + 3] = '|';
	X[rHorse + 4][cHorse + 8] = '|';
	X[rHorse + 4][cHorse + 10] = '|';

	//Row6
	X[rHorse + 5][cHorse + 1] = '|';
	X[rHorse + 5][cHorse + 3] = '|';
	X[rHorse + 5][cHorse + 8] = '|';
	X[rHorse + 5][cHorse + 10] = '|';

	HorseFl = 1;


}
void SetHorse2(char X[][1000], int& rHorse, int& cHorse, int& HorseFl)
{
	//Row1
	X[rHorse][cHorse + 9] = '.';
	X[rHorse][cHorse + 10] = '`';
	X[rHorse][cHorse + 11] = '`';

	//Row2
	X[rHorse + 1][cHorse] = '.';
	X[rHorse + 1][cHorse + 1] = '_';
	X[rHorse + 1][cHorse + 2] = '.';
	X[rHorse + 1][cHorse + 3] = '-';
	X[rHorse + 1][cHorse + 4] = '.';
	X[rHorse + 1][cHorse + 5] = '_';
	X[rHorse + 1][cHorse + 6] = '_';
	X[rHorse + 1][cHorse + 7] = '_';
	X[rHorse + 1][cHorse + 8] = '.';
	X[rHorse + 1][cHorse + 9] = '`';
	X[rHorse + 1][cHorse + 11] = '(';
	X[rHorse + 1][cHorse + 12] = '`';
	X[rHorse + 1][cHorse + 13] = '\\';

	//Row3
	X[rHorse + 2][cHorse - 1] = '/';
	X[rHorse + 2][cHorse] = '/';
	X[rHorse + 2][cHorse + 1] = '(';
	X[rHorse + 2][cHorse + 9] = '(';
	X[rHorse + 2][cHorse + 11] = '`';
	X[rHorse + 2][cHorse + 12] = '"';

	//Row4
	X[rHorse + 3][cHorse - 2] = '`';
	X[rHorse + 3][cHorse - 1] = '/';
	X[rHorse + 3][cHorse + 1] = ')';
	X[rHorse + 3][cHorse + 2] = '\\';
	X[rHorse + 3][cHorse + 4] = ')';
	X[rHorse + 3][cHorse + 5] = '.';
	X[rHorse + 3][cHorse + 6] = '_';
	X[rHorse + 3][cHorse + 7] = '_';
	X[rHorse + 3][cHorse + 8] = '.';
	X[rHorse + 3][cHorse + 10] = ')';

	//Row5
	X[rHorse + 4][cHorse - 2] = '`';
	X[rHorse + 4][cHorse] = '<';
	X[rHorse + 4][cHorse + 1] = '`';
	X[rHorse + 4][cHorse + 3] = '`';
	X[rHorse + 4][cHorse + 4] = '\\';
	X[rHorse + 4][cHorse + 6] = '.';
	X[rHorse + 4][cHorse + 7] = '_';
	X[rHorse + 4][cHorse + 8] = '/';
	X[rHorse + 4][cHorse + 9] = '"';
	X[rHorse + 4][cHorse + 10] = '\\';

	//Row6
	X[rHorse + 5][cHorse + 1] = '`';
	X[rHorse + 5][cHorse + 5] = '\\';
	X[rHorse + 5][cHorse + 11] = '\\';

	HorseFl = 0;
}
void AutoMoveHorse(char X[][1000], int& rHorse, int& cHorse, int& rHorse2, int& cHorse2, int& HorseFl)
{
	if (cHorse2 < 1000)
	{
		cHorse += 3;
		cHorse2 += 3;
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void main()
{
	// Array

	char X[50][1000];

	//design

	int dE = 120;
	int dS = 0;

	//Hero

	int rH = 45, cH = -3;
	int draw = 0;
	int draw2 = 0;
	int heroflag = 0;
	char drawhero;
	int heronormal = 0;

	//Landscape

	int rla = 22, cla = 10;

	//Health1-2-3

	int rHe = 2, cHe = 90;
	int rHe2 = 2, cHe2 = 100;
	int rHe3 = 2, cHe3 = 110;
	int flagh1 = 0, flagh2 = 1, flagh3 = 2;
	int varhealth = 0;
	int drawhealth = 0;

	//Dialog Box

	int rD = 44, cD = 9;
	int sfl = 0;

	//Level

	int rL = 2, cL = 2;
	char a = 49;
	int once = 0;

	//title

	int rT = 1, cT = 50;

	//Palm Tree

	int rPa = 48, cPa = 230;

	// monkey

	int RMonkey = 25;
	int CMonkey = 225;
	int RThrow = 26;
	int CThrow = 222;
	int flagApple = 0;

	//apple

	int RApple = 46;
	int CApple = 0;

	//hero to kill monkey 

	char ChMonkey;
	int flagMonkey = 0;

	//Box

	int rB = 45, cB = 20;
	int f = 1;
	int fla = 1;

	//PopBox

	int rP = 38, cP = 18;
	int pfl = 0;

	//Pistol

	int rG = 47, cG = 19;

	//getch

	char k;

	//Sun

	int rS = 5, cS = 9;

	//Enemy Lance

	int rEN = 44, cEN = 98;
	int rEN2 = 45, cEN2 = 95;
	int enemyappear = 0;

	//Lance

	int rlance = 48, clance = 95;
	int drawlance = 0;
	int varlance = 93;
	int lanceonce = 0;
	int drawlance2 = 0;

	// enemy biker

	int rbike = 48, cbike = 70;
	int enablebike = 0;
	int flmb = 0;
	int bikeonce = 0;
	int bikerflag = 0;

	//Enemy Shoot

	int renemy = 46, cenemy = 88;
	int ebflag = 0;
	int cenemyonce = 0;

	//Jump

	int flag = 0;

	//Jump right

	int flag1 = 0;
	int posr = 0;

	//Jump Left

	int flag2 = 0;

	//singlebullet

	int rsb = 0, csb = 0;
	int fbu = 0;
	char chbu;
	int dir = 0;
	int sbflag = 0;

	//multibullet

	int M[200][2];
	int rmb = 0;
	int var = 0;
	int var2 = 0;
	int enablemulti = 0;

	//gravity 

	char gch;
	int gflag;

	//scroll

	char scroll;

	//Elevator

	int rel = 45, cel = 243;
	int felev = 0;
	int posele;

	//ship 

	int rship = 48, cship = 250;

	//gymnastic

	int rgym = 48, cgym = 175;
	int flgym = 0;
	int movegym = 0;
	int flaggym = 0;
	int rbar = 43, cbar = 180;
	int flagbar = 173;
	int flagmovebar = 0;
	int drawgym = 0;
	int drawbar = 0;
	int cbaronce = 0;

	//hero health after killing gymnastic

	int rheal = 48, cheal = 180;
	int drawgymheal = 0;
	int healonce = 0;

	//TMNT & Rocket

	int rtmnt = 48, ctmnt = 125;
	int rrock = 48, crock = 145;
	int drawrocket = 0;

	// hero to launch rocket

	int rexp = 38, cexp = 125;
	int drawpop = 0;
	char chexp;

	//plane 

	int rplane = 20, cplane = 145;
	int rplane2 = 18, cplane2 = 145;
	int moveplane = 0;
	int drawplane = 0;

	//key drop

	int rkey = 22, ckey = 145;
	int drawkey = 0;

	//Bowling enemy

	int rebowl = 41, cebowl = 252;
	int rball = 41, cball = 252;
	int drawbowling = 0;
	int drawball = 0;
	int drawenemybowling = 0;
	int oncebowl = 0;

	//dragon 

	int rdrag = 5, cdrag = 375;
	int fldragon = 0;
	int drawbigdragon = 0;
	int rF = 5, cF = 410;
	int fldragon2 = 0;

	//enemy dragon
	int rendrag1 = 30, cendrag1 = 490;
	int rendrag2 = 30, cendrag2 = 490;
	int enemyDrFlag = 0;
	int Drawfinaldragon = 0;


	// hero dragon

	int rDr = 40, cDr = 40;
	int BDflag = 0;
	int rDrH = 41, cDrH = 40;
	int rDrF = 45, cDrF = 48;
	int drflag = 0;
	int rdf = 40, cdf = 48;
	int varD = 15;
	int dragonflag = 0;
	char chdr;
	int DrScrollf = 0;
	int flagDragononce = 0;
	int chdr2;

	//Dragon shooting
	char chdrb;
	int fdrb = 0;
	int rdrb = 0, cdrb = 0;
	int sdrflag = 0;

	//FlyingBox
	int rFB = 5, cFB = 410;
	int drawflyingbox = 0;
	int boxchange = 0;
	int drawbigdragononce = 0;

	//Laser
	char chdrL;
	int L[10][2];
	int rLas = 0;
	int varL = 0;
	int varL2 = 0;
	int enablelaser = 0;
	int LaserFlag = 0;

	//Crown
	int Rcrown = 35, Ccrown = 390;
	int CrownFlag = 0;

	//TigerKing
	int rTiger = 37, cTiger = 400;
	int rTiger2 = 37, cTiger2 = 400;
	int flT = 0;

	//Pill
	int rPill = 41, cPill = 0;
	int PillFl = 0;

	//Horse
	int rHorse = 42, cHorse = 0;
	int rHorse2 = 42, cHorse2 = 0;
	int HorseFl = 0;

	//break
	int flagkbhit = 0;


	for (; ; )
	{
		for (; !kbhit(); )
		{
			//design of the screen
			DesignMyScreen(X);

			//Level + its ascii num
			Set_Level(X, rL, cL, a);

			if (cH == 120 && once == 0 || cdf == 120 && once == 0)
			{
				a++;
				once = 1;
			}
			if (cH == 240 && once == 1 || cdf == 240 && once == 1)
			{
				a++;
				once = 2;
			}
			if (cH == 360 && once == 2 || cdf == 360 && once == 2)
			{
				a++;
				once = 3;
			}
			if (cH == 480 && once == 3 || cdf == 480 && once == 3)
			{
				a++;
				once = 4;
			}
			if (cH == 600 && once == 4 || cdf == 600 && once == 4)
			{
				a++;
				once = 5;
			}

			// enemy bowling

			if (cH == cebowl - 25 && oncebowl == 0)
			{
				drawenemybowling = 1;
				oncebowl = 1;
			}

			if (drawenemybowling == 0)
			{
				enemybowling1(X, rebowl, cebowl, drawbowling);
			}

			if (drawenemybowling == 1)
			{
				if (drawbowling == 2 || drawbowling == 3)
				{
					enemybowling2(X, rebowl, cebowl, drawbowling);
				}

				if (drawbowling == 3)
				{
					bowlingball(X, rball, cball);
					moveball(X, rball, cball);
				}
			}

			if (cball - 1 == cH + 3)
			{
				drawbowling = 4;
			}

			if (csb == cebowl - 2)
			{
				drawenemybowling = 0;
			}

			if (cball == cH)
			{
				varhealth++;
			}

			//Title of the display
			Set_Title(X, rT, cT);

			//Palm Tree
			Set_PalmTree(X, rPa, cPa);

			// Landscape 
			landscape(X, rla, cla);

			//ship
			ship(X, rship, cship);

			//TMNT & ROCKET
			if (drawrocket == 0)
			{
				tmnt(X, rtmnt, ctmnt);
				rocket(X, rrock, crock);

				if (cH + 3 == ctmnt - 2)
				{
					if (drawpop == 0)
						popexplode(X, rexp, cexp);
					fla = 0;
				}

				if (chexp == 'p')
				{
					moverocket(X, rrock, crock);
					drawpop = 1;
					fla = 1;
				}
			}

			if (rrock - 5 == rplane || rrock - 5 == rplane2)
			{
				drawrocket = 1;
				drawplane = 1;
			}

			//key
			if (drawrocket == 1 && drawkey == 0)
			{
				key(X, rkey, ckey);
				movekey(X, rkey, ckey);
			}

			if (cH == ckey - 2 && rH + 3 == rkey)
			{
				drawkey = 1;
				varhealth--;
			}


			//plane
			if (drawplane == 0)
			{
				if (moveplane == 0)
				{
					plane1(X, rplane, cplane, moveplane);

				}

				else
				{
					plane2(X, rplane2, cplane2, moveplane);
					moveplane = 0;
				}
			}


			//TigerKing
			if (flT == 0)
			{
				SetTiger1(X, rTiger, cTiger, flT);

			}
			else if (flT == 1)
			{
				SetTiger2(X, rTiger2, cTiger, flT);

			}

			if (cH >= cTiger - 30 && (flT == 1 || flT == 0))
			{
				MoveTiger(X, rTiger, cTiger);
			}

			if (cTiger + 3 <= csb)
			{
				flT = 2;
				sbflag = 1;
				cPill = cTiger;
				if (PillFl == 0)
				{
					SetPill(X, rPill, cPill);
				}
				if (cH == cPill + 1)
				{
					PillFl = 1;
				}
			}

			if (PillFl == 1)
			{
				cHorse = cH;
				cHorse2 = cHorse;
				if (HorseFl == 0)
				{
					SetHorse1(X, rHorse, cHorse, HorseFl);
				}
				else if (HorseFl == 1)
				{
					SetHorse2(X, rHorse2, cHorse2, HorseFl);
				}
				AutoMoveHorse(X, rHorse, cHorse, rHorse2, cHorse2, HorseFl);
			}



			//Ridable Baby Dragon
			//if(chdr2!='j')
			//{
			//	if(BDflag==0)
			//	{
			//		SetFloorDragon(X,rDr,cDr);
			//	}
			//	if (cH==cDr-15)
			//	{
			//		BDflag=1;
			//	}
			//	if(BDflag==1)
			//	{
			//		SetFloorDragon2(X,rDrH,cDrH);
			//	}
			//	if (cH==cDr-10)
			//	{
			//		BDflag=2;
			//	}
			//	if(BDflag==2)
			//	{
			//		SetFloorDragon3(X,rDrF,cDrF);
			//	}

			//		if (cH==cDrF+3)
			//		{
			//			drflag=1;
			//			fla=0;
			//		}
			//	
			//	
			//			if (drflag==1)
			//			{
			//				BDflag=900000;

			//				if(dragonflag==0)
			//				{
			//					//DrScrollf=1;
			//					SetFlyingDragon(X,rdf,cdf,dragonflag);
			//				}
			//				else
			//				{
			//					SetFlyingDragon2(X,rdf,cdf,dragonflag);
			//				}
			//				if (flagDragononce==0)
			//				{
			//					MoveDragon(X,rdf,cdf,varD,flagDragononce);
			//				}
			//	
			//					MoveDragonH(X,rdf,cdf,chdr);
			//			}
			//	}
			//
			//if(chdr2=='j')
			//{
			//	heronormal=0;
			//}


			//Giant Dragon

			if (drawbigdragon < 3)
			{
				//dragon
				if (fldragon2 == 0)
				{
					if (fldragon == 0)
					{
						Draw_Dragon1(X, rdrag, cdrag, fldragon);
					}
					else
					{
						Draw_Dragon2(X, rdrag, cdrag, fldragon);
						SetDragonFire(X, rF, cF);
					}
				}
			}

			if (drawbigdragononce == 0)
			{
				if (drawbigdragon >= 3)
				{
					drawflyingbox = 1;
					drawbigdragononce = 1;
				}
			}


			if (drawflyingbox == 1)
			{
				if (boxchange == 0)
				{
					SetFlyingBox(X, rFB, cFB);
					boxchange = 1;
				}
				else if (boxchange == 1)
				{
					SetFlyingBox2(X, rFB, cFB);
					boxchange = 0;
				}
			}

			if (cdf == cFB - 20)
			{
				drawflyingbox = 0;
				enablelaser = 1;
			}


			//Final Dragon
			if (Drawfinaldragon == 0)
			{
				if (enemyDrFlag == 0)
				{
					enemy_dragon1(X, rendrag1, cendrag1);
					enemyDrFlag = 1;
				}
				else if (enemyDrFlag == 1)
				{
					enemy_dragon2(X, rendrag2, cendrag2);
					enemyDrFlag = 0;
				}
			}

			if (CrownFlag == 1)
			{
				SetCrown(X, Rcrown, Ccrown);
				MoveCrown(X, Rcrown, Ccrown);
			}

			//Dragon Fireball

			if (chdrb == 'G')
			{
				sdrflag = 0;

				if (fdrb == 0)
				{
					rdrb = rdf + 2;
					cdrb = cdf + 27;
					fdrb = 1;
				}

				if (sdrflag == 0)
				{
					if (cdrb % 2 == 0)
					{
						SetDrBullet(X, rdrb, cdrb, chdrb);
					}
					if (cdrb % 2 != 0)
					{
						SetDrBullet2(X, rdrb, cdrb, chdrb);
					}
					MoveDrBullet(X, rdrb, cdrb, sdrflag, chdrb, fdrb, drawbigdragon);
				}

			}

			//Laser for Baby dragon
			if (enablelaser == 1)
			{
				if (chdrL == 'F')
				{

					rLas++;
					L[varL][0] = rdf + 2;
					L[varL][1] = cdf + 27;
					varL++;
				}

				for (int rrr = varL2; rrr < rLas; rrr++)
				{
					Laser(X, rdf, cdf, L, chdrL, rrr);
					movelaser(X, rdf, cdf, L, chdrL, rrr, varL2);

					if (L[rrr][1] + 2 == cendrag1 - 10)
					{
						Drawfinaldragon = 1;
						CrownFlag = 1;
					}
				}

			}

			//Gym enemy

			if (drawgym == 0)
			{
				if (flgym == 0)
				{
					gymnestic(X, rgym, cgym);
				}

				enemygym1(X, flgym, rgym, cgym);
				enemygym2(X, flgym, rgym, cgym);
				enemygym3(X, flgym, rgym, cgym);
				enemygym4(X, flgym, rgym, cgym);
				enemygym5(X, flgym, rgym, cgym);
				enemygym6(X, flgym, rgym, cgym);
				enemygym7(X, flgym, rgym, cgym);

				if (drawbar == 0)
				{
					bar(X, rbar, cbar, flgym);
					movebar1(X, rbar, cbar, flgym, cH, drawbar);
				}

				if (flagmovebar == 0)
				{
					movebar2(X, rbar, cbar, flgym, flagbar, flagmovebar);
				}

				if (movegym == 0)
				{
					if (flgym < 7 && flgym >= 0 && flaggym == 0)
					{
						flgym++;
						if (flgym == 7)
						{
							flaggym = 1;

						}
					}
					if (flaggym == 1)
					{
						flgym--;
						if (flgym == 0)
							flaggym = 0;
					}
				}
				if (cH >= (cgym - 40))
				{
					movegym = 1;
					flgym = 7;
				}
				else
					movegym = 0;
			}

			if (csb == (cgym + 2))
			{
				drawgym = 1;
				drawgymheal = 1;
			}

			//health from gymnastic

			if (cH + 3 == cheal - 1)
			{
				drawgymheal = 2;
				healonce = 1;
			}

			if (drawgymheal == 1)
			{
				if (healonce == 0)
					gymheal(X, rheal, cheal);
			}

			if (drawgymheal == 2)
			{
				if (healonce == 1)
				{
					if (varhealth > 0)
						varhealth--;
					healonce = 10;
				}
			}

			//Flag to draw box
			if (f == 1)
			{
				Set_Box(X, rB, cB);
			}

			//Hero flag to draw while standing
			if ((drflag == 0 && PillFl == 0) || chdr2 == 'j')
			{
				if (drawhero != 'a' && drawhero != 'd')
				{
					heronormal = 0;
				}

				// hero drawing moving right
				if (drawhero == 'd')
				{
					heronormal = 1;
					if (draw % 2 == 0)
					{
						SetHero_In_X2(X, rH, cH);
					}
					else if (draw % 2 != 0)
					{
						SetHero_In_X3(X, rH, cH);
					}
					draw++;
					drawhero = '.';
				}

				//hero drawing moving left
				else if (drawhero == 'a')
				{
					heronormal = 1;
					if (draw2 % 2 == 0)
					{
						SetHero_In_X4(X, rH, cH);
					}
					else if (draw2 % 2 != 0)
					{
						SetHero_In_X3(X, rH, cH);
					}
					draw2++;
					drawhero = '.';
				}

				//Hero drawing while standing
				if (heronormal == 0)
				{
					if (heroflag == 0 && gch != 'c' && gch != 'z' && gch != 'x')
					{
						SetHero_In_X(X, rH, cH);
					}
				}
			}

			//hero movement
			Move_AutoHero(X, rH, cH);

			//Dialog after hero auto enter
			if (sfl == 0)
			{
				Start_Dialog(X, rH, cH, rD, cD);
			}

			//Health of hero 1-2-3
			if (drawhealth == 0)
			{
				if (flagh1 == varhealth)
				{
					Set_health(X, rHe, cHe);
				}
				if (flagh2 == varhealth || flagh2 == varhealth + 1)
				{
					Set_health(X, rHe2, cHe2);
				}
				if (flagh3 == varhealth || flagh3 == varhealth + 1 || flagh3 == varhealth + 2)
				{
					Set_health(X, rHe3, cHe3);
				}
			}

			if (cbaronce == 0)
			{
				if (cbar == cH + 3)
				{
					varhealth++;
					cbaronce = 1;
				}
			}

			if (cenemyonce == 0)
			{
				if (cenemy == cH + 3)
				{
					varhealth++;
					cenemyonce = 1;
				}
			}

			if (bikeonce == 0)
			{
				if (cbike - 3 == cH + 3)
				{
					varhealth++;
					bikeonce = 1;
				}
			}


			//Gravity function
			while (X[rH + 4][cH + 3] == ' ' && gflag == 0)
			{
				rH++;
			}

			//Elevator
			Set_Elevator(X, rel, cel);

			//Elevaator AutoLift
			if (drawkey == 1)
			{
				Move_Elevator(X, rel, cel, felev, rH, cH, posele);
			}

			//hero in elevator
			Hero_onelevator(X, rH, cH, rel, cel, posele, gflag);

			if (cH > cel + 7 || cH < cel + 1)
			{
				gflag = 0;
			}
			else
			{
				gflag = 1;
			}

			// hero jump up
			if (gch == 'x')
			{
				gflag = 1;
				posr++;
				jump(rH, cH, gch, gflag);

				if (posr == 1)
				{
					jump1(X, rH, cH, posr);
				}
				if (posr == 2)
				{
					jump2(X, rH, cH, posr);
				}
				if (posr == 3)
				{
					jump3(X, rH, cH, posr);
				}
				if (posr == 4)
				{
					jump4(X, rH, cH, posr);
				}
				if (posr == 5)
				{
					jump5(X, rH, cH, posr);
				}
				if (posr == 6)
				{
					jump6(X, rH, cH, posr);
					posr = 0;
				}
			}

			// hero jump right
			if (gch == 'c')
			{
				gflag = 1;
				posr++;
				jumpRight(rH, cH, gch, gflag);

				if (posr == 1)
				{
					jump1(X, rH, cH, posr);
				}
				if (posr == 2)
				{
					jump2(X, rH, cH, posr);
				}
				if (posr == 3)
				{
					jump3(X, rH, cH, posr);
				}
				if (posr == 4)
				{
					jump4(X, rH, cH, posr);
				}
				if (posr == 5)
				{
					jump5(X, rH, cH, posr);
				}
				if (posr == 6)
				{
					jump6(X, rH, cH, posr);
					posr = 0;
				}
			}

			// hero jump left
			if (gch == 'z')
			{
				gflag = 1;
				posr++;
				jumpLeft(rH, cH, gch, gflag);

				if (posr == 1)
				{
					jump1(X, rH, cH, posr);
				}
				if (posr == 2)
				{
					jump2(X, rH, cH, posr);
				}
				if (posr == 3)
				{
					jump3(X, rH, cH, posr);
				}
				if (posr == 4)
				{
					jump4(X, rH, cH, posr);
				}
				if (posr == 5)
				{
					jump5(X, rH, cH, posr);
				}
				if (posr == 6)
				{
					jump6(X, rH, cH, posr);
					posr = 0;
				}
			}

			//Sun
			Set_Sun(X, rS, cS);

			//Enemy drawn looking away from hero
			if (enemyappear == 0)
			{
				Set_Enemy(X, rEN, cEN);

				//when hero gets near to enemy-> enemy turn
				if (cH >= 70)
				{
					Enemy_delete(X, rEN, cEN);
					enemy_autoturn(X, rEN2, cEN2);

					if (ebflag == 0)
					{
						enemy_Lance(X, renemy, cenemy, cEN2, cH);
						enemy_Throw(X, renemy, cenemy, cH, ebflag);
					}

				}
			}

			if (csb == (cEN2 - 2))
			{
				enemyappear = 1;
				drawlance = 1;
			}

			//lance
			if (drawlance2 == 0)
			{
				if (drawlance == 1)
				{
					lance(X, rlance, clance);
				}
			}

			if (cH + 3 == clance)
			{
				drawlance2 = 1;
				enablemulti = 1;
			}

			// enemy on bike
			if (enablebike == 0)
			{
				if (bikerflag == 0)
				{
					enemybike(X, rbike, cbike);
				}
				if (flmb == 1)
				{
					movebike(X, rbike, cbike, bikerflag);
				}
			}

			if (cbike - 3 == cH + 3)
			{
				enablebike = 1;
			}

			//when hero reach box dialog shows and disappear if pressed 'e'
			if (cH == cB - 6)
			{
				if (pfl == 0)
				{
					Set_popbox(X, rP, cP);
				}

				fla = 0;

				if (k == 'e')
				{
					Empty_box(X, rB, cB, k);
					Set_Gun(X, rG, cG, k);
					f = 0;
					fla = 1;
					pfl = 1;
					flmb = 1;
				}

			}

			// Display scroll to the right
			if (scroll == 'd')
			{
				if (cH > (dE / 2) - 15)
				{
					dE++;
					dS++;
					cHe++;
					cHe2++;
					cHe3++;
					cL++;
					cT++;
					cS++;
					scroll = '?';
				}
				/*if(DrScrollf==1|| chdr2=='j')
				{
					dE++;
					dS++;
					cHe++;
					cHe2++;
					cHe3++;
					cL++;
					cT++;
					cS++;
					scroll='?';
				}*/
			}
			// Display scroll to the left
			if (scroll == 'a')
			{
				if ((cH<(dE - 15) && cH>(dE / 2) - 15))
				{
					dE--;
					dS--;
					cHe--;
					cHe2--;
					cHe3--;
					cL--;
					cT--;
					cS--;
					scroll = '?';
				}
				/*if (DrScrollf==1 || chdr2=='j')
				{
					dE--;
					dS--;
					cHe--;
					cHe2--;
					cHe3--;
					cL--;
					cT--;
					cS--;
					scroll='?';
				}*/
			}


			// hero shooting
			if (cH > 14)
			{
				if (chbu == 'g')
				{
					if (heroflag == 1)
					{
						Hero_Shooting(X, rH, cH, chbu);
					}

					if (fbu == 0)
					{
						csb = cH + 4;
						rsb = rH + 2;
						fbu = 1;
					}
					if (sbflag == 0)
					{
						singlebullet(X, rH, cH, rsb, csb, chbu);
						movebullet(X, cH, rsb, csb, chbu, dir, sbflag, fbu);
					}
				}
				else
				{
					heroflag = 0;
				}
			}

			///Multibullet
			if (enablemulti == 1)
			{
				if (chbu == 'f')
				{
					rmb++;
					chbu = ' ';
					M[var][0] = rH + 2;
					M[var][1] = cH + 4;
					var++;
				}

				for (int rr = var2; rr < rmb; rr++)
				{
					multibullet(X, rH, cH, M, chbu, rr);
					movemulti(X, cH, rH, M, chbu, rr, var2);

					if (M[rr][1] + 1 == cdrag)
					{
						drawbigdragon++;
					}

					if (M[rr][1] + 1 == cgym + 2)
					{
						drawgym = 1;
						drawgymheal = 1;
					}

					if (M[rr][1] + 1 == cebowl - 2)
					{
						drawenemybowling = 0;
					}
				}
			}

			//Monkey
			if (flagMonkey == 0)
			{
				set_monkey(X, RMonkey, CMonkey);
			}
			if (flagApple == 0)
			{
				monkey_throw(X, RThrow, CThrow);
			}
			if (cH > CMonkey - 40)
			{
				throw_move(X, RThrow, CThrow, flagApple);
			}
			if (cH == CThrow)
			{
				flagApple = 1;
				CApple = cH + 7;
			}

			//throw apple
			if (flagApple == 1)
			{
				Hero_with_Apple(X, RApple, CApple, ChMonkey);
				if (flagMonkey == 0)
				{
					if (k == 'o')
					{
						move_Apple(X, RApple, CApple);
					}
				}
			}

			//monkey dies
			if (CApple == CMonkey)
			{
				flagMonkey = 1;

			}


			cout_to_screen(X, dE, dS);
			Sleep(80);

			if (cH >= 490)
			{
				break;
				flagkbhit = 1;
			}
		}
		if (flagkbhit == 1)
		{
			break;
		}
		k = getch();

		// getch condition for scroll
		if (k == 'a' || k == 'd')
		{
			scroll = k;
		}

		//Getch for Dragon movement horizontally
		if (k == 'a' || k == 'd' || k == 'w' || k == 's')
		{
			chdr = k;
		}

		//getch for dragon fireball
		if (k == 'G')
		{
			chdrb = k;
		}

		//getch condition for Laser
		if (k == 'F')
		{
			chdrL = k;
		}

		//getch condition to draw hero while moving
		if (k == 'a' || k == 'd')
		{
			drawhero = k;
		}

		//getch for jump
		if (k == 'z')
		{
			gch = k;
		}

		if (k == 'x')
		{
			gch = k;
		}

		if (k == 'c')
		{
			gch = k;
		}

		//getch condition for shooting
		if (k == 'g' || k == 'f')
		{
			chbu = k;
			sbflag = 0;
			fbu = 0;
		}

		//getch to launch rocket
		if (k == 'p')
		{
			chexp = k;
		}

		//getch condition for monkey
		if (k == 'o')
		{
			ChMonkey = k;

		}

		//getch for getting off dragon 
		if (k == 'j')
		{
			chdr2 = k;
		}

		// condition to stop hero moving when box not opened
		if (rH == rB && cH == cB - 2 && fla == 0)
		{

		}
		else if (fla == 1)
		{
			sfl = 1;
			Move_Hero(rH, cH, k);
		}

	}
}
