//
//  main.cpp
//  Treasure
//
//  Created by Liyanwei on 2018/8/1.
//  Copyright © 2018年 Liyanwei. All rights reserved.
//

#include <wx/wx.h>
#include "Treasure.h"

class Hello : public wxFrame
{
public:
    Hello(const wxString& title)
    : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(250, 150))
    {
        Centre();
    }
};

class MyApp : public wxApp
{
public:
    bool OnInit()
    {
        Simple *simple = new Simple(wxT("Hello"));
        simple->Show(true);
        return true;
    }
};

wxIMPLEMENT_APP(MyApp);
