
// 6-7Practice1.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CMy67Practice1App:
// See 6-7Practice1.cpp for the implementation of this class
//

class CMy67Practice1App : public CWinApp
{
public:
	CMy67Practice1App();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CMy67Practice1App theApp;
