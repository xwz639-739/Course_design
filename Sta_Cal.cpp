#include"Calculator.h"


void Statist_Cal(){
	int check = 1;
	Statistical_calculator statist_cal;
	while (check)
	{
		check = sta_menu1();
		switch (check)
		{
		case 1:
			statist_cal.reset();
			statist_cal.AddSta();
			if (statist_cal.getcount()){
				cout << "该组数据的总和为：" << statist_cal.Sum()<<endl;
				cout << "该组数据的平均值为：" << statist_cal.Average()<<endl;
				cout << "该组数据的方差为：" << statist_cal.Variance()<<endl;
				cout << "该组数据的标准差为：" << statist_cal.Standard_Deviation() << endl;
			}
			else{
				cout << "未输入数据，请重新选择！！！" << endl;
				Sleep(500);
				system("cls");
			}
			while (getchar() != '\n');
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

void Statistical_calculator::reset()
{
	count = 0;
	sum = average = variance = standard_deviation = 0;
	statist.clear();
}

void Statistical_calculator::AddSta()
{
	int check = 1;
	while (check)
	{
		double tmp = 0.0;
		cout << "请输入数据(输入“q”结束输入）：";
		check = scanf_s("%lf", &tmp);
		if (check)
		{
			statist.push_back(tmp);
			count++;
		}
	}
}

double Statistical_calculator::Sum()
{
	for (auto& tmp : statist)
		sum += tmp;
	return sum;
}

double Statistical_calculator::Average()
{
	average = sum / count;
	return average;
}

double Statistical_calculator::Variance()
{
	double tmp_sum = 0;
	for (auto& tmp : statist)
		tmp_sum += pow(fabs(tmp - average), 2);
	variance = tmp_sum / (1.0 * count);
	return variance;
}

double Statistical_calculator::Standard_Deviation()
{
	standard_deviation = sqrt(variance);
	return standard_deviation;
}