#ifndef VECTOR_T_H
#define VECTOR_T_H

template <typename T>
class Vector
{
    // accessor functions and so forth
private:
    T* vec_data;   // we'll store the data as block of dynamically allocated
    // memory
    int length;    // number of elements (vec_data)
    int vec_size;  // unit vec_data size
    
public:
    
    Vector(){
        vec_size = sizeof(T);
        length = 0;
        vec_data = new T[10]; //assumed max limit, for simplification
    }
    
    void insert(T val){

        if(10 > (vec_size * length)){
            
            ++length;  // we are about to add an element
            
            int index = 0;
            if(length != index){  //should always be the case, after first time
                index = length -1;
            }
            vec_data[index] = val; //element added next
            cout << "[ADDED 2 VectorT], element : " << val << " !" << endl;
            
        }else{
            cout << "Sorry, cannot add more [overflow state reached] !" << endl;
        }
        
    }
    
    int size(){
        return length*sizeof(vec_data[0]);
    }
    
    ~Vector(){
        delete [] vec_data;
        vec_data = NULL;
    }
};


#endif