#pragma once
#include <wx/wx.h>

class MainFrame : public wxFrame
{
public:
	MainFrame(const wxString& title);
private:
	void OnAnyButtonClicked(wxCommandEvent& evt);
	void On1stButtonClicked(wxCommandEvent& evt);
	void On2ndButtonClicked(wxCommandEvent& evt);
	void OnClosed(wxCloseEvent& evt);
};
