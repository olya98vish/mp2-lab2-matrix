// ����, ���, ���� "������ ����������������-2", �++, ���
//
// sample_matrix.cpp - Copyright (c) ������� �.�. 07.05.2001
//   ������������ ��� Microsoft Visual Studio 2008 �������� �.�. (20.04.2015)
//
// ������������ ����������������� �������

#include <iostream>
#include "utmatrix.h"
//---------------------------------------------------------------------------

void main()
{
 // TMatrix<int> a(5), b(5), c(5);
  TVector <double> vec1, vec2;
  int  n;

  setlocale(LC_ALL, "Russian");
  /*cout << "������������ �������� ��������� ������������� ����������� ������"
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
  cout<<"������� ������\n";
  cin>> n;
  cout<<"���������� ������� 1"<<endl;
  vec1.zap_1(n);
  cout<<"���������� ������� 2"<<endl;
  vec2.zap_1(n);
  cout<<"������ 1"<<endl;
  for (int i=0; i<n; i++)
	  cout<<vec1[i]<<endl;
  cout<<"������ 2"<<endl;
  for (int i=0; i<n; i++)
	  cout<<vec2[i]<<endl;
  /*cout<<"����� ��������"<<endl;
  (vec1+vec2).pechv();*/


}
//---------------------------------------------------------------------------
