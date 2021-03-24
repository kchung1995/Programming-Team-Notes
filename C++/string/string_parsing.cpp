#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

/*
문자열을 구분자를 기준으로 자르는 코드이다.
sstream 라이브러리를 필요로 하며, istingstream 클라스를 이용한다.
*/

int main() {
    vector <string> rules = {"GAMES C# JAVA SWIFT C++ Kotlin", 
    "DATABASE MySQL MariaDB NoSQL PostgreSQL SQLite", 
    "WEB HTML JavaScript Python CSS C"};
    
    for (int i = 0; i < rules.size(); i++) {
        string now = rules[i];
        istringstream ss(now);
        string buffer;
        vector<string> result;
        result.clear();
        
        while (getline(ss, buffer, ' ')) {
            result.push_back(buffer);
        }
        
        cout << "index: " << i << ", category: " << result[0] << endl;
        cout << "contains: " << endl;
        for (int j = 1; j < result.size(); j++) {
            cout << result[j] << " ";
        }
        cout << endl << endl;
    }
}

/*
result: 

index: 0, category: GAMES
contains: 
C# JAVA SWIFT C++ Kotlin 

index: 1, category: DATABASE
contains: 
MySQL MariaDB NoSQL PostgreSQL SQLite 

index: 2, category: WEB
contains: 
HTML JavaScript Python CSS C 

Program ended with exit code: 0

*/

