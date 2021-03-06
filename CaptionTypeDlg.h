/////////////////////////////////////////////////////////////////////////////
//                                                                         //
//  Dorgem - Webcam Capture application                                    //
//  Copyright (C) 2003 Frank Fesevur                                       //
//                                                                         //
//  This program is free software; you can redistribute it and/or modify   //
//  it under the terms of the GNU General Public License as published by   //
//  the Free Software Foundation; either version 2 of the License, or      //
//  (at your option) any later version.                                    //
//                                                                         //
//  This program is distributed in the hope that it will be useful,        //
//  but WITHOUT ANY WARRANTY; without even the implied warranty of         //
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the           //
//  GNU General Public License for more details.                           //
//                                                                         //
//  You should have received a copy of the GNU General Public License      //
//  along with this program; if not, write to the Free Software            //
//  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.              //
//                                                                         //
/////////////////////////////////////////////////////////////////////////////
// CaptionTypeDlg.h : header file

#ifndef __CAPTIONTYPEDLG_H__
#define __CAPTIONTYPEDLG_H__

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CCaptionTypeDlg dialog

class CCaptionTypeDlg : public CDialog
{
// Construction
public:
  CCaptionTypeDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
  //{{AFX_DATA(CCaptionTypeDlg)
  enum { IDD = IDD_CAPTION_TYPE };
    // NOTE: the ClassWizard will add data members here
  //}}AFX_DATA

// Overrides
  // ClassWizard generated virtual function overrides
  //{{AFX_VIRTUAL(CCaptionTypeDlg)
  protected:
  virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
  //}}AFX_VIRTUAL

// Implementation
protected:

  // Generated message map functions
  //{{AFX_MSG(CCaptionTypeDlg)
  virtual BOOL OnInitDialog();
  virtual void OnOK();
  //}}AFX_MSG
  DECLARE_MESSAGE_MAP()
};

#endif // __CAPTIONTYPEDLG_H__
