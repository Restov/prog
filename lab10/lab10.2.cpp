/*
==========================================
 Title:  Lab10.1.
 Author: Bakhmann, Kremlyakova
 Date:   27.03.2020
========================================== */
#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include <string>
using namespace std;
int main()
{ 
    string str;
    ifstream fin; // буфер под файл который читаем
    ofstream fout("output.txt");  // буфер под файл в который записываем
    fin.open("input.txt"); // открываем файл
    while (fin) // пока в файле нет 0 элементов
    {
        getline(fin, str); //считываем строку
        for (int i = (str.length() - 1); i >= 0; i--) // вывод каждого символа по убыванию
        {
            fout << str[i];
        }
        fout << endl;
    }
    fin.close(); // закрытие файлов
    fout.close();
}