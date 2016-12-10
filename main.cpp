#include <iostream>
#include<string>
#include<fstream>


#include"Lexical_analyser.h"
#include"Parser.h"

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
    //Lexical_analyser lex_analyser;
    //lex_analyser.test(text);
    Parser parser;
    parser.test(text);


    return 0;
}
