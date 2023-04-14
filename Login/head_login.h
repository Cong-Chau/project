#include<iostream>
#include<fstream>
#include<windows.h>
#define max 100
using namespace std;


struct Account {
	int mssv_gv;
	int password;
};

struct Student {
	//int No;
	int ID; //mssv
	char name[max]; //Ten
	char ho[max]; //Ho va ten dem
	char sex[max]; //Gioi tinh
	char birth[max]; //Ngay sinh
	int cccd; //So cccd hoac cmnd
};

struct Node_Stu {
	Student data;
	Node_Stu* next;
};

struct Class {
	char idclass[max]; //Ma lop hoc
	int amount; //So luong sinh vien trong lop
	Node_Stu* stu; //Danh sach sinh vien trong lop
};

struct Node_class {
	Class data;
	Node_class* next;
};

struct NamHoc {
	int year;  //Nam hoc
	int solg;
	Node_class* cla; // Danh sach lop mo
};

struct Node_year {
	NamHoc data;
	Node_year* next;
};





void Display_Header();
void textColor(int a);
int Find_Location(Account* p, int n, int x);
bool checkMSSV_MSGV(Account* p, int n, int ms);
bool checkMK(Account* p, int n, int ms, int pass);
int Login(Account* p, int n);
void changeMK(Account*& p, int n, int y);
void savePASS(Account*& p, int n, int ms, int x, int y);

//sinh vien
int DEM_sv();
void Read_file_sv(Account*& p, int n);

	
//giao vien
int DEM_gv();
void Read_file_gv(Account*& p, int n);

//Tao nam hoc
//void upperFirst(char x[]);
//void upperALL(char x[]);
//void inputStudent(Student& x);
//void listStudent(Student*& x, int n);
//void makeClass(Class& cla);
//void writeNamHoc(NamHoc year);
//void makeYear(NamHoc& year);

//Tao lop cho sinh vien nam nhat
//int DEM_Year();
//void Read_file_year(NamHoc*& year, int n);

void Function_after_Login_SV();
void Function_after_Login_GV();
//  tao 1 nam hoc
Node_year* makeNode_year(NamHoc x);
void addLast_year(Node_year*& y, NamHoc x);
void input_Year(NamHoc& x);
void write_File_year(Node_year* year);
void Create_1_year(Node_year*& year);








