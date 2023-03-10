//---------------------------------------------------------------------------

#ifndef main_windH
#define main_windH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Chart.hpp>
#include <ExtCtrls.hpp>
#include <Series.hpp>
#include <TeEngine.hpp>
#include <TeeProcs.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TmainWnd : public TForm
{
__published:	// IDE-managed Components
        TChart *mainChart;
        TButton *buttonStart;
        TLineSeries *Series1;
        TButton *buttonStop;
        TButton *buttonReset;
        TRadioGroup *radioGroupMethods;
        TGroupBox *groupValueSet;
        TLabeledEdit *lEditU1;
        TLabeledEdit *lEditU2;
        TLabeledEdit *lEditDx;
        TLabeledEdit *lEditDt;
        TLabeledEdit *lEditA;
        TGroupBox *grouEvents;
        TLabel *labelIterationClock;
        TStaticText *developer;
        void __fastcall buttonResetClick(TObject *Sender);
        void __fastcall radioGroupMethodsClick(TObject *Sender);
        void __fastcall buttonStartClick(TObject *Sender);
        void __fastcall buttonStopClick(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall developerMouseUp(TObject *Sender,
          TMouseButton Button, TShiftState Shift, int X, int Y);
private:	// User declarations
public:		// User declarations
        __fastcall TmainWnd(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TmainWnd *mainWnd;
//---------------------------------------------------------------------------
#endif
