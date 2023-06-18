#include"Calculator.h"

void Programmer_Cal(){
	int check1 = 1;
	Programmer_calculator programmer_cal;
	while (check1){
		int check2 = 0;
		string tmp1;
		tmp1.clear();
		int tmp2;
		check1 = pro_menu1();
		switch (check1){
		case 1:
			check2 = pro_menu2();
			switch (check2){
			case 1:
				cout << "请输入数据：";
				cin >> tmp1;
				programmer_cal.inb(tmp1);
				programmer_cal.btod();
				cout << "该数的八进制数为：" << programmer_cal.dtoo() << endl;
				cout << "该数的十进制数为：" << programmer_cal.btod() << endl;
				cout << "该数的十六进制数为：" << programmer_cal.btoh() << endl;
				break;
			case 2:
				cout << "请输入数据：";
				cin >> tmp2;
				programmer_cal.ind(tmp2);
				cout << "该数的二进制数为：" <<bitset<16>(tmp2) << endl;
				cout << "该数的八进制数为：" << programmer_cal.dtoo() << endl;
				cout << "该数的十六进制数为：" << programmer_cal.dtoh() << endl;
				break;
			case 3:
				cout << "请输入数据：";
				cin >> tmp1;
				programmer_cal.ino(tmp1);
				cout << "该数的二进制数为：" << bitset<16>(programmer_cal.otod()) << endl;
				cout << "该数的十进制数为：" << programmer_cal.otod() << endl;
				cout << "该数的十六进制数为：" << programmer_cal.otoh() << endl;
				break;
			case 4:
				cout << "请输入数据：";
				cin >> tmp1;
				programmer_cal.inh(tmp1);
				cout << "该数的二进制数为：" << bitset<16>(programmer_cal.htod()) << endl;
				cout << "该数的八进制数为：" << programmer_cal.dtoo() << endl;
				cout << "该数的十进制数为：" << programmer_cal.htod() << endl;
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

void Programmer_calculator::inb(string tmp)
{
	binary = tmp;
}

void Programmer_calculator::ind(int tmp)
{
	decimal = tmp;
}

void Programmer_calculator::ino(string tmp)
{
	octal = tmp;
}

void Programmer_calculator::inh(string tmp)
{
	hexadecimal = tmp;
}

int Programmer_calculator::btod()
{
	int i, j, sum = 0;
	for (i = 0; i < binary.length(); i++)

	{
		if (binary[i] == '1')

		{
			j = pow(2, binary.length() - i - 1);
			sum += j;
		}
	}
	decimal = sum;
	return sum;
}

string Programmer_calculator::btoo()
{
	string tmp;
	stringstream ss;
	ss << oct << decimal;
	ss >> tmp;
	ss.clear();
	return tmp;
}

string Programmer_calculator::btoh()
{
	string tmp;
	stringstream ss;
	ss << hex << decimal;
	ss >> tmp;
	ss.clear();
	return tmp;
}

string Programmer_calculator::dtoo()
{
	string tmp;
	stringstream ss;
	ss << oct << decimal;
	ss >> tmp;
	ss.clear();
	return tmp;
}

string Programmer_calculator::dtoh()
{
	string tmp;
	stringstream ss;
	ss << hex << decimal;
	ss >> tmp;
	ss.clear();
	return tmp;
}

int Programmer_calculator::otod()
{
	int tmp;
	stringstream ss;
	ss << oct << octal;
	ss >> tmp;
	ss.clear();
	return tmp;
}

string Programmer_calculator::otoh()
{
	string tmp;
	stringstream ss;
	ss << hex << octal;
	ss >> tmp;
	ss.clear();
	return tmp;
}

int Programmer_calculator::htod()
{
	int tmp;
	stringstream ss;
	ss << hex << hexadecimal;
	ss >> tmp;
	ss.clear();
	return tmp;
}

string Programmer_calculator::htoo()
{
	string tmp;
	stringstream ss;
	ss << oct << hexadecimal;
	ss >> tmp;
	ss.clear();
	return tmp;
}
