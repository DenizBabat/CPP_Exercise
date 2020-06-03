

#ifndef __OBSERVERPATTERNDESIGNSUBJECTCLASS__
#define __OBSERVERPATTERNDESIGNSUBJECTCLASS__

#include <vector>
#include <iostream>
#include <string>
#include "IObserver.h"
#include "ISubject.h"


class Subject : public ISubject {
public:
    Subject(){}
    virtual ~Subject() = default;

    void attach(IObserver* observer);
    void detach(IObserver* observer);
    void notify();

    void CreateMessage(std::string message);
    void SomeBusinessLogic();
private:
    std::vector<IObserver*> m_observers;
    std::string m_message;
};

#endif //__OBSERVERPATTERNDESIGNISUBJECTCLASS__