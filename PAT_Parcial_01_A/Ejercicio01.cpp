#include "Ejercicio01.h"


Node<char>* Ejercicio01::remove(Node<char>* head)
{
    Node<char>* current = head;

    while (current != nullptr && current->next != nullptr)
    {
        if (current->value == current->next->value)
        {
            Node<char>* temp = current->next;
            current->next = current->next->next;
            delete temp;
        }
        else
        {
            current = current->next;
        }
    }

    return head;
}