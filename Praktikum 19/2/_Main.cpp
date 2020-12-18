/***************************************************************
 * Name:      _Main.cpp
 * Purpose:   Code for Application Frame
 * Author:     ()
 * Created:   2020-12-18
 * Copyright:  ()
 * License:
 **************************************************************/

#include "_Main.h"
#include <wx/msgdlg.h>
#include <cmath>

//(*InternalHeaders(_Frame)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(_Frame)
const long _Frame::ID_STATICTEXT1 = wxNewId();
const long _Frame::ID_TEXTCTRL1 = wxNewId();
const long _Frame::ID_STATICTEXT2 = wxNewId();
const long _Frame::ID_TEXTCTRL2 = wxNewId();
const long _Frame::ID_STATICTEXT3 = wxNewId();
const long _Frame::ID_TEXTCTRL3 = wxNewId();
const long _Frame::ID_STATICTEXT4 = wxNewId();
const long _Frame::ID_TEXTCTRL4 = wxNewId();
const long _Frame::ID_BUTTON1 = wxNewId();
const long _Frame::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(_Frame,wxFrame)
    //(*EventTable(_Frame)
    //*)
END_EVENT_TABLE()

_Frame::_Frame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(_Frame)
    Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    Panel1 = new wxPanel(this, ID_PANEL1, wxPoint(184,152), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    Panel1->SetBackgroundColour(wxColour(63,64,66));
    StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Sisi Tegak"), wxPoint(24,104), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    StaticText1->SetForegroundColour(wxColour(191,191,191));
    TextCtrl1 = new wxTextCtrl(Panel1, ID_TEXTCTRL1, wxEmptyString, wxPoint(112,96), wxSize(-1,-1), wxTE_CENTRE|wxBORDER_SIMPLE, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    TextCtrl1->SetForegroundColour(wxColour(191,191,191));
    TextCtrl1->SetBackgroundColour(wxColour(31,31,31));
    StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Sisi Mendatar"), wxPoint(24,152), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    StaticText2->SetForegroundColour(wxColour(191,191,191));
    TextCtrl2 = new wxTextCtrl(Panel1, ID_TEXTCTRL2, wxEmptyString, wxPoint(112,144), wxDefaultSize, wxTE_CENTRE|wxBORDER_SIMPLE, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    TextCtrl2->SetForegroundColour(wxColour(191,191,191));
    TextCtrl2->SetBackgroundColour(wxColour(31,31,31));
    StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("Sisi Miring"), wxPoint(24,296), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    StaticText3->SetForegroundColour(wxColour(191,191,191));
    TextCtrl3 = new wxTextCtrl(Panel1, ID_TEXTCTRL3, wxEmptyString, wxPoint(112,288), wxDefaultSize, wxTE_READONLY|wxTE_CENTRE, wxDefaultValidator, _T("ID_TEXTCTRL3"));
    TextCtrl3->SetForegroundColour(wxColour(191,191,191));
    TextCtrl3->SetBackgroundColour(wxColour(31,31,31));
    StaticText4 = new wxStaticText(Panel1, ID_STATICTEXT4, _("Keliling"), wxPoint(24,344), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    StaticText4->SetForegroundColour(wxColour(191,191,191));
    TextCtrl4 = new wxTextCtrl(Panel1, ID_TEXTCTRL4, wxEmptyString, wxPoint(112,336), wxDefaultSize, wxTE_READONLY|wxTE_CENTRE, wxDefaultValidator, _T("ID_TEXTCTRL4"));
    TextCtrl4->SetForegroundColour(wxColour(191,191,191));
    TextCtrl4->SetBackgroundColour(wxColour(31,31,31));
    Button1 = new wxButton(Panel1, ID_BUTTON1, _("Hitung"), wxPoint(112,208), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    Button1->SetForegroundColour(wxColour(191,191,191));
    Button1->SetBackgroundColour(wxColour(63,64,66));

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&_Frame::OnButton1Click);
    //*)
}

_Frame::~_Frame()
{
    //(*Destroy(_Frame)
    //*)
}

void _Frame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void _Frame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void _Frame::OnButton1Click(wxCommandEvent& event)
{
    double sisiTegak = 0;
    double sisiMendatar = 0;
    double sisiMiring = 0;

    wxString res1 = wxT("");
    wxString res2 = wxT("");

    if(TextCtrl1->GetValue().ToDouble(&sisiTegak) && TextCtrl2->GetValue().ToDouble(&sisiMendatar))
    {
        sisiMiring = sqrt(pow(sisiTegak, 2) + pow(sisiMendatar, 2));
        res1 << sisiMiring;
        res2 << (sisiTegak + sisiMendatar  + sisiMiring);

        TextCtrl3->SetValue(res1);
        TextCtrl4->SetValue(res2);
    }
}
