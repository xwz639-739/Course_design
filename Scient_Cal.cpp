#include"Calculator.h"

void Scient_Cal()
{
	int choice = 1;
	Scientific_calculator scient_cal;
	while (choice)
	{
		choice = sci_menu1();
		switch (choice)
		{
		case 1:
			cout << "请输入计算式：";
			scient_cal.input_exp();
			cout << "结果为：" << scient_cal.calculator(scient_cal) << ends;
			scient_cal.reset();
			Sleep(5000);
			system("cls");
			break;
		case 2:
			sci_menu2();
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

string trans(string& s)
{
	string operand;
	stack<char> Operator;
	int flag = 0;
	for (const auto& e : s)
	{
		if (e == '(')
		{
			Operator.push(e);
			flag = 1;
			continue;
		}
		if (e == ')')
		{
			flag = 0;
			while (Operator.top() != '(')
			{
				operand.push_back(Operator.top());
				Operator.pop();
			}
			Operator.pop();
			continue;
		}
		if (e == '+' || e == '-' || e == '*' || e == '/')
		{
			if (flag == 1)
			{
				if (Operator.top() == '(')
				{
					Operator.push(e);

				}
				else if ((e == '*' || e == '/') && (Operator.top() == '+' || Operator.top() == '-'))
				{
					Operator.push(e);
				}
				else
				{
					while (Operator.top() != '(')
					{
						operand.push_back(Operator.top());
						Operator.pop();
					}
					Operator.push(e);
				}
			}
			else if (Operator.empty())
			{
				Operator.push(e);
			}
			else if ((e == '*' || e == '/') && (Operator.top() == '+' || Operator.top() == '-'))
			{
				Operator.push(e);
			}
			else
			{
				while (!Operator.empty())
				{
					operand.push_back(Operator.top());
					Operator.pop();
				}
				Operator.push(e);
			}
		}
		else
		{
			operand.push_back(e);
		}
	}
	while (!Operator.empty())
	{
		operand.push_back(Operator.top());
		Operator.pop();
	}
	return operand;
}

int evalRPN(const string& s)
{
	stack<char> operand;
	int left = 0, right = 0;
	for (const auto& e : s)
	{
		if (e == '+' || e == '-' || e == '*' || e == '/')
		{
			switch (e)
			{
			case '+':
				right = operand.top();
				operand.pop();
				left = operand.top();
				operand.pop();
				operand.push(left + right);
				break;
			case '-':
				right = operand.top();
				operand.pop();
				left = operand.top();
				operand.pop();
				operand.push(left - right);
				break;
			case '*':
				right = operand.top();
				operand.pop();
				left = operand.top();
				operand.pop();
				operand.push(left * right);
				break;
			case '/':
				right = operand.top();
				operand.pop();
				left = operand.top();
				operand.pop();
				operand.push(left / right);
				break;
			}
		}
		else
		{
			operand.push(e - '0');
		}
	}
	return operand.top();
}

int RPN(const string& str)
{
	string s(str);
	s = trans(s);
	return evalRPN(s);
}


void Scientific_calculator::input_exp()
{
	string tmp;
	cin >> tmp;
	exp = tmp;
}

double Scientific_calculator::calculator(Scientific_calculator& tmp)
{
	double result = RPN(tmp.get_exp());
	return result;
}

void cal()
{
	int choice;
	cin >> choice;
	double data = 0;
	double ex_data;
	if (choice >= 1 && choice <= 11 && choice != 9 && choice != 10)
	{
		cout << "请输入数据：";
		cin >> data;
	}
	switch (choice)
	{
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
	case 1:
		cout << "结果=" << sin(data / R_T_D) << endl;
		break;
	case 2:
		cout << "结果=" << cos(data / R_T_D) << endl;
		break;
	case 3:
		cout << "结果=" << tan(data / R_T_D) << endl;
		break;
	case 4:
		cout << "结果=" << sqrt(data) << endl;
		break;
	case 5:
		cout << "结果=" << cbrt(data) << endl;
		break;
	case 6:
		cout << "结果=" << exp(data) << endl;
		break;
	case 7:
		cout << "结果=" << log(data) << endl;
		break;
	case 8:
		cout << "结果=" << log10(data) << endl;
		break;
	case 9:
		cout << "请输入底数：";
		cin >> ex_data;
		cout << "请输入真数：";
		cin >> data;
		cout << "结果=" << log(data) / log(ex_data) << endl;
		break;
	case 10:
		cout << "请输入X：";
		cin >> data;
		cout << "请输入Y：";
		cin >> ex_data;
		cout << "结果=" << pow(data, ex_data) << endl;
		break;
	case 11:
		cout << "结果=" << fabs(data) << endl;
		break;

	}
	if (choice >= 1 && choice <= 11)
	{
		Sleep(5000);
		system("cls");
	}
}