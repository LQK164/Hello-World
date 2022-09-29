#include <iostream>
#include <cstdio>
#include <stdlib.h>
#include <Windows.h>
#include <conio.h>
using namespace std;

void Enqueue(char queue[], char element, int& rear, int arraySize) {
    if (rear == arraySize)          // Hàng đợi đã đầy
        cout << "chuc mung ";
    else {
        queue[rear] = element;    // Thêm một phần tử vào phía sau
        rear++;
    }
}

void Dequeue(char queue[], int& front, int rear) {
    if (front == rear)            // Hàng đợi rỗng
        printf("nam moi ");
    else {
        queue[front] = 0;        // Xóa phần tử đầu tiên
        front++;
    }
}

char Front(char queue[], int front) {
    return queue[front];
}


int main() {
    char queue[] = "Truong DH CNTT";
    int front = 0;
    cout << "\nBat dau chay tu: " << front;
    int rear;
    cout << "\nKet thuc tai: ";
    cin >> rear;
    int arraySize = 50;                    	       //Khai báo số bước dòng chữ chạy
    int N = 50;                         // Số bước di chuyển
    int sodong = 0, dem = 0, demm = 0;
    while (dem <= 9) {
        system("cls");
        for (int i = 0; i < sodong; i++) {
            cout << "       ";
        }
        for (int i = front; i < rear; ++i)
            cout << queue[i];
        sodong++;
        dem++;
        Sleep(300);
    }
    sodong = 0;
    while (demm <= 9) {
        system("cls");
        for (int i = 0; i < sodong; i++) {
            cout << endl << endl;
        }
        for (int i = 0; i < 9; i++) {
            cout << "       ";
        }
        for (int i = front; i < rear; i++)
            cout << queue[i];
        sodong++;
        demm++;
        Sleep(300);
    }
    sodong = 9;
    int n = 9, m = 9;
    while (dem >= 0) {
        system("cls");
        for (int i = 0; i < 9; i++) {
            cout << endl << endl;
        }
        for (int j = n - 1; j >= 0; j--) {
            cout << "       ";
        }
        for (int i = front; i < rear; i++)
            cout << queue[i];
        n--;
        dem--;
        Sleep(300);
    }
    while (demm >= 0) {
        system("cls");
        for (int j = m - 1; j > 0; j--) {
            cout << endl << endl;
        }
        for (int i = front; i < rear; i++)
            cout << queue[i];
        m--;
        demm--;
        Sleep(300);
    }
    return 0;
}