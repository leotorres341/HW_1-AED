#include <iostream>
#include <string>

template <typename T>
struct Node {
 T valor;
 Node<T>* next;
};

template <typename U>
class List {
    private:
    Node<U>* head;

    public:
    List():head(nullptr){};

    // Implementacion de metodos
  
    U front(){
        if(head== nullptr){
            std::cout <<"List vacia";
            return U();
        }

        return head->valor;
    }

    U back(){
        if(head==nullptr){
            std::cout <<"List vacia";
            return U();
        }
        Node<U>* temp=head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        return temp-> valor;
    }

  

};


int main(){


    
}
