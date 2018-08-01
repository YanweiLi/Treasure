//
//  Treasure.m
//  Treasure
//
//  Created by Liyanwei on 2018/8/1.
//  Copyright © 2018年 Liyanwei. All rights reserved.
//

#import "Treasure.h"

// 当前frame 默认大小
wxSize G_FRAME_SIZE = wxSize(1000 , 500);

TreasureFrame::TreasureFrame(const wxString& title)
: wxFrame(NULL
          , wxID_ANY
          , title
          , wxDefaultPosition
          , G_FRAME_SIZE)
{
    Centre();
}
