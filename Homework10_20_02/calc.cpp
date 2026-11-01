#include <iostream>
#include "calc.h"
using namespace std;

int sum(int sum1, int sum2);

int main() {
	int input_value1 = 0;
	int input_value2 = 0;
	cout << "一つ目の値を入力してください" << endl;
	cin >> input_value1;
	cout << "二つ目の値を入力してください" << endl;
	cin >> input_value2;
	cout << sum(input_value1, input_value2)<< endl;
}