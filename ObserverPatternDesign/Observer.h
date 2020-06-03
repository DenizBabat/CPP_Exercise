#ifndef __OBSERVERPATTERNDESIGNOBSERVERCLASS__
#define __OBSERVERPATTERNDESIGNOBSERVERCLASS__
#include "IObserver.h"
#include "Subject.h"

static int m_staticNumber = 0;

class Observer : IObserver{
public: 
    Observer(Subject& subject) : m_subject(subject) {
        m_subject.attach(this);
        std::cout << "Hi, I'm the Observer \"" << ++m_staticNumber << "\".\n";
        m_number = m_staticNumber;
    }
    virtual ~Observer();


    void update(const std::string& messageFromSubject) override;
    void RemoveMeFromTheList();
    void PrintInfo();

private:
    std::string m_messageFromSubject;
    Subject& m_subject;
    int m_number;
};

#endif //__OBSERVERPATTERNDESIGNOBSERVERCLASS__