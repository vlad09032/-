/*
Ќапишите программу , в которой по извесной начальной скорости V и времени полета
тела T определ€етс€ угол aльфа под которым тело брошено по отношению к горизонту
(воспользуйтесь соотношением a = arcsin(gT/2V) ).
Ќиже показан вывод программы, котора€ у вас должна получитьс€:

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