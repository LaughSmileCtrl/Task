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
    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    Panel1 = new wxPanel(this, ID_PANEL1, wxPoint(208,184), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    Panel1->SetBackgroundColour(wxColour(63,64,66));
    StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Jam"), wxPoint(120,80), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    StaticText1->SetForegroundColour(wxColour(191,191,191));
    TextCtrl1 = new wxTextCtrl(Panel1, ID_TEXTCTRL1, wxEmptyString, wxPoint(176,72), wxDefaultSize, wxTE_CENTRE|wxBORDER_SIMPLE, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    TextCtrl1->SetForegroundColour(wxColour(191,191,191));
    TextCtrl1->SetBackgroundColour(wxColour(31,31,31));
    StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Menit"), wxPoint(112,136), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    StaticText2->SetForegroundColour(wxColour(191,191,191));
    TextCtrl2 = new wxTextCtrl(Panel1, ID_TEXTCTRL2, wxEmptyString, wxPoint(176,128), wxDefaultSize, wxTE_CENTRE|wxBORDER_SIMPLE, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    TextCtrl2->SetForegroundColour(wxColour(191,191,191));
    TextCtrl2->SetBackgroundColour(wxColour(31,31,31));
    StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("Detik"), wxPoint(112,192), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    StaticText3->SetForegroundColour(wxColour(191,191,191));
    TextCtrl3 = new wxTextCtrl(Panel1, ID_TEXTCTRL3, wxEmptyString, wxPoint(176,184), wxDefaultSize, wxTE_CENTRE|wxBORDER_SIMPLE, wxDefaultValidator, _T("ID_TEXTCTRL3"));
    TextCtrl3->SetForegroundColour(wxColour(191,191,191));
    TextCtrl3->SetBackgroundColour(wxColour(31,31,31));
    StaticText4 = new wxStaticText(Panel1, ID_STATICTEXT4, _("Total Detik"), wxPoint(88,336), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    StaticText4->SetForegroundColour(wxColour(191,191,191));
    TextCtrl4 = new wxTextCtrl(Panel1, ID_TEXTCTRL4, wxEmptyString, wxPoint(176,328), wxDefaultSize, wxTE_READONLY|wxTE_CENTRE|wxBORDER_SIMPLE, wxDefaultValidator, _T("ID_TEXTCTRL4"));
    TextCtrl4->SetForegroundColour(wxColour(191,191,191));
    TextCtrl4->SetBackgroundColour(wxColour(31,31,31));
    Button1 = new wxButton(Panel1, ID_BUTTON1, _("Hitung"), wxPoint(176,248), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
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
    unsigned long jam = 0;
    unsigned long menit = 0;
    unsigned long detik = 0;

    wxString res = wxT("");

    if(TextCtrl1->GetValue().ToULong(&jam) && TextCtrl2->GetValue().ToULong(&menit) && TextCtrl3->GetValue().ToULong(&detik))
    {
        res << (jam * 3600 + menit * 60 + detik);

        TextCtrl4->SetValue(res);
    }
}
