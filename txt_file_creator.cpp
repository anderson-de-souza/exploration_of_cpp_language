#include <iostream>
#include <fstream> 

using namespace std;

int main() {
    
    string file_name;
    
    cout << "Type file name below" << "\n";
    
    cin >> file_name;
    
    ofstream file(file_name);
    
    string file_content;
    
    cout << "Type file content now" << "\n";
    
    cin >> file_content;
    
    file << file_content;
    
    file.close();
    
    return 0;
    
}
