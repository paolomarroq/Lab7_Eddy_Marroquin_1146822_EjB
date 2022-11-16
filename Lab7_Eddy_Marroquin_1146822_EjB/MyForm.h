#pragma once
#include "Poligonos.h"
#include "Poligonos.cpp"
#include <fstream>
#include <string>
#include <iostream>

Principal poligonos;

namespace Lab7EddyMarroquin1146822EjB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::GroupBox^ gbAgregar;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ComboBox^ Cbox_Color;
	private: System::Windows::Forms::Label^ lbl_colorpedido;


	private: System::Windows::Forms::TextBox^ txt_Apotema;
	private: System::Windows::Forms::Label^ lbl_Apotema;

	private: System::Windows::Forms::TextBox^ txt_Altura;
	private: System::Windows::Forms::Label^ lbl_Altura;

	private: System::Windows::Forms::TextBox^ txt_Base;
	private: System::Windows::Forms::Label^ lbl_Base;

	private: System::Windows::Forms::TextBox^ txt_Lado6;
	private: System::Windows::Forms::Label^ lbl_Lado6;

	private: System::Windows::Forms::TextBox^ txt_Lado5;
	private: System::Windows::Forms::Label^ lbl_Lado5;

	private: System::Windows::Forms::TextBox^ txt_Lado4;
	private: System::Windows::Forms::Label^ lbl_Lado4;

	private: System::Windows::Forms::TextBox^ txt_Lado3;
	private: System::Windows::Forms::Label^ lbl_Lado3;

	private: System::Windows::Forms::TextBox^ txt_Lado2;
	private: System::Windows::Forms::Label^ lbl_Lado2;

	private: System::Windows::Forms::TextBox^ txt_Lado1;
	private: System::Windows::Forms::Label^ lbl_Lado1;


	private: System::Windows::Forms::RadioButton^ Rbtn_Cuadrado;
	private: System::Windows::Forms::RadioButton^ Rbtn_Octagono;
	private: System::Windows::Forms::RadioButton^ Rbtn_Pentagono;
	private: System::Windows::Forms::RadioButton^ Rbtn_Rectangulo;
	private: System::Windows::Forms::RadioButton^ Rbtn_Triangulo;
	private: System::Windows::Forms::GroupBox^ GBbuscar;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txt_BuscarID;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txt_ListaPoligonos;
	private: System::Windows::Forms::GroupBox^ GBlist;
	private: System::Windows::Forms::TextBox^ txt_Lado8;
	private: System::Windows::Forms::Label^ lbl_Lado8;

	private: System::Windows::Forms::TextBox^ txt_Lado7;
	private: System::Windows::Forms::Label^ lbl_Lado7;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ lbl_Color;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ lbl_Area;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ lbl_Perimetro;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ lbl_TipoPoligono;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ lbl_IDPoligono;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button3;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->gbAgregar = (gcnew System::Windows::Forms::GroupBox());
			this->txt_Lado8 = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Lado8 = (gcnew System::Windows::Forms::Label());
			this->txt_Lado7 = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Lado7 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Cbox_Color = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_colorpedido = (gcnew System::Windows::Forms::Label());
			this->txt_Apotema = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Apotema = (gcnew System::Windows::Forms::Label());
			this->txt_Altura = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Altura = (gcnew System::Windows::Forms::Label());
			this->txt_Base = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Base = (gcnew System::Windows::Forms::Label());
			this->txt_Lado6 = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Lado6 = (gcnew System::Windows::Forms::Label());
			this->txt_Lado5 = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Lado5 = (gcnew System::Windows::Forms::Label());
			this->txt_Lado4 = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Lado4 = (gcnew System::Windows::Forms::Label());
			this->txt_Lado3 = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Lado3 = (gcnew System::Windows::Forms::Label());
			this->txt_Lado2 = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Lado2 = (gcnew System::Windows::Forms::Label());
			this->txt_Lado1 = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Lado1 = (gcnew System::Windows::Forms::Label());
			this->Rbtn_Cuadrado = (gcnew System::Windows::Forms::RadioButton());
			this->Rbtn_Octagono = (gcnew System::Windows::Forms::RadioButton());
			this->Rbtn_Pentagono = (gcnew System::Windows::Forms::RadioButton());
			this->Rbtn_Rectangulo = (gcnew System::Windows::Forms::RadioButton());
			this->Rbtn_Triangulo = (gcnew System::Windows::Forms::RadioButton());
			this->GBbuscar = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txt_BuscarID = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txt_ListaPoligonos = (gcnew System::Windows::Forms::TextBox());
			this->GBlist = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->lbl_Color = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lbl_Area = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lbl_Perimetro = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lbl_TipoPoligono = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lbl_IDPoligono = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->gbAgregar->SuspendLayout();
			this->GBbuscar->SuspendLayout();
			this->GBlist->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(388, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(171, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Poligonos";
			// 
			// gbAgregar
			// 
			this->gbAgregar->Controls->Add(this->txt_Lado8);
			this->gbAgregar->Controls->Add(this->lbl_Lado8);
			this->gbAgregar->Controls->Add(this->txt_Lado7);
			this->gbAgregar->Controls->Add(this->lbl_Lado7);
			this->gbAgregar->Controls->Add(this->button2);
			this->gbAgregar->Controls->Add(this->Cbox_Color);
			this->gbAgregar->Controls->Add(this->lbl_colorpedido);
			this->gbAgregar->Controls->Add(this->txt_Apotema);
			this->gbAgregar->Controls->Add(this->lbl_Apotema);
			this->gbAgregar->Controls->Add(this->txt_Altura);
			this->gbAgregar->Controls->Add(this->lbl_Altura);
			this->gbAgregar->Controls->Add(this->txt_Base);
			this->gbAgregar->Controls->Add(this->lbl_Base);
			this->gbAgregar->Controls->Add(this->txt_Lado6);
			this->gbAgregar->Controls->Add(this->lbl_Lado6);
			this->gbAgregar->Controls->Add(this->txt_Lado5);
			this->gbAgregar->Controls->Add(this->lbl_Lado5);
			this->gbAgregar->Controls->Add(this->txt_Lado4);
			this->gbAgregar->Controls->Add(this->lbl_Lado4);
			this->gbAgregar->Controls->Add(this->txt_Lado3);
			this->gbAgregar->Controls->Add(this->lbl_Lado3);
			this->gbAgregar->Controls->Add(this->txt_Lado2);
			this->gbAgregar->Controls->Add(this->lbl_Lado2);
			this->gbAgregar->Controls->Add(this->txt_Lado1);
			this->gbAgregar->Controls->Add(this->lbl_Lado1);
			this->gbAgregar->Controls->Add(this->Rbtn_Cuadrado);
			this->gbAgregar->Controls->Add(this->Rbtn_Octagono);
			this->gbAgregar->Controls->Add(this->Rbtn_Pentagono);
			this->gbAgregar->Controls->Add(this->Rbtn_Rectangulo);
			this->gbAgregar->Controls->Add(this->Rbtn_Triangulo);
			this->gbAgregar->Font = (gcnew System::Drawing::Font(L"Century", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gbAgregar->Location = System::Drawing::Point(57, 122);
			this->gbAgregar->Name = L"gbAgregar";
			this->gbAgregar->Size = System::Drawing::Size(696, 362);
			this->gbAgregar->TabIndex = 1;
			this->gbAgregar->TabStop = false;
			this->gbAgregar->Text = L"Agregar Poligonos:";
			// 
			// txt_Lado8
			// 
			this->txt_Lado8->Location = System::Drawing::Point(514, 134);
			this->txt_Lado8->Name = L"txt_Lado8";
			this->txt_Lado8->Size = System::Drawing::Size(100, 28);
			this->txt_Lado8->TabIndex = 29;
			// 
			// lbl_Lado8
			// 
			this->lbl_Lado8->AutoSize = true;
			this->lbl_Lado8->Location = System::Drawing::Point(438, 138);
			this->lbl_Lado8->Name = L"lbl_Lado8";
			this->lbl_Lado8->Size = System::Drawing::Size(68, 21);
			this->lbl_Lado8->TabIndex = 28;
			this->lbl_Lado8->Text = L"Lado 8:";
			// 
			// txt_Lado7
			// 
			this->txt_Lado7->Location = System::Drawing::Point(514, 90);
			this->txt_Lado7->Name = L"txt_Lado7";
			this->txt_Lado7->Size = System::Drawing::Size(100, 28);
			this->txt_Lado7->TabIndex = 27;
			// 
			// lbl_Lado7
			// 
			this->lbl_Lado7->AutoSize = true;
			this->lbl_Lado7->Location = System::Drawing::Point(440, 95);
			this->lbl_Lado7->Name = L"lbl_Lado7";
			this->lbl_Lado7->Size = System::Drawing::Size(68, 21);
			this->lbl_Lado7->TabIndex = 26;
			this->lbl_Lado7->Text = L"Lado 7:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(520, 312);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(94, 29);
			this->button2->TabIndex = 25;
			this->button2->Text = L"Agregar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// Cbox_Color
			// 
			this->Cbox_Color->FormattingEnabled = true;
			this->Cbox_Color->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Celeste", L"Rojo", L"Amarillo", L"Verde", L"Anaranjado",
					L"Rosado", L"Blanco"
			});
			this->Cbox_Color->Location = System::Drawing::Point(336, 314);
			this->Cbox_Color->Name = L"Cbox_Color";
			this->Cbox_Color->Size = System::Drawing::Size(121, 29);
			this->Cbox_Color->TabIndex = 24;
			// 
			// lbl_colorpedido
			// 
			this->lbl_colorpedido->AutoSize = true;
			this->lbl_colorpedido->Location = System::Drawing::Point(244, 320);
			this->lbl_colorpedido->Name = L"lbl_colorpedido";
			this->lbl_colorpedido->Size = System::Drawing::Size(58, 21);
			this->lbl_colorpedido->TabIndex = 23;
			this->lbl_colorpedido->Text = L"Color:";
			// 
			// txt_Apotema
			// 
			this->txt_Apotema->Location = System::Drawing::Point(357, 272);
			this->txt_Apotema->Name = L"txt_Apotema";
			this->txt_Apotema->Size = System::Drawing::Size(100, 28);
			this->txt_Apotema->TabIndex = 10;
			// 
			// lbl_Apotema
			// 
			this->lbl_Apotema->AutoSize = true;
			this->lbl_Apotema->Location = System::Drawing::Point(244, 280);
			this->lbl_Apotema->Name = L"lbl_Apotema";
			this->lbl_Apotema->Size = System::Drawing::Size(86, 21);
			this->lbl_Apotema->TabIndex = 9;
			this->lbl_Apotema->Text = L"Apotema:";
			// 
			// txt_Altura
			// 
			this->txt_Altura->Location = System::Drawing::Point(514, 220);
			this->txt_Altura->Name = L"txt_Altura";
			this->txt_Altura->Size = System::Drawing::Size(100, 28);
			this->txt_Altura->TabIndex = 22;
			// 
			// lbl_Altura
			// 
			this->lbl_Altura->AutoSize = true;
			this->lbl_Altura->Location = System::Drawing::Point(440, 225);
			this->lbl_Altura->Name = L"lbl_Altura";
			this->lbl_Altura->Size = System::Drawing::Size(66, 21);
			this->lbl_Altura->TabIndex = 21;
			this->lbl_Altura->Text = L"Altura:";
			// 
			// txt_Base
			// 
			this->txt_Base->Location = System::Drawing::Point(514, 175);
			this->txt_Base->Name = L"txt_Base";
			this->txt_Base->Size = System::Drawing::Size(100, 28);
			this->txt_Base->TabIndex = 20;
			// 
			// lbl_Base
			// 
			this->lbl_Base->AutoSize = true;
			this->lbl_Base->Location = System::Drawing::Point(440, 180);
			this->lbl_Base->Name = L"lbl_Base";
			this->lbl_Base->Size = System::Drawing::Size(53, 21);
			this->lbl_Base->TabIndex = 19;
			this->lbl_Base->Text = L"Base:";
			// 
			// txt_Lado6
			// 
			this->txt_Lado6->Location = System::Drawing::Point(514, 45);
			this->txt_Lado6->Name = L"txt_Lado6";
			this->txt_Lado6->Size = System::Drawing::Size(100, 28);
			this->txt_Lado6->TabIndex = 18;
			// 
			// lbl_Lado6
			// 
			this->lbl_Lado6->AutoSize = true;
			this->lbl_Lado6->Location = System::Drawing::Point(440, 50);
			this->lbl_Lado6->Name = L"lbl_Lado6";
			this->lbl_Lado6->Size = System::Drawing::Size(68, 21);
			this->lbl_Lado6->TabIndex = 17;
			this->lbl_Lado6->Text = L"Lado 6:";
			// 
			// txt_Lado5
			// 
			this->txt_Lado5->Location = System::Drawing::Point(318, 225);
			this->txt_Lado5->Name = L"txt_Lado5";
			this->txt_Lado5->Size = System::Drawing::Size(100, 28);
			this->txt_Lado5->TabIndex = 16;
			// 
			// lbl_Lado5
			// 
			this->lbl_Lado5->AutoSize = true;
			this->lbl_Lado5->Location = System::Drawing::Point(244, 230);
			this->lbl_Lado5->Name = L"lbl_Lado5";
			this->lbl_Lado5->Size = System::Drawing::Size(68, 21);
			this->lbl_Lado5->TabIndex = 15;
			this->lbl_Lado5->Text = L"Lado 5:";
			// 
			// txt_Lado4
			// 
			this->txt_Lado4->Location = System::Drawing::Point(318, 177);
			this->txt_Lado4->Name = L"txt_Lado4";
			this->txt_Lado4->Size = System::Drawing::Size(100, 28);
			this->txt_Lado4->TabIndex = 14;
			// 
			// lbl_Lado4
			// 
			this->lbl_Lado4->AutoSize = true;
			this->lbl_Lado4->Location = System::Drawing::Point(244, 182);
			this->lbl_Lado4->Name = L"lbl_Lado4";
			this->lbl_Lado4->Size = System::Drawing::Size(68, 21);
			this->lbl_Lado4->TabIndex = 13;
			this->lbl_Lado4->Text = L"Lado 4:";
			// 
			// txt_Lado3
			// 
			this->txt_Lado3->Location = System::Drawing::Point(318, 131);
			this->txt_Lado3->Name = L"txt_Lado3";
			this->txt_Lado3->Size = System::Drawing::Size(100, 28);
			this->txt_Lado3->TabIndex = 12;
			// 
			// lbl_Lado3
			// 
			this->lbl_Lado3->AutoSize = true;
			this->lbl_Lado3->Location = System::Drawing::Point(244, 136);
			this->lbl_Lado3->Name = L"lbl_Lado3";
			this->lbl_Lado3->Size = System::Drawing::Size(68, 21);
			this->lbl_Lado3->TabIndex = 11;
			this->lbl_Lado3->Text = L"Lado 3:";
			// 
			// txt_Lado2
			// 
			this->txt_Lado2->Location = System::Drawing::Point(318, 88);
			this->txt_Lado2->Name = L"txt_Lado2";
			this->txt_Lado2->Size = System::Drawing::Size(100, 28);
			this->txt_Lado2->TabIndex = 10;
			// 
			// lbl_Lado2
			// 
			this->lbl_Lado2->AutoSize = true;
			this->lbl_Lado2->Location = System::Drawing::Point(244, 93);
			this->lbl_Lado2->Name = L"lbl_Lado2";
			this->lbl_Lado2->Size = System::Drawing::Size(68, 21);
			this->lbl_Lado2->TabIndex = 9;
			this->lbl_Lado2->Text = L"Lado 2:";
			// 
			// txt_Lado1
			// 
			this->txt_Lado1->Location = System::Drawing::Point(318, 45);
			this->txt_Lado1->Name = L"txt_Lado1";
			this->txt_Lado1->Size = System::Drawing::Size(100, 28);
			this->txt_Lado1->TabIndex = 8;
			// 
			// lbl_Lado1
			// 
			this->lbl_Lado1->AutoSize = true;
			this->lbl_Lado1->Location = System::Drawing::Point(244, 50);
			this->lbl_Lado1->Name = L"lbl_Lado1";
			this->lbl_Lado1->Size = System::Drawing::Size(68, 21);
			this->lbl_Lado1->TabIndex = 7;
			this->lbl_Lado1->Text = L"Lado 1:";
			// 
			// Rbtn_Cuadrado
			// 
			this->Rbtn_Cuadrado->AutoSize = true;
			this->Rbtn_Cuadrado->Location = System::Drawing::Point(6, 91);
			this->Rbtn_Cuadrado->Name = L"Rbtn_Cuadrado";
			this->Rbtn_Cuadrado->Size = System::Drawing::Size(108, 25);
			this->Rbtn_Cuadrado->TabIndex = 6;
			this->Rbtn_Cuadrado->TabStop = true;
			this->Rbtn_Cuadrado->Text = L"Cuadrado";
			this->Rbtn_Cuadrado->UseVisualStyleBackColor = true;
			this->Rbtn_Cuadrado->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Rbtn_Cuadrado_CheckedChanged);
			// 
			// Rbtn_Octagono
			// 
			this->Rbtn_Octagono->AutoSize = true;
			this->Rbtn_Octagono->Location = System::Drawing::Point(6, 226);
			this->Rbtn_Octagono->Name = L"Rbtn_Octagono";
			this->Rbtn_Octagono->Size = System::Drawing::Size(114, 25);
			this->Rbtn_Octagono->TabIndex = 5;
			this->Rbtn_Octagono->TabStop = true;
			this->Rbtn_Octagono->Text = L"Ocatagono";
			this->Rbtn_Octagono->UseVisualStyleBackColor = true;
			this->Rbtn_Octagono->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Rbtn_Octagono_CheckedChanged);
			// 
			// Rbtn_Pentagono
			// 
			this->Rbtn_Pentagono->AutoSize = true;
			this->Rbtn_Pentagono->Location = System::Drawing::Point(6, 180);
			this->Rbtn_Pentagono->Name = L"Rbtn_Pentagono";
			this->Rbtn_Pentagono->Size = System::Drawing::Size(114, 25);
			this->Rbtn_Pentagono->TabIndex = 4;
			this->Rbtn_Pentagono->TabStop = true;
			this->Rbtn_Pentagono->Text = L"Pentagono";
			this->Rbtn_Pentagono->UseVisualStyleBackColor = true;
			this->Rbtn_Pentagono->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Rbtn_Pentagono_CheckedChanged);
			// 
			// Rbtn_Rectangulo
			// 
			this->Rbtn_Rectangulo->AutoSize = true;
			this->Rbtn_Rectangulo->Location = System::Drawing::Point(6, 134);
			this->Rbtn_Rectangulo->Name = L"Rbtn_Rectangulo";
			this->Rbtn_Rectangulo->Size = System::Drawing::Size(119, 25);
			this->Rbtn_Rectangulo->TabIndex = 3;
			this->Rbtn_Rectangulo->TabStop = true;
			this->Rbtn_Rectangulo->Text = L"Rectangulo";
			this->Rbtn_Rectangulo->UseVisualStyleBackColor = true;
			this->Rbtn_Rectangulo->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Rbtn_Rectangulo_CheckedChanged);
			// 
			// Rbtn_Triangulo
			// 
			this->Rbtn_Triangulo->AutoSize = true;
			this->Rbtn_Triangulo->Location = System::Drawing::Point(6, 48);
			this->Rbtn_Triangulo->Name = L"Rbtn_Triangulo";
			this->Rbtn_Triangulo->Size = System::Drawing::Size(187, 25);
			this->Rbtn_Triangulo->TabIndex = 2;
			this->Rbtn_Triangulo->TabStop = true;
			this->Rbtn_Triangulo->Text = L"Triangulo (Isoceles)";
			this->Rbtn_Triangulo->UseVisualStyleBackColor = true;
			this->Rbtn_Triangulo->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Rbtn_Triangulo_CheckedChanged);
			// 
			// GBbuscar
			// 
			this->GBbuscar->Controls->Add(this->button1);
			this->GBbuscar->Controls->Add(this->txt_BuscarID);
			this->GBbuscar->Controls->Add(this->label12);
			this->GBbuscar->Font = (gcnew System::Drawing::Font(L"Century", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GBbuscar->Location = System::Drawing::Point(773, 143);
			this->GBbuscar->Name = L"GBbuscar";
			this->GBbuscar->Size = System::Drawing::Size(257, 156);
			this->GBbuscar->TabIndex = 7;
			this->GBbuscar->TabStop = false;
			this->GBbuscar->Text = L"Buscador:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(118, 106);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(94, 29);
			this->button1->TabIndex = 26;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// txt_BuscarID
			// 
			this->txt_BuscarID->Location = System::Drawing::Point(112, 50);
			this->txt_BuscarID->Name = L"txt_BuscarID";
			this->txt_BuscarID->Size = System::Drawing::Size(100, 28);
			this->txt_BuscarID->TabIndex = 26;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(6, 50);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(100, 21);
			this->label12->TabIndex = 26;
			this->label12->Text = L"Ingrese ID:";
			// 
			// txt_ListaPoligonos
			// 
			this->txt_ListaPoligonos->Location = System::Drawing::Point(18, 36);
			this->txt_ListaPoligonos->Multiline = true;
			this->txt_ListaPoligonos->Name = L"txt_ListaPoligonos";
			this->txt_ListaPoligonos->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txt_ListaPoligonos->Size = System::Drawing::Size(638, 141);
			this->txt_ListaPoligonos->TabIndex = 8;
			this->txt_ListaPoligonos->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// GBlist
			// 
			this->GBlist->Controls->Add(this->button3);
			this->GBlist->Controls->Add(this->txt_ListaPoligonos);
			this->GBlist->Font = (gcnew System::Drawing::Font(L"Century", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GBlist->Location = System::Drawing::Point(57, 494);
			this->GBlist->Name = L"GBlist";
			this->GBlist->Size = System::Drawing::Size(696, 218);
			this->GBlist->TabIndex = 27;
			this->GBlist->TabStop = false;
			this->GBlist->Text = L"Lista de Poligonos:";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(600, 178);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(90, 32);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Mostrar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->lbl_Color);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->lbl_Area);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->lbl_Perimetro);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->lbl_TipoPoligono);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->lbl_IDPoligono);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Century", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(773, 328);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(257, 384);
			this->groupBox1->TabIndex = 27;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Poligono Buscado:";
			// 
			// lbl_Color
			// 
			this->lbl_Color->AutoSize = true;
			this->lbl_Color->Location = System::Drawing::Point(118, 214);
			this->lbl_Color->Name = L"lbl_Color";
			this->lbl_Color->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->lbl_Color->Size = System::Drawing::Size(0, 21);
			this->lbl_Color->TabIndex = 35;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 214);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(58, 21);
			this->label7->TabIndex = 34;
			this->label7->Text = L"Color:";
			// 
			// lbl_Area
			// 
			this->lbl_Area->AutoSize = true;
			this->lbl_Area->Location = System::Drawing::Point(118, 175);
			this->lbl_Area->Name = L"lbl_Area";
			this->lbl_Area->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->lbl_Area->Size = System::Drawing::Size(0, 21);
			this->lbl_Area->TabIndex = 33;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 175);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(53, 21);
			this->label6->TabIndex = 32;
			this->label6->Text = L"Area:";
			// 
			// lbl_Perimetro
			// 
			this->lbl_Perimetro->AutoSize = true;
			this->lbl_Perimetro->Location = System::Drawing::Point(118, 135);
			this->lbl_Perimetro->Name = L"lbl_Perimetro";
			this->lbl_Perimetro->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->lbl_Perimetro->Size = System::Drawing::Size(0, 21);
			this->lbl_Perimetro->TabIndex = 31;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 135);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(96, 21);
			this->label5->TabIndex = 30;
			this->label5->Text = L"Perimetro:";
			// 
			// lbl_TipoPoligono
			// 
			this->lbl_TipoPoligono->AutoSize = true;
			this->lbl_TipoPoligono->Location = System::Drawing::Point(118, 90);
			this->lbl_TipoPoligono->Name = L"lbl_TipoPoligono";
			this->lbl_TipoPoligono->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->lbl_TipoPoligono->Size = System::Drawing::Size(0, 21);
			this->lbl_TipoPoligono->TabIndex = 29;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 90);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 21);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Tipo:";
			// 
			// lbl_IDPoligono
			// 
			this->lbl_IDPoligono->AutoSize = true;
			this->lbl_IDPoligono->Location = System::Drawing::Point(110, 50);
			this->lbl_IDPoligono->Name = L"lbl_IDPoligono";
			this->lbl_IDPoligono->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->lbl_IDPoligono->Size = System::Drawing::Size(0, 21);
			this->lbl_IDPoligono->TabIndex = 27;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 21);
			this->label2->TabIndex = 26;
			this->label2->Text = L"ID:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(1111, 724);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->GBlist);
			this->Controls->Add(this->GBbuscar);
			this->Controls->Add(this->gbAgregar);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Poligonos";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->gbAgregar->ResumeLayout(false);
			this->gbAgregar->PerformLayout();
			this->GBbuscar->ResumeLayout(false);
			this->GBbuscar->PerformLayout();
			this->GBlist->ResumeLayout(false);
			this->GBlist->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {


	int lad1, lad2, lad3, lad4, lad5, lad6, lad7, lad8;
	int area, perimetro;
	std::string color;

	try
	{
		if (Rbtn_Triangulo->Checked == true && Cbox_Color->Text != "")
		{
			int areatriangulo, perimetrotriangulo, basetri, altruratri;

			lad1 = Convert::ToInt32(txt_Lado1->Text);
			lad2 = Convert::ToInt32(txt_Lado2->Text);
			lad3 = Convert::ToInt32(txt_Lado3->Text);
			basetri = Convert::ToInt32(txt_Base->Text);
			altruratri = Convert::ToInt32(txt_Altura->Text);
			perimetrotriangulo = lad1 + lad2 + lad3;
			areatriangulo = (basetri * altruratri) / 2;

			for (size_t i = 0; i < Cbox_Color->Text->Length; i++)
			{
				color += Cbox_Color->Text[i];
			}

			poligonos.agregar(perimetrotriangulo, areatriangulo, color, "Triangulo");
		}
		else if (Rbtn_Cuadrado->Checked == true && Cbox_Color->Text != "")
		{
			lad1 = Convert::ToInt32(txt_Lado1->Text);
			lad2 = Convert::ToInt32(txt_Lado2->Text);
			lad3 = Convert::ToInt32(txt_Lado3->Text);
			lad4 = Convert::ToInt32(txt_Lado4->Text);
			perimetro = lad1 + lad2 + lad3 + lad4;
			area = lad1 * lad1;

			for (size_t i = 0; i < Cbox_Color->Text->Length; i++)
			{
				color += Cbox_Color->Text[i];
			}

			poligonos.agregar(perimetro, area, color, "Cuadrado");
		}
		else if (Rbtn_Rectangulo->Checked == true && Cbox_Color->Text != "")
		{

			lad1 = Convert::ToInt32(txt_Lado1->Text);
			lad2 = Convert::ToInt32(txt_Lado2->Text);
			lad3 = Convert::ToInt32(txt_Lado3->Text);
			lad4 = Convert::ToInt32(txt_Lado4->Text);
			int base = Convert::ToInt32(txt_Base->Text);
			int altura = Convert::ToInt32(txt_Altura->Text);
			perimetro = lad1 + lad2 + lad3 + lad4;
			area = base * altura;

			for (size_t i = 0; i < Cbox_Color->Text->Length; i++)
			{
				color += Cbox_Color->Text[i];
			}

			poligonos.agregar(perimetro, area, color, "Rectangulo");
		}
		else if (Rbtn_Pentagono->Checked == true && Cbox_Color->Text != "")
		{

			lad1 = Convert::ToInt32(txt_Lado1->Text);
			lad2 = Convert::ToInt32(txt_Lado2->Text);
			lad3 = Convert::ToInt32(txt_Lado3->Text);
			lad4 = Convert::ToInt32(txt_Lado4->Text);
			lad5 = Convert::ToInt32(txt_Lado5->Text);
			int apotema = Convert::ToInt32(txt_Apotema->Text);
			perimetro = lad1 + lad2 + lad3 + lad4 + lad5;
			area = (perimetro * apotema) / 2;

			for (size_t i = 0; i < Cbox_Color->Text->Length; i++)
			{
				color += Cbox_Color->Text[i];
			}

			poligonos.agregar(perimetro, area, color, "Pentagono");
		}
		else if (Rbtn_Octagono->Checked == true && Cbox_Color->Text != "")
		{

			lad1 = Convert::ToInt32(txt_Lado1->Text);
			lad2 = Convert::ToInt32(txt_Lado2->Text);
			lad3 = Convert::ToInt32(txt_Lado3->Text);
			lad4 = Convert::ToInt32(txt_Lado4->Text);
			lad5 = Convert::ToInt32(txt_Lado5->Text);
			lad6 = Convert::ToInt32(txt_Lado6->Text);
			lad7 = Convert::ToInt32(txt_Lado7->Text);
			lad8 = Convert::ToInt32(txt_Lado8->Text);
			int apotema = Convert::ToInt32(txt_Apotema->Text);
			perimetro = lad1 + lad2 + lad3 + lad4 + lad4 + lad5 + lad6 + lad7 + lad8;
			area = (perimetro * apotema) / 2;

			for (size_t i = 0; i < Cbox_Color->Text->Length; i++)
			{
				color += Cbox_Color->Text[i];
			}

			poligonos.agregar(perimetro, area, color, "Octagono");
		}
		else
		{
			MessageBox::Show("Ingrese los datos correspondientes he ingrese solo numeros enteros");
		}

		txt_Lado1->Text = ""; txt_Lado2->Text = "";	txt_Lado3->Text = "";txt_Lado4->Text = "";txt_Lado5->Text = "";txt_Lado6->Text = "";
		txt_Lado7->Text = "";txt_Lado8->Text = "";txt_Base->Text = "";txt_Altura->Text = "";txt_Apotema->Text = "";Cbox_Color->Text = "";
		Cbox_Color->SelectedText == "";
	}
	catch (...)
	{
		MessageBox::Show("Ingrese los datos correspondientes he ingrese solo numeros enteros");
		txt_Lado1->Text = ""; txt_Lado2->Text = "";	txt_Lado3->Text = "";txt_Lado4->Text = "";txt_Lado5->Text = "";txt_Lado6->Text = "";
		txt_Lado7->Text = "";txt_Lado8->Text = "";txt_Base->Text = "";txt_Altura->Text = "";txt_Apotema->Text = "";Cbox_Color->Text = "";
		Cbox_Color->SelectedText == "";
	}



}
private: System::Void Rbtn_Triangulo_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	if (Rbtn_Triangulo->Checked == true)
	{
		txt_Lado1->Visible = true;
		txt_Lado2->Visible = true;
		txt_Lado3->Visible = true;
		txt_Altura->Visible = true;
		txt_Base->Visible = true;
		lbl_Lado1->Visible = true;
		lbl_Lado2->Visible = true;
		lbl_Lado3->Visible = true;
		lbl_Altura->Visible = true;
		lbl_Base->Visible = true;
		lbl_colorpedido->Visible = true;
		Cbox_Color->Visible = true;
	}
	else
	{
		txt_Lado1->Visible = false;
		txt_Lado2->Visible = false;
		txt_Lado3->Visible = false;
		txt_Altura->Visible = false;
		txt_Base->Visible = false;
		lbl_Lado1->Visible = false;
		lbl_Lado2->Visible = false;
		lbl_Lado3->Visible = false;
		lbl_Altura->Visible = false;
		lbl_Base->Visible = false;
		lbl_colorpedido->Visible = false;
		Cbox_Color->Visible = false;
	}
}
private: System::Void Rbtn_Cuadrado_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	if (Rbtn_Cuadrado->Checked == true)
	{
		txt_Lado1->Visible = true;
		txt_Lado2->Visible = true;
		txt_Lado3->Visible = true;
		txt_Lado4->Visible = true;
		lbl_Lado1->Visible = true;
		lbl_Lado2->Visible = true;
		lbl_Lado3->Visible = true;
		lbl_Lado4->Visible = true;
		lbl_Altura->Visible = true;
		lbl_Base->Visible = true;
		lbl_colorpedido->Visible = true;
		Cbox_Color->Visible = true;

	}
	else
	{
		txt_Lado1->Visible = false;
		txt_Lado2->Visible = false;
		lbl_Lado1->Visible = false;
		lbl_Lado2->Visible = false;
		txt_Lado3->Visible = false;
		txt_Lado4->Visible = false;
		lbl_Lado3->Visible = false;
		lbl_Lado4->Visible = false;
		lbl_colorpedido->Visible = false;
		Cbox_Color->Visible = false;
	}
}
private: System::Void Rbtn_Rectangulo_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	if (Rbtn_Rectangulo->Checked == true)
	{
		txt_Lado1->Visible = true;
		txt_Lado2->Visible = true;
		lbl_Lado1->Visible = true;
		lbl_Lado2->Visible = true;
		txt_Lado3->Visible = true;
		txt_Lado4->Visible = true;
		lbl_Lado3->Visible = true;
		lbl_Lado4->Visible = true;
		lbl_Base->Visible = true;
		lbl_Altura->Visible = true;
		txt_Base->Visible = true;
		txt_Altura->Visible = true;
		lbl_colorpedido->Visible = true;
		Cbox_Color->Visible = true;
	}
	else
	{
		txt_Lado1->Visible = false;
		txt_Lado2->Visible = false;
		lbl_Lado1->Visible = false;
		lbl_Lado2->Visible = false;
		txt_Lado3->Visible = false;
		txt_Lado4->Visible = false;
		lbl_Lado3->Visible = false;
		lbl_Lado4->Visible = false;
		lbl_Base->Visible = false;
		lbl_Altura->Visible = false;
		txt_Base->Visible = false;
		txt_Altura->Visible = false;
		lbl_colorpedido->Visible = false;
		Cbox_Color->Visible = false;
	}
}
private: System::Void Rbtn_Pentagono_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	if (Rbtn_Pentagono->Checked == true)
	{
		txt_Lado1->Visible = true;
		txt_Lado2->Visible = true;
		txt_Lado3->Visible = true;
		txt_Lado4->Visible = true;
		txt_Lado5->Visible = true;
		txt_Apotema->Visible = true;
		lbl_Lado1->Visible = true;
		lbl_Lado2->Visible = true;
		lbl_Lado3->Visible = true;
		lbl_Lado4->Visible = true;
		lbl_Lado5->Visible = true;
		lbl_Apotema->Visible = true;
		lbl_colorpedido->Visible = true;
		Cbox_Color->Visible = true;
	}
	else
	{
		txt_Lado1->Visible = false;
		txt_Lado2->Visible = false;
		txt_Lado3->Visible = false;
		txt_Lado4->Visible = false;
		txt_Lado5->Visible = false;
		txt_Apotema->Visible = false;
		lbl_Lado1->Visible = false;
		lbl_Lado2->Visible = false;
		lbl_Lado3->Visible = false;
		lbl_Lado4->Visible = false;
		lbl_Lado5->Visible = false;
		lbl_Apotema->Visible = false;
		lbl_colorpedido->Visible = false;
		Cbox_Color->Visible = false;
	}

}
private: System::Void Rbtn_Octagono_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	if (Rbtn_Octagono->Checked == true)
	{
		txt_Lado1->Visible = true;
		txt_Lado2->Visible = true;
		txt_Lado3->Visible = true;
		txt_Lado4->Visible = true;
		txt_Lado5->Visible = true;
		txt_Lado6->Visible = true;
		txt_Lado7->Visible = true;
		txt_Lado8->Visible = true;
		txt_Apotema->Visible = true;
		lbl_Lado1->Visible = true;
		lbl_Lado2->Visible = true;
		lbl_Lado3->Visible = true;
		lbl_Lado4->Visible = true;
		lbl_Lado5->Visible = true;
		lbl_Lado6->Visible = true;
		lbl_Lado7->Visible = true;
		lbl_Lado8->Visible = true;
		lbl_Apotema->Visible = true;
		lbl_colorpedido->Visible = true;
		Cbox_Color->Visible = true;
	}
	else
	{
		txt_Lado1->Visible = false;
		txt_Lado2->Visible = false;
		txt_Lado3->Visible = false;
		txt_Lado4->Visible = false;
		txt_Lado5->Visible = false;
		txt_Lado6->Visible = false;
		txt_Lado7->Visible = false;
		txt_Lado8->Visible = false;
		txt_Apotema->Visible = false;
		lbl_Lado1->Visible = false;
		lbl_Lado2->Visible = false;
		lbl_Lado3->Visible = false;
		lbl_Lado4->Visible = false;
		lbl_Lado5->Visible = false;
		lbl_Lado6->Visible = false;
		lbl_Lado7->Visible = false;
		lbl_Lado8->Visible = false;
		lbl_Apotema->Visible = false;
		lbl_colorpedido->Visible = false;
		Cbox_Color->Visible = false;
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	



	int Codigo, posicion = 0;
	Codigo = Convert::ToInt32(txt_BuscarID->Text);

	std::string Buscar = "";
	Buscar = poligonos.buscar(Codigo);


	if (Buscar != "NO")
	{
		std::string ID = "", Tipo = "", Area = "", Perimetro = "", Color = "";

		for (size_t i = 0; i < Buscar.length(); i++)
		{
			//Validacion de espacio al inicio
			if (Buscar[i] == ',')
			{
				posicion++;
			}
			else if (posicion == 0)
			{
				ID += Buscar[i];
			}
			else if (posicion == 1)
			{
				Tipo += Buscar[i];
			}
			else if (posicion == 2)
			{
				Perimetro += Buscar[i];
			}
			else if (posicion == 3)
			{
				Area += Buscar[i];
			}
			else if (posicion == 4)
			{
				Color += Buscar[i];
			}
		}
		lbl_IDPoligono->Text = gcnew String(ID.c_str());
		lbl_TipoPoligono->Text = gcnew String(Tipo.c_str());
		lbl_Area->Text = gcnew String(Area.c_str());
		lbl_Perimetro->Text = gcnew String(Perimetro.c_str());
		lbl_Color->Text = gcnew String(Color.c_str());

		if (Color == "Celeste")
		{
			groupBox1->BackColor = System::Drawing::Color::Cyan;
		}
		if (Color == "Rojo")
		{
			groupBox1->BackColor = System::Drawing::Color::Red;
		}
		if (Color == "Amarillo")
		{
			groupBox1->BackColor = System::Drawing::Color::LightYellow;
		}
		if (Color == "Verde")
		{
			groupBox1->BackColor = System::Drawing::Color::GreenYellow;
		}
		if (Color == "Anaranjado")
		{
			groupBox1->BackColor = System::Drawing::Color::Orange;
		}
		if (Color == "Rosado")
		{
			groupBox1->BackColor = System::Drawing::Color::DeepPink;
		}
		if (Color == "Blanco")
		{
			groupBox1->BackColor = System::Drawing::Color::White;
		}
	}
	else
	{
		MessageBox::Show("No se encintro ningun poligono con el ID indicado");
		txt_BuscarID->Text = "";
	}
	txt_BuscarID->Text = "";


}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	

	txt_ListaPoligonos->Text = gcnew String(poligonos.mostrar().c_str());
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	txt_Lado1->Visible = false;
	txt_Lado2->Visible = false;
	txt_Lado3->Visible = false;
	txt_Lado4->Visible = false;
	txt_Lado5->Visible = false;
	txt_Lado6->Visible = false;
	txt_Lado7->Visible = false;
	txt_Lado8->Visible = false;
	txt_Apotema->Visible = false;
	lbl_Lado1->Visible = false;
	lbl_Lado2->Visible = false;
	lbl_Lado3->Visible = false;
	lbl_Lado4->Visible = false;
	lbl_Lado5->Visible = false;
	lbl_Lado6->Visible = false;
	lbl_Lado7->Visible = false;
	lbl_Lado8->Visible = false;
	lbl_Apotema->Visible = false;
	lbl_colorpedido->Visible = false;
	Cbox_Color->Visible = false;

}
};
}
