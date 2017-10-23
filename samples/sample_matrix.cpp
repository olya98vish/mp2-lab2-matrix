// ННГУ, ВМК, Курс "Методы программирования-2", С++, ООП
//
// sample_matrix.cpp - Copyright (c) Гергель В.П. 07.05.2001
//   Переработано для Microsoft Visual Studio 2008 Сысоевым А.В. (20.04.2015)
//
// Тестирование верхнетреугольной матрицы

#include <iostream>
#include "utmatrix.h"
//---------------------------------------------------------------------------

void main()
{
 // TMatrix<int> a(5), b(5), c(5);
  TVector <double> vec1, vec2;
  int  n;

  setlocale(LC_ALL, "Russian");
  /*cout << "Тестирование программ поддержки представления треугольных матриц"
    << endl;
  for (i = 0; i < 5; i++)
    for (j = i; j < 5; j++ )
    {
      a[i][j] =  i * 10 + j;
      b[i][j] = (i * 10 + j) * 100;
    }
  c = a + b;
  cout << "Matrix a = " << endl << a << endl;
  cout << "Matrix b = " << endl << b << endl;
  cout << "Matrix c = a + b" << endl << c << endl;*/
  cout<<"введите размер\n";
  cin>> n;
  cout<<"заполнение вектора 1"<<endl;
  vec1.zap_1(n);
  cout<<"заполнение вектора 2"<<endl;
  vec2.zap_1(n);
  cout<<"вектор 1"<<endl;
  for (int i=0; i<n; i++)
	  cout<<vec1[i]<<endl;
  cout<<"вектор 2"<<endl;
  for (int i=0; i<n; i++)
	  cout<<vec2[i]<<endl;
  /*cout<<"сумма векторов"<<endl;
  (vec1+vec2).pechv();*/


}
//---------------------------------------------------------------------------
