#include "Lexical_analyser.h"

#include<string>
using std::string;

bool isDigit(string str)
{
    string::iterator begin=str.begin();
    string::iterator end=str.end();

    while( begin != end)
    {
        if( ! ( (*begin) >='0' && (*begin )<= '9')  )
            return false;
    }
    return true;
}

bool isDigit(char ch)
{
    if(  ch >='0' && ch<= '9')
        return true;
    else
        return false;
}


void Lexical_analyser::ReadChar(char ch)
{
    bool move_cursor=true;
    TOKENTYPE createType;
    string after_append_ch;

    if( ch)
        after_append_ch=char_buffer_+ch;
    else
        after_append_ch=char_buffer_;

    if( state_ == TYPE_TEXT)  //1
    {
        //strip the left part
        int  index;
        for( int i=0; !after_append_ch[i] ; ++i)
            ++index;
        string temp=string( after_append_ch.begin() + index,
                            after_append_ch.end() );

        if( isDigit(temp) ) //2
        {
            if ( ch) //3
                char_buffer_+=ch;
            state_=TYPE_COUNTER;
        }
        else if(  ch == '-')  //2
        {
            char_buffer_+=ch;
            state=TYPE_TIME_ARROW;
        }
        else if(  ch == '\n' || !ch) //2
        {
            if (ch)//3
            {
                char_buffer_+=ch;
                createType=TYPE_TEXT;
            }
            else if( !ch && char_buffer_ .length() ==0 )//3
            {
                createType=-1;
            }
            else //3
            {
                createType=TYPE_TEXT;
                state_=TYPE_TEXT;
            }
        }
        else //2
        {
            if( ch) //3
                char_buffer_ +=ch;
        }





    }

    else if( state_ == TYPE_COUNTER ) //1
    {
         if (ch  && isDight(ch)) //2
             char_buffer_+=ch;
         else if (ch== '\n' or  !ch) //2
         {
             createType=TYPE_COUNTER;
             state_=TYPE_TEXT;
         }
         else if ( ch == ':') //2
         {
             if( ch) //3
                 char_buffer_+=ch;
             state_=TYPE_TIMESTAMP;
         }
        else //2
         {
             if (ch) //3
                 char_buffer_+=ch;
             state_=TYPE_TEXT;
         }

         //LINE 107

    }

}
