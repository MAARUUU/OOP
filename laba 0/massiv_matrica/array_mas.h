#ifndef MY_MODULE_H
#define MY_MODULE_H
#include <string>
#include <vector>

using namespace std;

float create_array(unsigned n, double *a);
int array_file(unsigned n,double *a,std::string fname);
float file_array(unsigned n,std::string fname);
void randMatrix(vector<vector<int>> &m, unsigned n);
void writeMatrixToFile(string str,vector<vector<int>> m, int size);
void readMatrixFromFile(string str, vector<vector<int>> &m, unsigned n);


#endif // MY_MODULE_H
