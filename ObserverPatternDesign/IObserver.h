
#ifndef __OBSERVERPATTERNDESIGNIOBJECTCLASS__
#define __OBSERVERPATTERNDESIGNIOBJECTCLASS__

#include <iostream>


class IObserver{
public:
    virtual ~IObserver(){};
    virtual void update(const std::string &message_from_subject) = 0;
};


#endif //__OBSERVERPATTERNDESIGNIOBJECTCLASS__