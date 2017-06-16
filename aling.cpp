#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <string>
using std::string;

#include <fstream>
using std::ifstream;
using std::ofstream;

#include <vector>
using std::vector;

#include <cstdlib>

int main(int argc, char * argv[]) {

	if(argc != 2) {
		cout << "Arquivo não encontrado" << endl;
		exit(EXIT_FAILURE);
	}

	vector<string> sequencia;
	vector<string>::iterator it;
	string seq;
	ifstream input(argv[1]);

	if(!input.is_open()) {
		cout << "Falha na abertura do arquivo " << endl;
		exit(EXIT_FAILURE);
	}


	while(!input.eof()) {
		getline(input, seq);
		if(seq[0] != '>') {
			cout << seq << endl;
			sequencia.push_back(seq);
		}
	}

	cout << "Tamanho: " << sequencia.size() << endl;
}
