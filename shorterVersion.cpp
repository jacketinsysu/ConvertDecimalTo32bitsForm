#include <fstream>
#include <string>
#include <bitset>
using namespace std;

int main(int argc, char** argv){
	fstream in(argv[1], ios::in);
	fstream out(argv[2], ios::out);

	int index = 0, t;
	while(in >> t){
		out << index++ << " => \"" << bitset<32>(t).to_string() << "\"" << endl;
	}

	out << "others => \"00000000000000000000000000000000\"" << endl;
	in.close();
	out.close();
	return 0;
}
