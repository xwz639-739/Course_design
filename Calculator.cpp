#include"Calculator.h"

int main()
{
	int choice = 1;
	
	while(choice)
	{
       choice=MainMenu();
	   switch (choice)
	   {
	   case Sci_Cal:
		   Scient_Cal();
		   Sleep(100);
		   system("cls");
		   break;
	   case Sta_Cal:
		   Sleep(100);
		   system("cls");
		   Statist_Cal();
		   break;
	   case Pro_Cal:
		   Sleep(100);
		   system("cls");
		   Programmer_Cal();
		   break;
	   case Unt_Con_Cal:
		   Sleep(100);
		   system("cls");
		   Unit_Con_Cal();
		   break;
	   case Oth_Cal:
		   Sleep(100);
		   system("cls");
		   Other_Cal();
		   break;
	   case Exit:
		   ExitPro();
		   break;
	   default:
		   system("cls");
		   cout << "选择错误，请重新选择！！！" << endl;
		   break;
	   }
	}
	return 0;
}