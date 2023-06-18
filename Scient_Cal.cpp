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
			cout << "���������ʽ��";
			scient_cal.input_exp();
			cout << "���Ϊ��" << scient_cal.calculator(scient_cal) << ends;
			scient_cal.reset();
			Sleep(5000);
			system("cls");
			break;
		case 2:
			sci_menu2();
		case 0:
			cout << "������...";
			Sleep(200);
			system("cls");
			break;
		default:
			cout << "ѡ�����������ѡ�񣡣���";
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
		cout << "���������ݣ�";
		cin >> data;
	}
	switch (choice)
	{
	case 0:
		cout << "������...";
		Sleep(200);
		system("cls");
		break;
	default:
		cout << "ѡ�����������ѡ�񣡣���";
		Sleep(500);
		system("cls");
		break;
	case 1:
		cout << "���=" << sin(data / R_T_D) << endl;
		break;
	case 2:
		cout << "���=" << cos(data / R_T_D) << endl;
		break;
	case 3:
		cout << "���=" << tan(data / R_T_D) << endl;
		break;
	case 4:
		cout << "���=" << sqrt(data) << endl;
		break;
	case 5:
		cout << "���=" << cbrt(data) << endl;
		break;
	case 6:
		cout << "���=" << exp(data) << endl;
		break;
	case 7:
		cout << "���=" << log(data) << endl;
		break;
	case 8:
		cout << "���=" << log10(data) << endl;
		break;
	case 9:
		cout << "�����������";
		cin >> ex_data;
		cout << "������������";
		cin >> data;
		cout << "���=" << log(data) / log(ex_data) << endl;
		break;
	case 10:
		cout << "������X��";
		cin >> data;
		cout << "������Y��";
		cin >> ex_data;
		cout << "���=" << pow(data, ex_data) << endl;
		break;
	case 11:
		cout << "���=" << fabs(data) << endl;
		break;

	}
	if (choice >= 1 && choice <= 11)
	{
		Sleep(5000);
		system("cls");
	}
}