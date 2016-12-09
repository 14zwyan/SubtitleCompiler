#ifndef SUBTITLE_H
#define SUBTITLE_H

#include<string>

class Time
{
private:
    int hour;
    int minute;
    int second;
    int msecond;
};

class Subtitle
{
public:
    Subtitle();

private:
    int suttitleId;
    Time begin;
    Time end;
    std::string content;
};

#endif // SUBTITLE_H
