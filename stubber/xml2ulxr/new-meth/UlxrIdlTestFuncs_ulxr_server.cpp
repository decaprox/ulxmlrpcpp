///////////////////////////////////////////////////////////////////
// Automatically generated by xml2ulxr v1.7.5.
//
// xml2ulxr is part of Ultra Lightweight XML RPC for C++.
// See also http://ulxmlrpcpp.sourceforge.net
//
// Don't edit manually unless you know what you are doing
///////////////////////////////////////////////////////////////////

//#define ULXR_UNICODE_ONLY_HELPERS
#include <ulxmlrpcpp/ulxmlrpcpp.h> // always first

#include "UlxrIdlTestFuncs_ulxr_server.h"

#include <ulxmlrpcpp/ulxr_response.h>
#include <ulxmlrpcpp/ulxr_requester.h>
#include <ulxmlrpcpp/ulxr_except.h>
#include <ulxmlrpcpp/ulxr_method_adder.h>

#include "UlxrIdlTestFuncs_ulxr_names.h"
#include "/home/ea/Dokumente/src/ulxmlrpcpp/branches/1_7_BRANCH/ulxmlrpcpp/stubber/ulxr2xml/ulxridl_test.h"

// mapped to: void funcs::free_function1(int i);   (there are overloaded methods)
ulxr::MethodResponse
  UlxrIdlTestFuncs_funcs__free_function1_ovr0 (const ulxr::MethodCall &calldata)
{
  try
  {
    int p0 = (int) ulxr::Integer(calldata.getParam(0)).getInteger();
    funcs::free_function1(p0);
    return ulxr::MethodResponse (ulxr::Void());
  }
  catch(std::exception &ex)
  {
    ulxr::CppString s = ULXR_PCHAR("C++ exception caught when invoking 'void funcs::free_function1(int i);'\n  ");
    s += ULXR_GET_STRING(ex.what());
    return ulxr::MethodResponse(ulxr::ApplicationError, s);
  }
  catch(...)
  {
    ulxr::CppString s = ULXR_PCHAR("Unknown exception caught when invoking 'void funcs::free_function1(int i);'");
    return ulxr::MethodResponse(ulxr::ApplicationError, s);
  }
}


// mapped to: long int funcs::free_function1(long int i, float f);   (there are overloaded methods)
ulxr::MethodResponse
  UlxrIdlTestFuncs_funcs__free_function1_ovr1 (const ulxr::MethodCall &calldata)
{
  try
  {
    long int p0 = (long int) ulxr::Integer(calldata.getParam(0)).getInteger();
    float p1 = (float) ulxr::Double(calldata.getParam(1)).getDouble();
    long int retval = funcs::free_function1(p0, p1);
    return ulxr::MethodResponse (ulxr::Integer (retval));
  }
  catch(std::exception &ex)
  {
    ulxr::CppString s = ULXR_PCHAR("C++ exception caught when invoking 'long int funcs::free_function1(long int i, float f);'\n  ");
    s += ULXR_GET_STRING(ex.what());
    return ulxr::MethodResponse(ulxr::ApplicationError, s);
  }
  catch(...)
  {
    ulxr::CppString s = ULXR_PCHAR("Unknown exception caught when invoking 'long int funcs::free_function1(long int i, float f);'");
    return ulxr::MethodResponse(ulxr::ApplicationError, s);
  }
}


// mapped to: std::string * inline_func::free_function2(long int * i, float f);   (there are overloaded methods)
ulxr::MethodResponse
  UlxrIdlTestFuncs_inline_func__free_function2 (const ulxr::MethodCall &calldata)
{
  try
  {
    long int p0 = (long int) ulxr::Integer(calldata.getParam(0)).getInteger();
    float p1 = (float) ulxr::Double(calldata.getParam(1)).getDouble();
    std::string retval = *inline_func::free_function2(&p0, p1);
    return ulxr::MethodResponse (ulxr::RpcString (ULXR_GET_STRING(retval)));
  }
  catch(std::exception &ex)
  {
    ulxr::CppString s = ULXR_PCHAR("C++ exception caught when invoking 'std::string * inline_func::free_function2(long int * i, float f);'\n  ");
    s += ULXR_GET_STRING(ex.what());
    return ulxr::MethodResponse(ulxr::ApplicationError, s);
  }
  catch(...)
  {
    ulxr::CppString s = ULXR_PCHAR("Unknown exception caught when invoking 'std::string * inline_func::free_function2(long int * i, float f);'");
    return ulxr::MethodResponse(ulxr::ApplicationError, s);
  }
}



void UlxrIdlTestFuncs_removeServerMethods(ulxr::MethodAdder &method_adder)
{
  method_adder.removeMethod(ULXR_CALLTO_UlxrIdlTestFuncs_funcs__free_function1_ovr0);
  method_adder.removeMethod(ULXR_CALLTO_UlxrIdlTestFuncs_funcs__free_function1_ovr1);
  method_adder.removeMethod(ULXR_CALLTO_UlxrIdlTestFuncs_inline_func__free_function2);
}

