//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
using namespace std;
class GorgeHome;
class Bob;
void test01()
{
	Bob b;
	b.visitting();
}
int main()
{
	test01();
	return 0;
}
class GorgeHome
{
	GorgeHome();
	friend class Bob;
public:
	string SittingRoom;
private:
	string BedRoom;
};
GorgeHome::GorgeHome()
{
	SittingRoom = "¿ÍÌü";
	BedRoom = "ÎÔÊÒ";
}
class Bob
{
	Bob();
public:
	void visitting();
private:
	
	GorgeHome* place;
};
Bob::Bob()
{
	place = new GorgeHome;
}
void Bob::visitting()
{
	cout << "Bob is visitting GorgeHome " << place->SittingRoom << endl;
	cout << "Bob is visitting GorgeHome " << place->BedRoom << endl;
}//
