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
const long _Frame::ID_BUTTON1 = wxNewId();
const long _Frame::ID_BUTTON2 = wxNewId();
const long _Frame::ID_BUTTON3 = wxNewId();
const long _Frame::ID_STATICTEXT1 = wxNewId();
const long _Frame::ID_TEXTCTRL1 = wxNewId();
const long _Frame::ID_STATICTEXT2 = wxNewId();
const long _Frame::ID_STATICTEXT3 = wxNewId();
const long _Frame::ID_STATICTEXT4 = wxNewId();
const long _Frame::ID_TEXTCTRL2 = wxNewId();
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
    Panel1 = new wxPanel(this, ID_PANEL1, wxPoint(104,88), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    Panel1->SetBackgroundColour(wxColour(63,64,66));
    Button1 = new wxButton(Panel1, ID_BUTTON1, _("Fahrenheit to Celcius"), wxPoint(128,192), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    Button1->SetForegroundColour(wxColour(191,191,191));
    Button1->SetBackgroundColour(wxColour(63,64,66));
    Button2 = new wxButton(Panel1, ID_BUTTON2, _("Reamur to Celcius"), wxPoint(136,280), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    Button2->SetForegroundColour(wxColour(191,191,191));
    Button2->SetBackgroundColour(wxColour(63,64,66));
    Button3 = new wxButton(Panel1, ID_BUTTON3, _("Kelvin to Celcius"), wxPoint(144,232), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
    Button3->SetForegroundColour(wxColour(191,191,191));
    Button3->SetBackgroundColour(wxColour(63,64,66));
    StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Fahrenheit"), wxPoint(80,144), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    StaticText1->SetForegroundColour(wxColour(191,191,191));
    TextCtrl1 = new wxTextCtrl(Panel1, ID_TEXTCTRL1, wxEmptyString, wxPoint(152,136), wxDefaultSize, wxTE_CENTRE|wxBORDER_SIMPLE, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    TextCtrl1->SetForegroundColour(wxColour(191,191,191));
    TextCtrl1->SetBackgroundColour(wxColour(31,31,31));
    StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Reamur"), wxPoint(80,144), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    StaticText2->Hide();
    StaticText2->SetForegroundColour(wxColour(191,191,191));
    StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("Kelvin"), wxPoint(80,144), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    StaticText3->Hide();
    StaticText3->SetForegroundColour(wxColour(191,191,191));
    StaticText4 = new wxStaticText(Panel1, ID_STATICTEXT4, _("Celcius"), wxPoint(72,336), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    StaticText4->SetForegroundColour(wxColour(191,191,191));
    TextCtrl2 = new wxTextCtrl(Panel1, ID_TEXTCTRL2, wxEmptyString, wxPoint(144,328), wxDefaultSize, wxTE_READONLY|wxTE_CENTRE, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    TextCtrl2->SetForegroundColour(wxColour(191,191,191));
    TextCtrl2->SetBackgroundColour(wxColour(31,31,31));
    Center();

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&_Frame::OnButton1Click);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&_Frame::OnButton2Click);
    Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&_Frame::OnButton3Click);
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

double f2c(double &x)
{
    return (5/9.0)*(x-32);
}

double r2c(double &x)
{
    return (5/4.0)*x;
}

double k2c(double &x)
{
    return (x-273);
}

void _Frame::OnButton1Click(wxCommandEvent& event)
{
    StaticText1->Show();
    TextCtrl1->Show();
    StaticText2->Show(false);
    StaticText3->Show(false);

    double x;
    wxString res = wxT("");

    if(TextCtrl1->GetValue().ToDouble(&x))
    {
        res << f2c(x);
        TextCtrl2->SetValue(res);
    }

}

void _Frame::OnButton2Click(wxCommandEvent& event)
{
    StaticText1->Show(false);
    StaticText2->Show();
    StaticText3->Show(false);

    double x;
    wxString res = wxT("");

    if(TextCtrl1->GetValue().ToDouble(&x))
    {
        res << r2c(x);
        TextCtrl2->SetValue(res);
    }
}

void _Frame::OnButton3Click(wxCommandEvent& event)
{
    StaticText1->Show(false);
    StaticText2->Show(false);
    StaticText3->Show();

    double x;
    wxString res = wxT("");

    if(TextCtrl1->GetValue().ToDouble(&x))
    {
        res << k2c(x);
        TextCtrl2->SetValue(res);
    }
}

