
#include <iostream>
#include <sstream>
#include <map>
#include <string>

using namespace std;

int main() {
    string paragraph;
    cout << "Enter a paragraph: ";
    getline(cin, paragraph);

    map<string, int> wordCount;
    stringstream ss(paragraph);
    string word;
    while (ss >> word) {
        wordCount[word]++;
    }

    cout << "Word frequencies:" << endl;
    for (const auto& entry : wordCount) {
        cout << entry.first << ": " << entry.second << endl;
    }

    return 0;
}
