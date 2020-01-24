#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <vector>
#include "array_mas.h"

using namespace std;


float create_array(unsigned n, double *a)//создаем массив, n-число эл-тов
{
    int i;
    for (i=0;i<n;i++)
    {
        a[i]=rand()%25;
    }
    return 0;
}

//работа с файлами

int array_file(unsigned n,double *a,std::string fname) //запись данных в файл
{
    int i=0;
std::ofstream fout;
fout.open(fname);
if(fout.is_open()){
    for (i=0;i<n;i++)
{
    fout<<a[i];
    fout<<'\n';
}
}
fout.close();
return  EXIT_SUCCESS;
}


float file_array(unsigned n,std::string fname) //чтение данных из файла
{
    int i=0;
    std::string s;
    double *a;

std::ifstream f;
f.open(fname);
if (f.is_open())
    for(i=0;i<n;i++)
    {
        while(getline(f, s))
        {
        a[i]=stof(s);
        std::cout<<endl;
        }
}
f.close();
}


void randMatrix(vector<vector<int>> &m, unsigned n){
    m.resize(n);
    for(int i = 0; i < n; i++)
        m[i].resize(n);
    srand(time(NULL));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
          m[i][j] = rand() % 10;
}


void writeMatrixToFile(string str,vector<vector<int>> m, int size){
    ofstream filename(str);
    filename.seekp(0);
    for(int i = 0; i < size; i++)
        for(int j = 0; j < size; j++)
            if(j == size - 1) filename<< "  " << m[i][j]<<endl;
            else
                filename << "  " << m[i][j];
    filename.close();
}


void readMatrixFromFile(string str, vector<vector<int>> &m, unsigned n){
    ifstream filename(str);
    filename.seekg(0, ios_base::beg);
    for(int i =0; i < n; i++)
        for(int j = 0; j < n; j++)
            filename >> m[i][j];
    filename.close();
}

