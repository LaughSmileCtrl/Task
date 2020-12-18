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
const long _Frame::ID_STATICTEXT2 = wxNewId();
const long _Frame::ID_TEXTCTRL1 = wxNewId();
const long _Frame::ID_TEXTCTRL2 = wxNewId();
const long _Frame::ID_BUTTON1 = wxNewId();
const long _Frame::ID_PANEL1 = wxNewId();
const long _Frame::idMenuQuit = wxNewId();
const long _Frame::idMenuAbout = wxNewId();
const long _Frame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(_Frame,wxFrame)
    //(*EventTable(_Frame)
    //*)
END_EVENT_TABLE()

_Frame::_Frame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(_Frame)
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    Panel1 = new wxPanel(this, ID_PANEL1, wxPoint(224,344), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    Panel1->SetBackgroundColour(wxColour(63,64,66));
    StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Harga"), wxPoint(64,168), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    StaticText1->SetForegroundColour(wxColour(191,191,191));
    StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Harga Setelah Diskon"), wxPoint(16,280), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    StaticText2->SetForegroundColour(wxColour(191,191,191));
    TextCtrl1 = new wxTextCtrl(Panel1, ID_TEXTCTRL1, wxEmptyString, wxPoint(152,160), wxSize(216,29), wxTE_CENTRE|wxBORDER_SIMPLE, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    TextCtrl1->SetForegroundColour(wxColour(191,191,191));
    TextCtrl1->SetBackgroundColour(wxColour(31,31,31));
    TextCtrl2 = new wxTextCtrl(Panel1, ID_TEXTCTRL2, wxEmptyString, wxPoint(152,272), wxSize(216,29), wxTE_READONLY|wxTE_CENTRE|wxBORDER_SIMPLE, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    TextCtrl2->SetForegroundColour(wxColour(191,191,191));
    TextCtrl2->SetBackgroundColour(wxColour(31,31,31));
    Button1 = new wxButton(Panel1, ID_BUTTON1, _("Hitung Diskon"), wxPoint(192,216), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    Button1->SetForegroundColour(wxColour(191,191,191));
    Button1->SetBackgroundColour(wxColour(64,64,64));
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&_Frame::OnButton1Click);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&_Frame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&_Frame::OnAbout);
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
    wxMessageBox(msg, _("Calculate Discount"));
}

void _Frame::OnButton1Click(wxCommandEvent& event)
{
    double x = 0;
    wxString res =  wxT("");

    if(TextCtrl1->GetValue() .ToDouble(&x))
    {
        res << (0.75 * x);
        TextCtrl2->SetValue(res);
    }
}
