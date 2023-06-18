#pragma once

//头文件区
#include<iostream>
#include<vector>
#include<Windows.h>
#include<string>
#include<sstream>
#include<bitset>
#include<stack>
#include<algorithm>

//定义区
using namespace std;
#define PI 3.14
#define R_T_D (180/(4*atanl(1))) 
#define _CRT_SECURE_NO_WARNINGS 1  
enum {
    Exit,
    Sci_Cal,
    Sta_Cal,
    Pro_Cal,
    Unt_Con_Cal,
    Oth_Cal
};


//函数声明区
int MainMenu();
void ExitPro();
void Statist_Cal();
int sta_menu1();
void Programmer_Cal();
int pro_menu1();
int pro_menu2();
void Unit_Con_Cal();
int unit_menu1();
int unit_menu2();
int unit_menu3();
int unit_menu4();
int unit_menu5();
int unit_menu6();
int unit_menu7();
int unit_menu8();
void Scient_Cal();
int sci_menu1();
void sci_menu2();
void cal();
void Other_Cal();
int Oth_menu1();
void Tri_area();
void Matrix_transpose();
void Sort();
void Solve_binary_primary_equations();

//类、结构体区
class Scientific_calculator {
    friend void evalRPN(string&);
    friend void RPN(string&);
    string tmp_exp;
    string exp;
public:
    double calculator(Scientific_calculator&);
    void input_exp();
    string get_tmp_exp() {
        return tmp_exp;
    }
    string get_exp() {
        return exp;
    }
    void reset() {
        tmp_exp.clear();
        exp.clear();
    }
};//科学计算器

class Statistical_calculator {
    vector<double> statist;
    double sum, average, variance, standard_deviation;
    int count;
public:
    Statistical_calculator() {
        count = 0;
        sum = average = variance = standard_deviation = 0;
    }
    void reset();
    void AddSta();
    double Sum();
    double Average();
    double Variance();
    double Standard_Deviation();
    double getcount() {
        return count;
    }
};//统计计算器

class Programmer_calculator {
    int decimal;
    string binary, octal, hexadecimal;
public:
    //string dtob();
    string dtoo();
    string dtoh();
    int btod();
    string btoo();
    string btoh();
    int otod();
    //string otob();
    string otoh();
    int htod();
    //string htob();
    string htoo();
    void ind(int);
    void inb(string);
    void ino(string);
    void inh(string);
};//程序员计算器

class Unit_Conversion_calculator {
    double data;
public:
    Unit_Conversion_calculator()
    {
        data = 0;
    }
    void Length_Con();
    void Weight_Con();
    void Square_Con();
    void Volume_Con();
    void Time_Con();
    void Temp_Con();
    void Speed_Con();
};//单位转化计算器