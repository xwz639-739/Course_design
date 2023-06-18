#include"Calculator.h"

void ExitPro()
{
	cout << "退出程序！" << endl;
}

void Other_Cal()
{
	int choice = 1;
	while (choice)
	{
		while (getchar() != '\n');
		choice = Oth_menu1();
		switch (choice)
		{
		case 1:
			Tri_area();
			break;
		case 2:
			Matrix_transpose();
			break;
		case 3:
			Sort();
			break;
		case 4:
			Solve_binary_primary_equations();
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

void Tri_area()
{
	double a = 1, b, c, s, area = 0;
	while (1)
	{
		cout << "请输入三角形边长(输入“0”返回上级菜单)：";
		cin >> a >> b >> c;
		s = (a + b + c) / 2;
		if (a + b > c && a + c > b && b + c > a)
		{
			area = sqrt(s * (s - a) * (s - b) * (s - c));
			cout << "该三角形的面积为：" << area << endl;
		}
		else if (a == 0)
			break;
		else
			cout << "不是三角形，无法求面积！";
	}
	Sleep(500);
	system("cls");
}

void Matrix_transpose()
{
	int i, j, a1=1, a2, m[100][100];
	while(1)
	{
		cout << "请输入矩阵的维度（输入“0”返回）: ";
		while (getchar() != '\n');
		cin >> a1 >> a2;
		if (a1 == 0)
			break;
		cout << "请输入矩阵的元素: ";
		for (i = 0; i < a1; i++)
			for (j = 0; j < a2; j++)
				cin >> m[i][j];
		cout << "该矩阵为:" << endl;
		for (i = 0; i < a1; i++)
		{
			for (j = 0; j < a2; j++)
			{
				cout << m[i][j] << " ";
			}
			cout << endl;
		}
		cout << "转置后的矩阵矩阵为:" << endl;
		for (j = 0; j < a2; j++)
		{
			for (i = 0; i < a1; i++)
			{
				cout << m[i][j] << " ";
			}
			cout << endl;
		}
	}
	Sleep(500);
	system("cls");
}

void Sort()
{
	char choice = 'u';
	while (choice == 'u' || choice == 'U' || choice == 'D' || choice == 'd')
	{
		cout << "请选择升序（u）或降序（d）排序（输入“q”返回）：";
		while (getchar() != '\n');
		cin >> choice;
		vector<double> Sort;
		int check = 1;
		while (check && (choice == 'u' || choice == 'U' || choice == 'D' || choice == 'd'))
		{
			double tmp = 0.0;
			cout << "请输入数据(输入“q”结束输入）：";
			check = scanf_s("%lf", &tmp);
			if (check)
				Sort.push_back(tmp);
		}
		if (choice == 'u' || choice == 'U')
		{
			sort(Sort.begin(),Sort.end());
			cout << "升序排序：";
			for (auto k : Sort)
				cout << k<<" ";
		}
		else if (choice == 'd' || choice == 'D')
		{
			sort(Sort.begin(), Sort.end(), greater<double>());
			cout << "降序排序：";
			for (auto k : Sort)
				cout << k << " ";
		}
		cout << endl;
	}
	Sleep(500);
	system("cls");
}

void Solve_binary_primary_equations()
{
	double a=1, b, c, x1, x2, discriminant, realPart, imaginaryPart;

	while(a)
	{
		cout << "输入 a, b 和 c（输入“0”返回）: ";
		while (getchar() != '\n');
		cin >> a >> b >> c;
		if (a == 0)
			break;
		discriminant = b * b - 4 * a * c;
		if (discriminant > 0) {
			x1 = (-b + sqrt(discriminant)) / (2 * a);
			x2 = (-b - sqrt(discriminant)) / (2 * a);
			cout << "Roots are real and different." << endl;
			cout << "x1 = " << x1 << endl;
			cout << "x2 = " << x2 << endl;
		}
		else if (discriminant == 0) {
			cout << "实根相同：" << endl;
			x1 = (-b + sqrt(discriminant)) / (2 * a);
			cout << "x1 = x2 =" << x1 << endl;
		}
		else {
			realPart = -b / (2 * a);
			imaginaryPart = sqrt(-discriminant) / (2 * a);
			cout << "实根不同：" << endl;
			cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
			cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
		}
	}
	Sleep(500);
	system("cls");
}