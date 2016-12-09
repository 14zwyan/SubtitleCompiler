#ifndef PARSER_H
#define PARSER_H

enum State
{
    START,
    COUNTER,
    START_TIME,
    ARROW,
    END_TIME,
    TEXT
};
typedef enum State State;

class Parser
{
public:
    Parser();
};

#endif // PARSER_H
