//---------------------------------------------------------------------------

#pragma hdrstop
#include "vcl.h"
#include "UVector.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
CVector::CVector(TCanvas *CV, int x, int y)
{ n=0;
  Lienzo=CV;
  ix=x;
  iy=y;
}

int CVector::GetN()
{ return n;}

void CVector::SetN(int valor)
{   if(n<=max)
	{  n=valor;}
	else
	{ ShowMessage("Dimensi�n err�nea");}
}

int CVector::GetElem(int pos)
{   if(pos<n)
	{  return V[pos];}
	else
	{  ShowMessage("Posici�n err�nea");}
}

void CVector::SetElem(int pos, int valor)
{   if(pos<n)
	{  V[pos]=valor;}
	else
	{  ShowMessage("Posici�n err�nea");}
}

int CVector::ContarElem(int elem)
{  int c=0;
   for(int i=0;i<n;i++)
   {  if(V[i]==elem)
	  {  c++;}
   }
   return c;
}

void CVector::ElemiinarElemPos(int pos)
{    if(pos<n)
	 {  for(int i=pos;i<n-1;i++)
		{    V[i]=V[i+1];}
		n--;
	 }
	 else
	 {  ShowMessage("Posicion err�nea");}

}

void CVector::InsertarElemPos(int pos, int elem)
{    if(pos<n && n<max)
	 {  n++;
		for(int i=n-1;i>pos;i--)
		{  V[i]=V[i-1];}
		V[pos]=elem;
	 }
	 else
	 {  ShowMessage("Posicion err�nea");}
}

int CVector::BusquedaSecuencial(int elem)
{  int i=n-1;
   while (i>=0 && V[i]!=elem)
   {  i--;}
   return i;
}

int CVector::BusquedaBinaria(int elem)
{  int ini=0, fin=n-1, pivote=(ini+fin)/2;
   while(ini<=fin && V[pivote]!=elem)
   {     if(elem>V[pivote])
		 {  ini=pivote+1;}
		 if(elem<V[pivote])
		 {  fin=pivote-1;}
		 pivote=(ini+fin)/2;
   }
   if(V[pivote]==elem)
   { return pivote;}
   else
   { return -1;}
}

void CVector::LlenarVector()
{   n=max;
	Randomize();
	for(int i=0;i<n;i++)
	{  V[i]=Random(100);  }
}

void CVector::DibujarLinea(int x,int y, int elem)
{      Lienzo->Pen->Color=clWhite;//White
	   Lienzo->MoveTo(x,y);
	   Lienzo->LineTo(x,y+(100-elem));
	   Lienzo->Pen->Color=clRed;//Green
	   Lienzo->LineTo(x,y+100);
}

void CVector::DibujarVector()
{  for(int i=0;i<n;i++)
   {  DibujarLinea(ix+2*i,iy,V[i]);  }
}                   //2

void CVector::Intercambiar(int pos1, int pos2)
{   int aux=V[pos2];
	V[pos2]=V[pos1];
	V[pos1]=aux;
}

void CVector::OrdenarIntercambio()
{  for(int i=0;i<n-1;i++)
   {  for(int j=i+1;j<n;j++)
	  {    if(V[j]<V[i])
		   { Intercambiar(i,j);
			 DibujarLinea(ix+2*i,iy,V[i]);
			 DibujarLinea(ix+2*j,iy,V[j]);
			 Sleep(5);//5
		   }
	  }
   }
}

void CVector::OrdenarBurbuja()
{  for(int i=0;i<n-1;i++)
   {  for(int j=n-1; j>i;j--)
	  {   if(V[j]<V[j-1])
		  {  Intercambiar(j,j-1);
			 DibujarLinea(ix+2*j,iy,V[j]);
			 DibujarLinea(ix+2*(j-1),iy,V[j-1]);
			 Sleep(5);
		  }
	  }
   }
}

void CVector::OrdenarSeleccion()
{  for(int i=0;i<n-1;i++)
   {  int posmen=i;
	  for(int j=i+1;j<n;j++)
	  {  if(V[j]<V[posmen])
		 {  posmen=j;
			Sleep(5);
		 }
	  }
	  Intercambiar(i,posmen);
	  DibujarLinea(ix+2*i,iy,V[i]);
	  DibujarLinea(ix+2*posmen,iy,V[posmen]);
	  Sleep(5);
   }
}
