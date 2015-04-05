// generated by Fast Light User Interface Designer (fluid) version 1.0303

#include "main.h"

Fl_Group *grpInput=(Fl_Group *)0;

Fl_Input *txtPassword=(Fl_Input *)0;

Fl_Input *txtCalculationsPerSecond=(Fl_Input *)0;

Fl_Return_Button *btnSubmit=(Fl_Return_Button *)0;

Fl_Group *grpOutput=(Fl_Group *)0;

Fl_Text_Display *txtOutput=(Fl_Text_Display *)0;

Fl_Double_Window* make_window() {
  Fl_Double_Window* w;
  { Fl_Double_Window* o = new Fl_Double_Window(400, 300, "Password Checker");
    w = o;
    o->align(Fl_Align(FL_ALIGN_CENTER));
    o->hotspot(o);
    { grpInput = new Fl_Group(5, 20, 390, 105, "Input");
      grpInput->box(FL_PLASTIC_THIN_DOWN_BOX);
      { txtPassword = new Fl_Input(10, 90, 380, 25, "Enter Password");
        txtPassword->align(Fl_Align(129));
      } // Fl_Input* txtPassword
      { txtCalculationsPerSecond = new Fl_Input(10, 45, 380, 25, "Enter Calculations Per Second");
        txtCalculationsPerSecond->align(Fl_Align(FL_ALIGN_TOP));
      } // Fl_Input* txtCalculationsPerSecond
      grpInput->end();
    } // Fl_Group* grpInput
    { btnSubmit = new Fl_Return_Button(5, 130, 390, 25, "Submit");
    } // Fl_Return_Button* btnSubmit
    { grpOutput = new Fl_Group(5, 175, 390, 120, "Output");
      grpOutput->box(FL_PLASTIC_THIN_DOWN_BOX);
      { txtOutput = new Fl_Text_Display(10, 185, 380, 100);
      } // Fl_Text_Display* txtOutput
      grpOutput->end();
    } // Fl_Group* grpOutput
    o->size_range(400, 300);
    o->end();
  } // Fl_Double_Window* o
  return w;
}
