#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <list>
#include <ctime>
#include <map>

using namespace std;

bool cmp(const string& a, const string& b) {
	return a.size() < b.size();
}

bool isEven(int a)
{
	return (a > 500);
}

typedef map<string, int > MyMap;
typedef multimap<string, vector<int>> MMyMap;
typedef MMyMap::iterator MIter;
typedef MyMap::iterator Iter;


void main() {

	srand(NULL);

	vector<string> s = { "abc", "acd", "asdd", "bcfd", "ygxz", "xhgyzl" };

	sort(begin(s), end(s));

	for (int i = 0; i < s.size(); i++)
		cout << s[i] << endl;

	cout << endl;

	sort(begin(s), end(s), greater<string>());

	for (int i = 0; i < s.size(); i++)
		cout << s[i] << endl;

	cout << endl;

	sort(begin(s), end(s), cmp);

	for (int i = 0; i < s.size(); i++)
		cout << s[i] << endl;

	vector<int>	v;

	for (size_t i = 0; i < 10; i++)
	{
		v.push_back(i*i);
	}
	
	sort(begin(v), end(v), greater<int>());
	for (int i = 0; i < 10; i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;


	vector<int> v2;

	for (int i = 0; i < 10; i++)
	{
		v2.push_back(i);
	}

	v2.insert(begin(v2)+9, 3, 50);

	for (int i = 0; i < v2.size(); i++)
		cout << v2[i] << " ";
	
	cout << endl;
	cout << endl;


	list<int> a;
	list<int>::iterator it;

	for (size_t i = 0; i < 10; i++)
		a.push_back(rand() % 1000);
	

	for (it = a.begin(); it != a.end(); it++) cout << *it << " ";
	cout << endl;

	a.remove_if(isEven);

	for (it = a.begin(); it != a.end(); it++) cout << *it << " ";
	cout << endl;
	cout << endl;


	map<string, int> m;
	m["asd"] = 8777;
	m["qwe"] = 8747;
	m["zxc"] = 8707;
	m["rty"] = 8700;



	Iter res = m.find("qwe");
	if (res != m.end())
	{
		cout << res->first << " ";
		cout << "Phone number: " << res->second << endl;
	}
	else
		cout << "Not found" << endl;

	MMyMap mm;



	mm.insert(MMyMap::value_type("asd", { 12,12,11,12 }));
	mm.insert(MMyMap::value_type("qwe", { 12,12,11,8 }));
	mm.insert(MMyMap::value_type("zxc", { 10,12,11,12 }));
	mm.insert(MMyMap::value_type("rty", { 9,12,11,10 }));

	MIter res2 = mm.find("qwe");
	if (res2 != mm.end()) {
		cout << res2->first << " ";
		for (size_t i = 0; i < res2->second.size(); i++)
		{
			cout << res2->second[i] << " ";
		}
		cout << endl;
	}
	
	else
		cout << "Not found" << endl;


	system("pause");
}