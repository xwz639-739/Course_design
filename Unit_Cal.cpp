#include"Calculator.h"

void Unit_Con_Cal()
{
	int check = 1;
	Unit_Conversion_calculator unit_con_cal;
	while (check)
	{
		while (getchar() != '\n');
		check = unit_menu1();
		switch (check)
		{
		case 1:
			unit_con_cal.Length_Con();
			break;
		case 2:
			unit_con_cal.Weight_Con();
			break;
		case 3:
			unit_con_cal.Square_Con();
			break;
		case 4:
			unit_con_cal.Volume_Con();
			break;
		case 5:
			unit_con_cal.Time_Con();
			break;
		case 6:
			unit_con_cal.Temp_Con();
			break;
		case 7:
			unit_con_cal.Speed_Con();
			break;
		case 0:
			cout << "返回中...";
			Sleep(200);
			system("cls");
			break;
		default:
			cout << "选择错误，请重新选择！！！";
			Sleep(500);
			system("cls");
			break;
		}
	}
}

void Unit_Conversion_calculator::Length_Con()
{
	int check;
	check = unit_menu2();
	if(check)
	{
		cout << "请输入数据：";
		cin >> data;
	}
	switch (check)
	{
	case 1:
		cout << data << "nm=" << data * pow(0.1, 3) << "um=" << data * pow(0.1, 6) << "mm=" << data * pow(0.1, 7) << "cm=" << data * pow(0.1, 8) << "dm="
			<< data * pow(0.1, 9) << "m=" << data * pow(0.1, 12) << "km";
		break;
	case 2:
		cout << data << "um=" << data * pow(10, 3) << "nm=" << data * pow(0.1, 3) << "mm=" << data * pow(0.1, 4) << "cm=" << data * pow(0.1, 5) << "dm="
			<< data * pow(0.1, 6) << "m=" << data * pow(0.1, 9) << "km";
		break;
	case 3:
		cout << data << "mm=" << data * pow(10, 6) << "nm=" << data * pow(10, 3) << "um=" << data * pow(0.1, 1) << "cm=" << data * pow(0.1, 2) << "dm="
			<< data * pow(0.1, 3) << "m=" << data * pow(0.1, 6) << "km";
		break;
	case 4:
		cout << data << "cm=" << data * pow(10, 7) << "nm=" << data * pow(10, 4) << "um=" << data * pow(10, 1) << "mm=" << data * pow(0.1, 1) << "dm="
			<< data * pow(0.1, 2) << "m=" << data * pow(0.1, 5) << "km";
		break;
	case 5:
		cout << data << "dm=" << data * pow(10, 8) << "nm=" << data * pow(10, 5) << "um=" << data * pow(10, 2) << "mm=" << data * pow(10, 1) << "cm="
			<< data * pow(0.1, 1) << "m=" << data * pow(0.1, 4) << "km";
		break;
	case 6:
		cout << data << "m=" << data * pow(10, 9) << "nm=" << data * pow(10, 6) << "um=" << data * pow(10, 3) << "mm=" << data * pow(10, 2) << "cm="
			<< data * pow(10, 1) << "dm=" << data * pow(0.1, 3) << "km";
		break;
	case 7:
		cout << data << "km=" << data * pow(10,12) << "nm=" << data * pow(10,9) << "um=" << data * pow(10,6) << "mm=" << data * pow(10,5) << "cm="
			<< data * pow(10,4) << "dm=" << data * pow(10,3) << "m";
		break;
	case 0:
		cout << "返回中...";
		Sleep(200);
		system("cls");
		break;
	default:
		cout << "选择错误！！！";
		Sleep(500);
		system("cls");
	}
	if (check >= 1 && check <= 7)
	{
		data = 0;
		Sleep(5000);
		system("cls");
	}
}

void Unit_Conversion_calculator::Weight_Con()
{
	int check;
	check = unit_menu3();
	if (check)
	{
		cout << "请输入数据：";
		cin >> data;
	}
	switch (check)
	{
	case 1:
		cout << data << "g=" << data * pow(0.1, 3) << "kg=" << data * pow(0.1, 6) << "t" << endl;
		break;
	case 2:
		cout << data << "kg=" << data * pow(10, 3) << "g=" << data * pow(0.1, 3) << "t" << endl;
		break;
	case 3:
		cout << data << "t=" << data * pow(10, 6) << "g=" << data * pow(10, 3) << "kg" << endl;
		break;
	case 0:
		cout << "返回中...";
		Sleep(200);
		system("cls");
		break;
	default:
		cout << "选择错误！！！";
		Sleep(500);
		system("cls");
	}
	if (check >= 1 && check <= 3)
	{
		data = 0;
		Sleep(5000);
		system("cls");
	}
}

