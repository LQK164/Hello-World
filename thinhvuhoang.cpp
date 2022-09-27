#include <iostream>
using namespace std;
class Hinh3D
{
protected:
	string ten_loai_chai;
	int so_luong;
	float dien_tich;
	float the_tich;
public:
	virtual void Nhap()=0;
	virtual float TinhDienTichXQ() = 0;
	virtual float TinhDienTichTP() = 0;
	virtual float TinhTheTich() = 0;
};
class ChaiHinhTruTron : public Hinh3D
{ 
public:
	int chieu_cao;
	int ban_kinh;
	float dien_tich1;
	float the_tich1;
	void Nhap();
	float TinhDienTichXQ();
	float TinhDienTichTP();
	float TinhTheTich();
};
class ChaiHinhHopCN : public Hinh3D
{
public:
	int chieu_dai;
	int chieu_rong;
	int chieu_cao;
	float dien_tich2;
	float the_tich2;
	void Nhap();
	float TinhDienTichXQ();
	float TinhDienTichTP();
	float TinhTheTich();
};
class ChaiHinhLapPhuong : public Hinh3D
{ 
public:
	int canh;
	float dien_tich3;
	float the_tich3;
	void Nhap();
	float TinhDienTichXQ();
	float TinhDienTichTP();
	float TinhTheTich();
    //ewfrwefwgr
    wtgoirtgjket
    g4gg
    edit bay eofkweofkwf qerwtrf
};
