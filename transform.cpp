#include <fstream>
#include <string>
#include <bitset>
#include <sstream>
using namespace std;

string transform(int num, int index){
	stringstream ss;
	string s;
	ss << index;
	ss >> s;
	s += " => \"";
	bitset<32> key(num);
	s += key.to_string();
	s += "\"";
	return s;
}

int main(int argc, char** argv){
	fstream in(argv[1], ios::in);
	fstream out(argv[2], ios::out);

	int index = 0, t;
	while(in >> t){
		out << transform(t, index++) << endl;
	}

	out << "others => \"00000000000000000000000000000000\"" << endl;
	in.close();
	out.close();
	return 0;
}
