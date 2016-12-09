#ifndef TOKEN_H
#define TOKEN_H

#include<map>
#include<string>
#include<iostream>

enum  TYPE{
    TYPE_COUNTER,
    TYPE_TIMESTAMP,
    TYPE_TIME_ARROW,
    TYPE_TEXT,
    TYPE_EMPTY,
    TYPE_END_OF_FILE
};
typedef enum TYPE TOKENTYPE;

template<typename ValType>
class Token
{
private:

   std::map<TOKENTYPE ,std::string> representation_=
   {
       {TYPE_COUNTER, "numer"},
       {TYPE_TIMESTAMP,"timestamp"},
       {TYPE_TIME_ARROW,"arrow"},
       {TYPE_TEXT,"sbutitle"}
   };
   TOKENTYPE type_;
   ValType value_;
public:
    Token (TOKENTYPE tp, ValType val) : type_(tp), value_(val)  {  /*empty**/}
    void Display();




};


template <typename ValType>
void Token<ValType>::Display()
{
    std::cout<<"Type: "<<representation_[type_]<<"Value: "<<value_;
}

#endif // TOKEN_H
