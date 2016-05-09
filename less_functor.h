//
// Created by Christopher Corona on 5/7/2016.
//

#ifndef UCD_CSCI2312_PA5_LESS_FUNCTOR_H
#define UCD_CSCI2312_PA5_LESS_FUNCTOR_H

#include <string>

namespace CS2312{

    template <typename T>
    class less {
    public:
        bool operator() (const T& a, const T& b){return a < b;}
    };
    template<>
    class less<const char* >{
    public:
        bool operator()(const char* a, const char* b){
            string a1, b1;
            a1 = a;
            b1 = b;
            return a1<b1;
        };
    };

    template <>
    class less<string> {
    public:
        bool operator() (const string& a, const string& b){return a < b;}
    };


}
#endif //UCD_CSCI2312_PA5_LESS_FUNCTOR_H
