#define _WIN32_WINNT 0x0A00
#define WINVER 0x0A00 
#define VC_EXTRALEAN		               // Exclude rarely-used stuff from Windows headers
#define _CRT_SECURE_NO_WARNINGS
#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS // some CString constructors will be explicit
#define _CRT_NON_CONFORMING_SWPRINTFS      //use traditional swprintf()


#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensions
#include <afxdisp.h>        // MFC Automation classes
#include <afxdtctl.h>	    // MFC support for Internet Explorer 4 Common Controls
#include <afxcmn.h>         // MFC support for Windows Common Controls#include <afxstr.h>

int main()
{
    CStringA str = "test";
    BSTR bstr = str.AllocSysString();
    ::SysFreeString(bstr);
}
