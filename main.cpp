#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "CSVHandler/CSVHandler.h"
using namespace std;

int main(){
    CSVHandler* a = new CSVHandler();
    vector<Champion>* t = a->parseCSV();
    cout << t->at(0).getName();

}   

/*

ifstream arquivo(CSV);
    if (!arquivo.is_open()) {
        cerr << "Erro ao abrir o arquivo." << endl;
        return 1;
    }
return 0;

*/