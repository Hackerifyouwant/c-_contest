#include <iostream>
using namespace std;

int values[31], times, number, parts;

int GCD(int a, int b) {
	int buffer = a;
	while (b) 
		a = b, b = buffer % b, buffer = a;
	return a;
}

void Partition(int index, int remain) {
	if (index == parts - 1) {
		for (int i = 0; i < index; i++)
			if (GCD(remain, values[i]) > 1)
				return;
		for (int i = 0; i < index; i++)
			cout << values[i] << ' ';
		cout << remain << '\n';
		return;
	}
	int buffer = remain / (parts - index), j;
	for (int i = 1; i <= buffer; i++) {
		for (j = 0; j < index; j++)
			if (i < values[j] || GCD(i, values[j]) > 1)
				break;
		if (j < index)
			continue;
		values[index] = i, Partition(index + 1, remain - i);
	}
}

int main() { 
	while (cin >> times)
		for (int i = 1; i <= times; i++)
			cout << "Case " << i << ":\n", cin >> number >> parts, Partition(0, number);
}

