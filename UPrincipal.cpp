//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "UVector.h"
#include "UPrincipal.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
CVector *vector;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{     vector=new CVector(Form1->Canvas,100,150);
}
//---------------------------------------------------------------------------

void TForm1::SGACVector(TStringGrid *SG, CVector *CV)
{   CV->Dimension=SG->ColCount;
	for(int i=0;i<SG->ColCount;i++)
	{  CV->Celda[i]=StrToInt(SG->Cells[i][0]);}
}

void TForm1::CVectorASG(CVector *CV, TStringGrid *SG)
{   SG->ColCount=CV->Dimension;
	for(int i=0;i<CV->Dimension;i++)
	{ SG->Cells[i][0]=CV->Celda[i];}
}
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	   SGVector->ColCount=StrToInt(EDimensión->Text);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ContarElemento1Click(TObject *Sender)
{    SGACVector(SGVector,vector);
	 EResultado->Text=vector->ContarElem(StrToInt(EElemento->Text));

}
//---------------------------------------------------------------------------

void __fastcall TForm1::EliminarElempos1Click(TObject *Sender)
{
	 SGACVector(SGVector,vector);
	 vector->ElemiinarElemPos(StrToInt(EPosicion->Text));
	 CVectorASG(vector,SGVector);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BsquedaSecuencial1Click(TObject *Sender)
{    SGACVector(SGVector,vector);
	 EResultado->Text=vector->BusquedaSecuencial(StrToInt(EElemento->Text));

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Binaria1Click(TObject *Sender)
{    SGACVector(SGVector,vector);
	 EResultado->Text=vector->BusquedaBinaria(StrToInt(EElemento->Text));

}
//---------------------------------------------------------------------------

void __fastcall TForm1::LlenarVector1Click(TObject *Sender)
{
	  vector->LlenarVector();
	  CVectorASG(vector,SGVector);
}
void __fastcall TForm1::DibujarVector1Click(TObject *Sender)
{
	  vector->DibujarVector();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Intercambio1Click(TObject *Sender)
{    SGACVector(SGVector,vector);
	 vector->OrdenarIntercambio();
	 CVectorASG(vector,SGVector);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Burbuja1Click(TObject *Sender)
{    SGACVector(SGVector,vector);
	 vector->OrdenarBurbuja();
	 CVectorASG(vector,SGVector);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Seleccin1Click(TObject *Sender)
{    SGACVector(SGVector,vector);
	 vector->OrdenarSeleccion();
	 CVectorASG(vector,SGVector);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::LlenarVectorB1Click(TObject *Sender)
{
 vector->LlenarVector();
 CVectorASG(vector,SGVecB);
}
//---------------------------------------------------------------------------

