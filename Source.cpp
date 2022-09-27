#include <iostream>
#include <string>
#include <sstream>

using namespace std;
struct Node
{
	float Data;
	struct Node* pNext;
};
typedef struct Node NODE;
struct Stack
{
	NODE* Top = NULL;
};
typedef struct Stack STACK;
NODE* CreateNode(float);
int isEmpty(STACK);
void Push(STACK&, float);
void Pop(STACK&);
float Top(STACK);
float NghichDaoBaLan();
int main()
{
	float kq = NghichDaoBaLan();
	cout << "\nKet qua cua phep toan la: ";
	cout << kq;
	return 1;
}
NODE* CreateNode(float x)
{
	NODE* p = new NODE;
	if (p == NULL)
		return NULL;
	p->Data = x;
	p->pNext = NULL;
	return p;
}
int isEmpty(STACK s) 
{
	if (s.Top == NULL)
		return 1;
	return 0;
}
void Push(STACK& s, float x) 
{
	NODE* p = CreateNode(x);
	if (s.Top == NULL)
		s.Top = p;
	else 
		p->pNext = s.Top;
		s.Top = p;
}
void Pop(STACK& s) 
{
	if (!isEmpty(s)) 
	{
		NODE* p = s.Top;
		s.Top = s.Top->pNext;
		delete p;
		return;
	}
	return;
}

float Top(STACK s) 
{
	if (isEmpty(s)) 
		return -1;
	return s.Top->Data;
}
float NghichDaoBaLan()
{
	STACK oprnd;
	string s;
	cout << "Nhap chuoi ki so Ba Lan: ";
	float res = 0, before = 0, after = 0;
	bool quit = false;
	while (!quit) {
		cin >> s;
		switch (s[0]) {
		case '.':
			quit = true; 
			break;
		case '+':
			before = Top(oprnd);
			Pop(oprnd);
			after = Top(oprnd);
			Pop(oprnd);
			res = after + before;
			Push(oprnd, res);
			break;
		case '-':
			before = Top(oprnd);
			Pop(oprnd);
			after = Top(oprnd);
			Pop(oprnd);
			res = after - before;
			Push(oprnd, res);
			break;
		case '*':
			before = Top(oprnd);
			Pop(oprnd);
			after = Top(oprnd);
			Pop(oprnd);
			res = after * before;
			Push(oprnd, res);
			break;
		case '/':
			before = Top(oprnd);
			Pop(oprnd);
			after = Top(oprnd);
			Pop(oprnd);
			res = after / before;
			Push(oprnd, res);
			break;
		default:
			istringstream in(s);
			in >> after;
			Push(oprnd, after);
		}
	}
	return res;
}