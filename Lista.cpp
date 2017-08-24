#ifndef LISTA_H
#define LISTA_H
#include <iostream>


using namespace std;
/*
template<class T>
class Cnode
{
    public:
        T c_dato;
        Cnode<T> *c_sig;
        Cnode(T x)
        {
            c_dato = x;
            c_sig = NULL;
        }
};


template<class T>
class Cless
{
    public:
        Cnode<T> *head;
        Cless(){head = NULL;}

        bool buscar(T x , Cnode<T> ** &p)
        {
            for(p = &head; !!*p && (*p)->c_dato != x; p = &(*p)->c_sig);
            return !!*p && (*p)->c_dato == x;
        }

        bool insertar(T x)
        {
            Cnode<T> **p;
            if(buscar(x,p))return 0;
            Cnode<T> *n=new Cnode<T>(x);

            n->c_sig = *p;
            *p  = n;
            return 1;
        }

        bool borrar(T x)
        {
            Cnode<T> **p;
            if(!buscar(x,p))return 0;

            Cnode<T> *d = *p;
            *p = (*p)->c_sig;
            delete d;
            return 1;
        }

        void imprimir() const
        {
            for(Cnode<T> *p=head;!!p;p=p->c_sig)
                cout << p->c_dato << " ";
            cout << endl;
        }

        ~Cless()
        {
            Cnode<T> *p;
            while(head)
            {
                p=head;
                head = head->c_sig;
                delete p;
            }
        }
        int tamLista()
        {
            int tam=0;
            for(Cnode<T> *p=head;p;p=p->c_sig)tam++;
            return tam;
        }
};*/



#endif // LISTA_H
