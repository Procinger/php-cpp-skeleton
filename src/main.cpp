#include <phpcpp.h>
#include <iostream>

/**
* php test function
*/
void php_cpp_skeleton()
{
  Php::out << "php_cpp_skeleton loaded" << std::endl;
}

/**
 *  tell the compiler that the get_module is a pure C function
 */
extern "C" {

    /**
     *  Function that is called by PHP right after the PHP process
     *  has started, and that returns an address of an internal PHP
     *  strucure with all the details and features of your extension
     *
     *  @return void*   a pointer to an address that is understood by PHP
     */
    PHPCPP_EXPORT void *get_module()
    {
        // static(!) Php::Extension object that should stay in memory
        // for the entire duration of the process (that's why it's static)
        static Php::Extension extension("php-cpp-skeleton", "1.0");

        // register php_cpp_skeleton function
        extension.add("php_cpp_skeleton", php_cpp_skeleton);
        // return the extension
        return extension;
    }
}
