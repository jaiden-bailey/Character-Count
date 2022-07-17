//  Created by Jaiden Bailey on 6/28/22.
// Future plans: create a function for word count, create a menu, allow either user input or read file,

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void letterMatch(string input, char letter){
    int matched = 0;

    for( int i = 0; i <= input.size ( ); i++ ){
        if (letter == input[i]) {
            matched++;
        };
    }
    cout << matched << endl;
}

int main(int argc, const char * argv[]) {
//    string input = "";
//    cin >> input;
    
   char  letter = '\0';
    cin >> letter;
   
    
    string FileLine;
    ifstream MyReadFile("/Users/finessegod/Documents/Char count/Char count/bird.txt");
    while (getline(MyReadFile, FileLine )) {
        cout << FileLine << endl;
    }
    
//    letterMatch(input, letter);
    
    letterMatch(FileLine, letter);
    
    return 0;
}
