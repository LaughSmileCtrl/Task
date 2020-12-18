/***************************************************************
 * Name:      _Main.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2020-12-18
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef _MAIN_H
#define _MAIN_H

//(*Headers(_Frame)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/panel.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class _Frame: public wxFrame
{
    public:

        _Frame(wxWindow* parent,wxWindowID id = -1);
        virtual ~_Frame();

    private:

        //(*Handlers(_Frame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnButton2Click(wxCommandEvent& event);
        void OnButton3Click(wxCommandEvent& event);
        void OnButton4Click(wxCommandEvent& event);
        //*)

        //(*Identifiers(_Frame)
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_BUTTON3;
        static const long ID_STATICTEXT1;
        static const long ID_TEXTCTRL1;
        static const long ID_STATICTEXT2;
        static const long ID_STATICTEXT3;
        static const long ID_STATICTEXT4;
        static const long ID_TEXTCTRL2;
        static const long ID_PANEL1;
        //*)

        //(*Declarations(_Frame)
        wxButton* Button1;
        wxButton* Button2;
        wxButton* Button3;
        wxPanel* Panel1;
        wxStaticText* StaticText1;
        wxStaticText* StaticText2;
        wxStaticText* StaticText3;
        wxStaticText* StaticText4;
        wxTextCtrl* TextCtrl1;
        wxTextCtrl* TextCtrl2;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // _MAIN_H
