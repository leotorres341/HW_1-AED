#include <iostream>
#include <string>

template <typename T>
struct Node {
 T valor;
 Node<T>* next;

 // Constructor
 Node(): valor(), next(nullptr){}
 Node (const T& v): valor(v),next(nullptr){}
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

    void push_front(U new_value){
      Node<U>* new_element(new_value);
      Node<U>* temp=head;





    }




  

};


int main(){


    
}


