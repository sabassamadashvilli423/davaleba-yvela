#include <iostream>
#include"river.h"
#include<vector>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin("river.txt");
	vector<River> a;
	River t;
	int i;
	fin >> i;
	for (int j = 0; j < i; j++) {
		fin >> t.name >> t.length >> t.start >> t.end >> t.count;
		a.push_back(t);
	}
	for (int j = 0; j < i; j++) {
		if (a[j].length > i) {
			a[j].printRvr();
		}
	}
}