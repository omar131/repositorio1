#ifndef HASH_H
#define HASH_H

#include <iostream>
#include "Lista.h"

using namespace std;

template<class T,class F,class E>
class CHashTable
{
    public:
        unsigned m_size;
        E **tabla;
        F m_f;
        CHashTable(unsigned m_size_data)
        {
            m_size = m_size_data;
            tabla = new E*[m_size];

            for(int i=0;i<m_size;i++)
                tabla[i]=new E;
        }

        bool insertar(T x)
        {
            unsigned key = m_f(x,m_size);
            tabla[key]->insertar(x);
            return 1;
        }
        bool remover(T x)
        {
            unsigned key = m_f(x,m_size);
            tabla[key]->borrar(x);
            return 0;
        }

        bool buscar(T x)
        {
            for(int i=0;i<m_size;i++)
            {
                Nodo<T> **p;
                if(!!tabla[i]->buscar(x,p))
                    return 1;
            }
            return 0;
        }

        void imprimirHashTable()
        {

            for(int i=0;i<m_size;i++)
            {
                if(!!tabla[i]->m_root)
                    tabla[i]->imprimir(tabla[i]->m_root);
                cout << endl;
            }
        }
        void imprimirComportamiento()
        {
            for(int i=0;i<m_size;i++)
            {
                cout <<tabla[i]->tamLista() << endl;
            }
        }

};

//clase funcion
template <class T>
class CHashFunction
{
public:
    unsigned operator()(T x,unsigned mod)
    {
        unsigned r;
        r = (x*x)%mod;
        return r;
    }

};

#endif // HASH_H
