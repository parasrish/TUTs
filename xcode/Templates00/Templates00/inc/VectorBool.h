#ifndef VECTOR_BOOL_H
#define VECTOR_BOOL_H

template <>
class Vector <bool>
{
    // interface
    
private:
    bool * vec_data;   // we'll store the data as block of dynamically allocated
    // memory
    int length;    // number of elements (vec_data)
    
public:
    Vector(){
        length = 0;
        vec_data = new bool [10]; //assumed max limit, for simplification
    }
    
    void insert(bool val){
        
        if(10 > (length)){
            
            ++length;  // we are about to add an element
            
            int index = 0;
            if(length != index){  //should always be the case, after first time
                index = length -1;
            }
            vec_data[index] = val; //element added next
            cout << "[ADDED 2 VectorBool], element : " << val << " !" << endl;
            
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