#include "MainFrame.h"

MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
	wxPanel* panel = new wxPanel(this);

	wxButton* button1 = new wxButton(panel, wxID_ANY, "Button 1", wxPoint(300, 275), wxSize(200, 50));
	wxButton* button2 = new wxButton(panel, wxID_ANY, "Button 2", wxPoint(300, 325), wxSize(200, 50));

	this->Bind(wxEVT_CLOSE_WINDOW, &MainFrame::OnClosed, this);
	this->Bind(wxEVT_BUTTON, &MainFrame::OnAnyButtonClicked, this);
	button1->Bind(wxEVT_BUTTON, &MainFrame::On1stButtonClicked, this);
	button2->Bind(wxEVT_BUTTON, &MainFrame::On2ndButtonClicked, this);

	CreateStatusBar(); 
}

void MainFrame::OnAnyButtonClicked(wxCommandEvent& evt) {
	wxLogMessage("Button clicked");
}

void MainFrame::On1stButtonClicked(wxCommandEvent& evt) {
	wxLogStatus("Button 1 clicked");
	evt.Skip();
}
void MainFrame::On2ndButtonClicked(wxCommandEvent& evt) {
	wxLogStatus("Button 2 clicked");
	evt.Skip();
}

void MainFrame::OnClosed(wxCloseEvent& evt) {
	wxLogMessage("Window closed");
	evt.Skip();
}