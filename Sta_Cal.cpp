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
				cout << "�������ݵ��ܺ�Ϊ��" << statist_cal.Sum()<<endl;
				cout << "�������ݵ�ƽ��ֵΪ��" << statist_cal.Average()<<endl;
				cout << "�������ݵķ���Ϊ��" << statist_cal.Variance()<<endl;
				cout << "�������ݵı�׼��Ϊ��" << statist_cal.Standard_Deviation() << endl;
			}
			else{
				cout << "δ�������ݣ�������ѡ�񣡣���" << endl;
				Sleep(500);
				system("cls");
			}
			while (getchar() != '\n');
			break;
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
		cout << "����������(���롰q���������룩��";
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