/*
�������� ��������� , � ������� �� �������� ��������� �������� V � ������� ������
���� T ������������ ���� a���� ��� ������� ���� ������� �� ��������� � ���������
(�������������� ������������ a = arcsin(gT/2V) ).
���� ������� ����� ���������, ������� � ��� ������ ����������:

CppStudio.com
 V = 60

 T = 12
Ugol = 78.5217
*/
#include<iostream>
int vvod()
{
	std::cout << "V= ";
	int v;
	std::cin >> v;
	return v;
}

int main()
{
	int v,t;
	std::cout << "V= ";
	std::cin >> v;
	std::cout << "T= ";
	std::cin >> t;
	std::cout << "Ugol = " << (asin(9.8 * t / (2 * v))) * 90 / asin(1.0);

}