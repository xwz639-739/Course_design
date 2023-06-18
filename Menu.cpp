#include"Calculator.h"

int MainMenu()
{
	int choice;
	cout << "***********************************" << endl;
	cout << "      欢迎使用多功能计算器！！！   " << endl;
	cout << "    1、科学计算器***2、统计计算器    " << endl;
	cout << "  3、程序员计算器***4、单位装换计算器" << endl;
	cout << "  5、其他功能    ***0、退出程序            " << endl;
	cout << "请选择功能：";
	cin >> choice;
	return choice;
}

int sta_menu1()
{
	int choice;
	cout << "***************************" << endl;
	cout << "    0、返回***1、计算数据  " << endl;
	cout << " 请选择功能：";
	cin >> choice;
	return choice;
}

int pro_menu1()
{
	int choice;
	cout << "***************************" << endl;
	cout << "    0、返回***1、计算数据  " << endl;
	cout << " 请选择功能：";
	cin >> choice;
	return choice;
}

int pro_menu2()
{
	int choice;
	cout << "***************************" << endl;
	cout << "  0、返回   *** 1、二进制  " << endl;
	cout << "  2、十进制 *** 3、八进制  " << endl;
	cout << "  4、十六进制              " << endl;
	cout << " 请选择输入的数的进制（或返回）：";
	cin >> choice;
	return choice;
}

int unit_menu1()
{
	int choice;
	cout << "*********************************" << endl;
	cout << "    0、返回     *** 1、长度转换  " << endl;
	cout << "    2、重量转换 *** 3、面积转换  " << endl;
	cout << "    4、体积转换 *** 5、时间转换  " << endl;
	cout << "    6、温度转换 *** 7、速度转换  " << endl;
	cout << " 请选择功能：";
	cin >> choice;
	return choice;
}

int unit_menu2()
{
	int choice;
	cout << "0、返回       1、纳米（nm） 2、微米（um） 3、毫米（mm）" << endl;
	cout << "4、厘米（cm） 5、分米（dm） 6、米（m）    7、千米（km）" << endl;
	cout << "请选择要转换的数据的单位（或返回）：";
	cin >> choice;
	return choice;
}

int unit_menu3()
{
	int choice;
	cout << "0、返回  1、克（g） 2、千克（kg） 3、吨（t）" << endl;
	cout << "请选择要转换的数据的单位（或返回）：";
	cin >> choice;
	return choice;
}

int unit_menu4()
{
	int choice;
	cout << "0、返回   1、平方厘米  2、平方分米 " << endl;
	cout << "3、公顷   4、平方米    5、平方千米 " << endl;
	cout << "请选择要转换的数据的单位（或返回）：";
	cin >> choice;
	return choice;
}

int unit_menu5()
{
	int choice;
	cout << "0、返回    1、立方厘米" << endl;
	cout << "2、升（L） 3、立方米  " << endl;
	cout << "请选择要转换的数据的单位（或返回）：";
	cin >> choice;
	return choice;
}

int unit_menu6()
{
	int choice;
	cout << "0、返回        1、秒（s）  " << endl;
	cout << "2、分钟（min） 3、小时（h）" << endl;
	cout << "请选择要转换的数据的单位（或返回）：";
	cin >> choice;
	return choice;
}

int unit_menu7()
{
	int choice;
	cout << "0、返回 1、华氏温度（℉） 2、摄氏温度（℃）" << endl;
	cout << "请选择要转换的数据的单位（或返回）：";
	cin >> choice;
	return choice;
}

int unit_menu8()
{
	int choice;
	cout << "0、返回 1、米/秒（m/s） 2、千米/小时（km/h）" << endl;
	cout << "请选择要转换的数据的单位（或返回）：";
	cin >> choice;
	return choice;
}

int sci_menu1()
{
	int choice;
	cout << "**************************************" << endl;
	cout << "   0、返回*******1、计算（四则运算）  " << endl;
	cout << "   2、计算（三角函数、对数、指数等）  " << endl;
	cout << " 请选择功能：";
	cin >> choice;
	return choice;
}

void sci_menu2()
{
	cout << "1、sin          2、cos              3、tan       " << endl;
	cout << "4、平方根       5、立方根           6、e的x次方" << endl;
	cout << "7、自然对数值   8、10为底的对数值   9、任意正数为底的对数值" << endl;
	cout << "10、x的y次方    11、绝对值          0、返回" << endl;
	cout << "请选择：";
	cal();
}

int Oth_menu1()
{
	int choice;
	cout << "***************************************" << endl;
	cout << "  0、返回     *** 1、计算三角形的面积  " << endl;
	cout << "  2、矩阵转置 *** 3、数据排序          " << endl;
	cout << "  4、求解二元一次方程                  " << endl;
	cout << " 请选择功能（或返回）：";
	cin >> choice;
	return choice;
}