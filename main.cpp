#include <iostream>
#include<string>
#include<fstream>


#include"Lexical_analyser.h"

using namespace std;

int main(int argc, char *argv[])
{
    ifstream    lexical_test_file("testString");
    string text;
    char ch;
    while( lexical_test_file.get(ch) )
    {
        text+=ch;
    }

    cout<<text;
    Lexical_analyser lex_analyser;
    lex_analyser.test(text);
    //string arrow("-->");
    //cout<<arrow.find( "-->");
    return 0;
}
