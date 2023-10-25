#include "Ejercicio01.h"

//Comentario para el commit

Node<char>* Ejercicio01::remove(Node<char>* head)
{
    Node<char>* actual = head;

    while (actual != nullptr && actual->next != nullptr)
    {
        if (actual->value == actual->next->value)
        {
            Node<char>* temporal = actual->next;
            actual->next = actual->next->next;
            delete temporal;
        }
        else
        {
            actual = actual->next;
        }
    }

    return head;
}