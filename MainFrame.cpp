#include "MainFrame.h"

MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
	wxPanel* panel = new wxPanel(this);

	CreateStatusBar();

	// wxEVT_LEFT_DOWN | wxEVT_RIGHT_DOWN | wxEVT_MIDDLE_DOWN - mouse click
	// wxEVT_LEFT_DCLICK - double click
	panel->Bind(wxEVT_LEFT_DOWN, &MainFrame::OnMouseEvent, this);
}

void MainFrame::OnMouseEvent(wxMouseEvent& evt) {
	wxPoint mousePos = evt.GetPosition();
	wxString message = wxString::Format("Mouse Event Detected (x = %d, y = %d)", mousePos.x, mousePos.y);
	wxLogStatus(message);
}