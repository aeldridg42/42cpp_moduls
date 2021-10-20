#include <iostream>
#include <fstream>

void str_change(std::string *str, char *oldS, char *newS, int num) {
	std::string tmp1 = str->substr(num);
	int pos = tmp1.find(oldS);

	if (pos == -1)
		return ;
	*str = str->substr(0, pos + num);
	str->append(newS);
	num = str->size();
	str->append(tmp1.substr(pos + strlen(oldS)));
	str_change(str, oldS, newS, num);
}

std::string* newName(char *str) {
	int i;
	std::string *tmp = new std::string;
	for (i = 0; str[i] && str[i] != '.'; i++)
		*tmp += toupper(str[i]);
	*tmp += ".replace";
	return tmp;
}

int main(int argc, char **argv) {
	std::ifstream ifs;
	std::ofstream ofs;
	std::string *tmp, str, full = "";

	if (argc != 4) {
		std::cout << "Replace failded. Try to use 3 arguments\n";
		return (1);
	}
	tmp = newName(argv[1]);
	ifs.open(argv[1]);
	if (!ifs) {
		std::cout << "File opening failed. exiting..\n";
		return 1;
	}
	ofs.open(*tmp);
	if (!ofs) {
		std::cout << "File opening failed. exiting..\n";
		return 1;
	}
	while (!ifs.eof()) {
		str = "";
		getline(ifs, str);
		full += str + '\n';
	}
	str_change(&full, argv[2], argv[3], 0);
	ofs << full;
	ifs.close();
	ofs.close();
	delete tmp;
	return 0;
}