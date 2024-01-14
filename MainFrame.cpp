#include "MainFrame.h"

MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
	wxPanel* panel = new wxPanel(this);

	wxButton* button = new wxButton(panel, wxID_ANY, "Button", wxPoint(150, 50), wxSize(100, 35), wxBU_BOTTOM);
	wxCheckBox* checkBox = new wxCheckBox(panel, wxID_ANY, "Check box", wxPoint(550, 55), wxDefaultSize,
		wxCHK_3STATE | wxCHK_ALLOW_3RD_STATE_FOR_USER);
	wxStaticText* staticText = new wxStaticText(panel, wxID_ANY, "Static Text - NOT editable", wxPoint(50, 150),
		wxSize(400, -1), wxALIGN_CENTER_HORIZONTAL);
	staticText->SetBackgroundColour(*wxLIGHT_GREY);
	wxTextCtrl* textCtrl = new wxTextCtrl(panel, wxID_ANY, "Text Control - editable", wxPoint(500, 145),
		wxSize(200, -1), wxTE_PASSWORD);
	wxSlider* slider = new wxSlider(panel, wxID_ANY, 25, 0, 100, wxPoint(100, 250), wxSize(200, -1),
		wxSL_VALUE_LABEL);
	wxGauge* gauge = new wxGauge(panel, wxID_ANY, 100, wxPoint(590, 205), wxSize(-1, 125), wxGA_VERTICAL);
	gauge->SetValue(17);
	wxArrayString choices;
	choices.Add("Item C");
	choices.Add("Item A");
	choices.Add("Item B");
	choices.Add("Item E");
	choices.Add("Item D");;
	choices.Add("Item F");
	wxChoice* choice = new wxChoice(panel, wxID_ANY, wxPoint(150, 375), wxSize(100, -1), choices, wxCB_SORT);
	choice->Select(0);
	wxSpinCtrl* spinCtrl = new wxSpinCtrl(panel, wxID_ANY, "", wxPoint(550, 375), wxSize(100, -1), wxSP_WRAP);
	wxListBox* listBox = new wxListBox(panel, wxID_ANY, wxPoint(150, 450), wxSize(100, -1), choices, wxLB_MULTIPLE);
	wxRadioBox* radioBox = new wxRadioBox(panel, wxID_ANY, "Radio Box", wxPoint(555, 450),
		wxDefaultSize, choices, 3, wxRA_SPECIFY_ROWS);
}