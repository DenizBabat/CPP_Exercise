#include "Observer.h"

Observer::~Observer() {
    std::cout << "Goodbye, I was the Observer \"" << m_number << "\".\n";
}

void Observer::update(const std::string& messageFromSubject) {
    m_messageFromSubject = messageFromSubject;
    PrintInfo();
}
void Observer::RemoveMeFromTheList() {
    m_subject.detach(this);
    std::cout << "Observer \"" << m_number << "\" removed from the list.\n";
}
void Observer::PrintInfo() {
    std::cout << "Observer \"" << this->m_number << "\": a new message is available --> " << this->m_messageFromSubject << "\n";
}
