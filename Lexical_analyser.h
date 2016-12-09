#ifndef LEXICAL_ANALYSER_H
#define LEXICAL_ANALYSER_H

#include<vector>
#include<string>

#include"Token.h"


class Lexical_analyser
{    
public:
    Lexical_analyser();

    void ReadChar();

private:

    std::vector<Token<int> > tokens_number_;
    std::vector<Token<std::string> > tokens_timestamp_;
    std::vector< Token<std::string> > tokens_test_;

    TOKENTYPE  state_=TYPE_TEXT;
    std::string char_buffer_="";



};

#endif // LEXICAL_ANALYSER_H
