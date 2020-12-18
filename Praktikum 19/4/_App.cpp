/***************************************************************
 * Name:      _App.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2020-12-18
 * Copyright:  ()
 * License:
 **************************************************************/

#include "_App.h"

//(*AppHeaders
#include "_Main.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(_App);

bool _App::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	_Frame* Frame = new _Frame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
