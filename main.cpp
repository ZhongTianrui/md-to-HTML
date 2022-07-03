#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cout << "hello to \'md-to-HTML\'.Please enter the path of the md file.\n";
	while (cout << ">>> ") {
		char a[10005] = {"i5ting_toc -f "}, file[1005] = {0};
		cin >> file;
		strcat(a, file);
		const char *a1 = a;
		ifstream fin;
		fin.open("bool-data");
		int t;
		fin >> t;
		if (!t) system("downlode.exe");
		system(a);
		int len = strlen(file) - 1;
		file[len - 1] = 'h';
		file[len] = 't';
		file[len + 1] = 'm';
		file[len + 2] = 'l';
		char a2[10005] = {"copy preview\\"};
		strcat(a2, file);
		a2[strlen(a2)] = ' ';
		strcat(a2, file);
		const char *a3 = a2;
		system(a3);
	}
	return 0;
}
