#ifndef LIBRARY_FRAMEWORK_HPP
#define LIBRARY_FRAMEWORK_HPP

#include "Config.hpp"
#include <iostream>

namespace Library {
        namespace v1 {

        /*! \brief Brief description of Print version 1.
            *
            *  A very long detailed about Print function.
            */
        void print (float var = 1.0f)
        {
            std::cout << "Version 1 of print"<<std::endl;
        }

        //!  A test class. 
        /*!
        A more elaborate class description.
        */
        class QTstyle_Test
        {
        public:
            //! An enum.
            /*! More detailed enum description. */
            enum TEnum { 
                        TVal1, /*!< Enum value TVal1. */  
                        TVal2, /*!< Enum value TVal2. */  
                        TVal3  /*!< Enum value TVal3. */  
                    } 
                //! Enum pointer.
                /*! Details. */
                *enumPtr, 
                //! Enum variable.
                /*! Details. */
                enumVar;  
            
            //! A constructor.
            /*!
            A more elaborate description of the constructor.
            */
            QTstyle_Test();
            //! A destructor.
            /*!
            A more elaborate description of the destructor.
            */
        ~QTstyle_Test();
            
            //! A normal member taking two arguments and returning an integer value.
            /*!
            \param a an integer argument.
            \param s a constant character pointer.
            \return The test results
            \sa QTstyle_Test(), ~QTstyle_Test(), testMeToo() and publicVar()
            */
            int testMe(int a,const char *s) {return 0;}
        
        
            //! A public variable.
            /*!
            Details.
            */
            int publicVar;
            
            //! A function variable.
            /*!
            Details.
            */
            int (*handler)(int a,int b);
        };

    }
    namespace v2 {
        /*! \brief Brief description of Print version 2.
            *
            *  The version is selected at config.hpp. This will not require depended module to refactor .
            *  However, it require us to maintain 2 concurrent version of the library.
            */
        void print (int var = 2)
        {
            std::cout << "Version 2 of print"<< var <<std::endl;
        }
    }
}

#endif