#include "Subject.h"
#include <bits/stdc++.h>

void Subject::attach(IObserver* observer){
    m_observers.emplace_back(observer);
}
void Subject::detach(IObserver* observer){
   m_observers.erase(std::remove(m_observers.begin(), m_observers.end(), observer));
}
void Subject::notify(){
    for (auto* observer : m_observers){
        observer->update(m_message);
    }
}

void Subject::CreateMessage(std::string message = "Empty") {
    m_message = message;
    notify();
}

void Subject::SomeBusinessLogic() {
    m_message = "change message message";
    notify();
    std::cout << "I'm about to do some thing important\n";
}