void Unit_Conversion_calculator::Square_Con()
{
	int check;
	check = unit_menu4();
	if (check)
	{
		cout << "请输入数据：";
		cin >> data;
	}
	switch (check)
	{
	case 1:
		cout << data << "平方厘米 = " << data * pow(0.1, 2) << "平方分米 = " << data * pow(0.1, 4)
			<< "平方米 = " << data * pow(0.1, 8) << "公顷 = " << data * pow(0.1, 10) << "平方千米" << endl;
		break;
	case 2:
		cout << data << "平方分米 = " << data * pow(10, 2) << "平方厘米 = " << data * pow(0.1, 2) << "平方米 = "
			<< data * pow(0.1, 6) << "公顷 = " << data * pow(0.1, 8) << "平方千米" << endl;
		break;
	case 3:
		cout << data << "平方米 = " << data * pow(10, 4) << "平方厘米 = " << data * pow(10, 2) << "平方分米"
			<< data * pow(0.1, 4) << "公顷= " << data * pow(0.1, 6) << "平方千米= " << endl;
		break;
	case 4:
		cout << data << "公顷 = " << data * pow(10, 8) << "平方厘米 = " << data * pow(10, 6) << "平方分米"
			<< data * pow(10, 4) << "平方米 = " << data * pow(0.1, 2) << "平方千米 = " << endl;
		break;
	case 5:
		cout << data << "平方千米 = " << data * pow(10, 10) << "平方厘米 =" << data * pow(10, 8) << "平方分米"
			<< data * pow(10, 6) << "平方米 = " << data * pow(10, 2) << "公顷 = " << endl;
		break;
	case 0:
		cout << "返回中...";
		Sleep(200);
		system("cls");
		break;
	default:
		cout << "选择错误！！！";
		Sleep(500);
		system("cls");
	}
	if (check >= 1 && check <= 5)
	{
		data = 0;
		Sleep(5000);
		system("cls");
	}
}

void Unit_Conversion_calculator::Volume_Con()
{
	int check;
	check = unit_menu5();
	if (check)
	{
		cout << "请输入数据：";
		cin >> data;
	}
	switch (check)
	{
	case 1:
		cout << data << "立方厘米=" << data * pow(0.1, 3) << "L=" << data * pow(0.1, 6) << "立方米" << endl;
		break;
	case 2:
		cout << data << "L=" << data * pow(10, 3) << "立方厘米 = " << data * pow(0.1, 3) << "立方米" << endl;
		break;
	case 3:
		cout << data << "立方米 = " << data * pow(10, 6) << "立方厘米= " << data * pow(10, 3) << "L" << endl;
		break;
	case 0:
		cout << "返回中...";
		Sleep(200);
		system("cls");
		break;
	default:
		cout << "选择错误！！！";
		Sleep(500);
		system("cls");
	}
	if (check >= 1 && check <= 3)
	{
		data = 0;
		Sleep(5000);
		system("cls");
	}
}

void Unit_Conversion_calculator::Time_Con()
{
	int check;
	check = unit_menu6();
	if (check)
	{
		cout << "请输入数据：";
		cin >> data;
	}
	switch (check)
	{
	case 1:
		cout << data << "s=" << data / 60 << "min=" << data / 3600 << "h" << endl;
		break;
	case 2:
		cout << data << "min=" << data * 60 << "s=" << data / 60 << "h" << endl;
		break;
	case 3:
		cout << data << "h=" << data * 3600 << "s=" << data * 60 << "min" << endl;
		break;
	case 0:
		cout << "返回中...";
		Sleep(200);
		system("cls");
		break;
	default:
		cout << "选择错误！！！";
		Sleep(500);
		system("cls");
	}
	if (check >= 1 && check <= 3)
	{
		data = 0;
		Sleep(5000);
		system("cls");
	}
}

void Unit_Conversion_calculator::Temp_Con()
{
	int check;
	check = unit_menu7();
	if (check)
	{
		cout << "请输入数据：";
		cin >> data;
	}
	switch (check)
	{
	case 1:
		cout << data << "℉=" << (data - 32) / 1.8 << "℃" << endl;
		break;
	case 2:
		cout << data << "℃=" << data * 1.8 + 32 << "℉" << endl;
		break;
	case 0:
		cout << "返回中...";
		Sleep(200);
		system("cls");
		break;
	default:
		cout << "选择错误！！！";
		Sleep(500);
		system("cls");
	}
	if (check >= 1 && check <= 2)
	{
		data = 0;
		Sleep(5000);
		system("cls");
	}
}

void Unit_Conversion_calculator::Speed_Con()
{
	int check;
	check = unit_menu8();
	if (check)
	{
		cout << "请输入数据：";
		cin >> data;
	}
	switch (check)
	{
	case 1:
		cout << data << "m/s=" << data * 3.6 << "km/h" << endl;
		break;
	case 2:
		cout << data << "km/h" << data / 3.6 << "m/s" << endl;
		break;
	case 0:
		cout << "返回中...";
		Sleep(200);
		system("cls");
		break;
	default:
		cout << "选择错误！！！";
		Sleep(500);
		system("cls");
	}
	if (check >= 1 && check <= 2)
	{
		data = 0;
		Sleep(5000);
		system("cls");
	}
}
