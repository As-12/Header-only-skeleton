#ifndef LIBRARY_UTILITY_SWAP_HPP
#define LIBRARY_UTILITY_SWAP_HPP

#include "../Config.hpp"
#include <iostream>

namespace Library {
    namespace Utility {
        inline namespace v1 {

            /*! \brief Brief description of Swap function.
            *         Just another brief description of Swap function.
            *
            *  A very long detailed about Swap function.
            *  Swap is a function. Swap is awesome.
            *  Swap is Paws but backward.
            */
            template<typename T>
            void Swap(T &a, T &b)
            {
                T temp = a;
                a = b;
                b = temp;
                std::cout << "VERSION " << LIBRARY_VERSION << std::endl;
            }
        }
    }
}

#endif