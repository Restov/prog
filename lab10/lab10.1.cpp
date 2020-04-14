/*
==========================================
 Title:  Lab10.1.
 Author: Bakhmann, Kremlyakova
 Date:   27.03.2020
========================================== */
#include <bits/stdc++.h>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout;  // создаем объекты класса ofstream
    ofstream sogl;
    ofstream glasn;
    ifstream fin; // создаем объекты класса ifstream
    fout.open("text.txt"); // создание файлов
    sogl.open("sogl.txt");
    glasn.open("glasn.txt");
    int n, i = 0, m = 0;
    cout << "Enter the number of lines: ";
    cin >> n;
    string s[n];
    cout << "\nEnter words: ";
    cin.ignore(); // игнорирование '\n'
    for(i = 0; i < n; ++i)
    {   
        getline(cin, s[i],'\n'); // считывание строк
        fout << s[i] << "\n"; //запись строки в файл
        m+= s[i].length(); //подсчет длин строк 
    }
    fout.close(); //закрываем файл
    char st[m];
    fin.open("text.txt"); //открываем файл для чтения 
    i = 0;
    while(fin.get(st[i])) //пока в файле нет 0 эл
    {
        if(st[i] == 'a' || st[i] == 'e' || st[i] == 'i' || st[i] == 'o' || st[i] == 'u' || st[i] == 'y')//проверка на наличие гласной  
        {   
            bool flag = true;
            while(flag == true)
            {
                if(st[i] == ','||st[i] == ' '||st[i] == '\n') // проверка на наличие ' ', ',', '/n'
                {
                    flag = false;
                    ++i;
                }
                else
                {
                    glasn << st[i]; //записываем букву в файл
                    ++i;
                    fin.get(st[i]); //считываем следующи символ с файла
                }
            }
            glasn << " ";
        }
        else // если буква согласная 
        {
            bool flag = true;
            while(flag==true)
            {
                if(st[i] == ','||st[i] == ' '||st[i] == '\n' ) // проверка на наличие ' ', ',', '/n'
                {
                    flag = false;
                    ++i;
                }
                else
                {
                    sogl << st[i]; //записываем букву в файл
                    ++i;
                    fin.get(st[i]); //считываем следующий символ с файла
                }
            }
            sogl << " ";
        }
    }
        fin.close(); //закрываем файлы
        sogl.close();
        glasn.close();
        return 0;
    }