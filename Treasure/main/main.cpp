//
//  main.cpp
//  Treasure
//
//  Created by Liyanwei on 2018/8/1.
//  Copyright © 2018年 Liyanwei. All rights reserved.
//

#include <wx/wx.h>
#include "Treasure.h"

class MyApp : public wxApp
{
public:
    bool OnInit()
    {
        TreasureFrame *simple = new TreasureFrame(wxT("宝藏"));
        simple->Show(true);
        return true;
    }
};

wxIMPLEMENT_APP(MyApp);
