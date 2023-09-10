#pragma once
#include "DB.h"
#include "Actualizar.h"
#include "Borrar.h"
#include "consultar.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->data = gcnew DB();
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ data_grid;
	protected:

	private: System::Windows::Forms::Button^ boton_guardar;
	private: System::Windows::Forms::Button^ boton_listar;
	private: System::Windows::Forms::Button^ boton_limpiar;
	protected:



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_vin;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txt_marca;
	private: System::Windows::Forms::TextBox^ txt_modelo;
	private: System::Windows::Forms::TextBox^ txt_fecha;
	private: System::Windows::Forms::TextBox^ txt_precio;

	private: DB^ data;
	private: System::Windows::Forms::Button^ boton_modifica;

	private: System::Windows::Forms::Button^ boton_borro;
	private: System::Windows::Forms::Button^ boton_verificar;





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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->data_grid = (gcnew System::Windows::Forms::DataGridView());
			this->boton_guardar = (gcnew System::Windows::Forms::Button());
			this->boton_listar = (gcnew System::Windows::Forms::Button());
			this->boton_limpiar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_vin = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_marca = (gcnew System::Windows::Forms::TextBox());
			this->txt_modelo = (gcnew System::Windows::Forms::TextBox());
			this->txt_fecha = (gcnew System::Windows::Forms::TextBox());
			this->txt_precio = (gcnew System::Windows::Forms::TextBox());
			this->boton_modifica = (gcnew System::Windows::Forms::Button());
			this->boton_borro = (gcnew System::Windows::Forms::Button());
			this->boton_verificar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid))->BeginInit();
			this->SuspendLayout();
			// 
			// data_grid
			// 
			this->data_grid->AllowUserToAddRows = false;
			this->data_grid->AllowUserToDeleteRows = false;
			this->data_grid->AllowUserToResizeColumns = false;
			this->data_grid->AllowUserToResizeRows = false;
			this->data_grid->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->data_grid->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->data_grid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->data_grid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->data_grid->DefaultCellStyle = dataGridViewCellStyle1;
			this->data_grid->Location = System::Drawing::Point(318, 50);
			this->data_grid->Margin = System::Windows::Forms::Padding(4);
			this->data_grid->Name = L"data_grid";
			this->data_grid->ReadOnly = true;
			this->data_grid->RowHeadersVisible = false;
			this->data_grid->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->data_grid->Size = System::Drawing::Size(816, 369);
			this->data_grid->TabIndex = 0;
			this->data_grid->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
			// 
			// boton_guardar
			// 
			this->boton_guardar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boton_guardar->Location = System::Drawing::Point(176, 374);
			this->boton_guardar->Margin = System::Windows::Forms::Padding(4);
			this->boton_guardar->Name = L"boton_guardar";
			this->boton_guardar->Size = System::Drawing::Size(88, 28);
			this->boton_guardar->TabIndex = 1;
			this->boton_guardar->Text = L"Guardar";
			this->boton_guardar->UseVisualStyleBackColor = true;
			this->boton_guardar->Click += gcnew System::EventHandler(this, &Form1::boton_guardar_Click);
			// 
			// boton_listar
			// 
			this->boton_listar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boton_listar->Location = System::Drawing::Point(448, 15);
			this->boton_listar->Margin = System::Windows::Forms::Padding(4);
			this->boton_listar->Name = L"boton_listar";
			this->boton_listar->Size = System::Drawing::Size(88, 28);
			this->boton_listar->TabIndex = 2;
			this->boton_listar->Text = L"Listar";
			this->boton_listar->UseVisualStyleBackColor = true;
			this->boton_listar->Click += gcnew System::EventHandler(this, &Form1::boton_listar_Click);
			// 
			// boton_limpiar
			// 
			this->boton_limpiar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boton_limpiar->Location = System::Drawing::Point(318, 15);
			this->boton_limpiar->Margin = System::Windows::Forms::Padding(4);
			this->boton_limpiar->Name = L"boton_limpiar";
			this->boton_limpiar->Size = System::Drawing::Size(88, 28);
			this->boton_limpiar->TabIndex = 3;
			this->boton_limpiar->Text = L"Limpiar";
			this->boton_limpiar->UseVisualStyleBackColor = true;
			this->boton_limpiar->Click += gcnew System::EventHandler(this, &Form1::boton_limpiar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(28, 71);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 21);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Vin";
			// 
			// txt_vin
			// 
			this->txt_vin->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_vin->Location = System::Drawing::Point(134, 71);
			this->txt_vin->Margin = System::Windows::Forms::Padding(4);
			this->txt_vin->Name = L"txt_vin";
			this->txt_vin->Size = System::Drawing::Size(177, 23);
			this->txt_vin->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(28, 116);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 21);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Marca";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(28, 164);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 21);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Modelo";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(28, 212);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 21);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Fecha fab";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(28, 292);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(57, 21);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Precio";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(28, 246);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(78, 16);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Año/Mes/Día";
			// 
			// txt_marca
			// 
			this->txt_marca->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_marca->Location = System::Drawing::Point(134, 116);
			this->txt_marca->Margin = System::Windows::Forms::Padding(4);
			this->txt_marca->Name = L"txt_marca";
			this->txt_marca->Size = System::Drawing::Size(177, 23);
			this->txt_marca->TabIndex = 11;
			// 
			// txt_modelo
			// 
			this->txt_modelo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_modelo->Location = System::Drawing::Point(134, 164);
			this->txt_modelo->Margin = System::Windows::Forms::Padding(4);
			this->txt_modelo->Name = L"txt_modelo";
			this->txt_modelo->Size = System::Drawing::Size(177, 23);
			this->txt_modelo->TabIndex = 12;
			// 
			// txt_fecha
			// 
			this->txt_fecha->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_fecha->Location = System::Drawing::Point(134, 212);
			this->txt_fecha->Margin = System::Windows::Forms::Padding(4);
			this->txt_fecha->Name = L"txt_fecha";
			this->txt_fecha->Size = System::Drawing::Size(177, 23);
			this->txt_fecha->TabIndex = 13;
			// 
			// txt_precio
			// 
			this->txt_precio->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_precio->Location = System::Drawing::Point(134, 295);
			this->txt_precio->Margin = System::Windows::Forms::Padding(4);
			this->txt_precio->Name = L"txt_precio";
			this->txt_precio->Size = System::Drawing::Size(177, 23);
			this->txt_precio->TabIndex = 14;
			// 
			// boton_modifica
			// 
			this->boton_modifica->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boton_modifica->Location = System::Drawing::Point(580, 15);
			this->boton_modifica->Margin = System::Windows::Forms::Padding(4);
			this->boton_modifica->Name = L"boton_modifica";
			this->boton_modifica->Size = System::Drawing::Size(91, 28);
			this->boton_modifica->TabIndex = 15;
			this->boton_modifica->Text = L"Modificar";
			this->boton_modifica->UseVisualStyleBackColor = true;
			this->boton_modifica->Click += gcnew System::EventHandler(this, &Form1::boton_modifica_Click);
			// 
			// boton_borro
			// 
			this->boton_borro->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boton_borro->Location = System::Drawing::Point(833, 15);
			this->boton_borro->Margin = System::Windows::Forms::Padding(4);
			this->boton_borro->Name = L"boton_borro";
			this->boton_borro->Size = System::Drawing::Size(88, 28);
			this->boton_borro->TabIndex = 17;
			this->boton_borro->Text = L"Borrar";
			this->boton_borro->UseVisualStyleBackColor = true;
			this->boton_borro->Click += gcnew System::EventHandler(this, &Form1::boton_borro_Click);
			// 
			// boton_verificar
			// 
			this->boton_verificar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boton_verificar->Location = System::Drawing::Point(707, 15);
			this->boton_verificar->Margin = System::Windows::Forms::Padding(4);
			this->boton_verificar->Name = L"boton_verificar";
			this->boton_verificar->Size = System::Drawing::Size(88, 28);
			this->boton_verificar->TabIndex = 18;
			this->boton_verificar->Text = L"Consulta";
			this->boton_verificar->UseVisualStyleBackColor = true;
			this->boton_verificar->Click += gcnew System::EventHandler(this, &Form1::boton_verificar_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(1148, 447);
			this->Controls->Add(this->boton_verificar);
			this->Controls->Add(this->boton_borro);
			this->Controls->Add(this->boton_modifica);
			this->Controls->Add(this->txt_precio);
			this->Controls->Add(this->txt_fecha);
			this->Controls->Add(this->txt_modelo);
			this->Controls->Add(this->txt_marca);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_vin);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->boton_limpiar);
			this->Controls->Add(this->boton_listar);
			this->Controls->Add(this->boton_guardar);
			this->Controls->Add(this->data_grid);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form1";
			this->Text = L"Vehiculo";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
}
	public: void Consulta()
	{
		this->data->AbrirConexion();
		this->data_grid->DataSource = this->data->getData();
		this->data->CerrarConexion();
	}


private: System::Void boton_listar_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Consulta();
}
private: System::Void boton_limpiar_Click(System::Object^ sender, System::EventArgs^ e) {

	this->data_grid->Columns->Clear();
}
private: System::Void boton_guardar_Click(System::Object^ sender, System::EventArgs^ e) {

	this->data->AbrirConexion();
	this->data->Insertar(this->txt_vin->Text, this->txt_marca->Text, this->txt_modelo->Text, this->txt_fecha->Text, this->txt_precio->Text);
	this->data->CerrarConexion();
	this->Consulta();
}

private: System::Void boton_modifica_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ vin = Convert::ToString(data_grid->SelectedRows[0]->Cells[0]->Value);
	String^ marca = Convert::ToString(data_grid->SelectedRows[0]->Cells[1]->Value);
	String^ modelo = Convert::ToString(data_grid->SelectedRows[0]->Cells[2]->Value);
	String^ fecha_fab = Convert::ToString(data_grid->SelectedRows[0]->Cells[3]->Value);
	String^ precio = Convert::ToString(data_grid->SelectedRows[0]->Cells[4]->Value);

	LAB::Actualizar^ form = gcnew LAB::Actualizar();
	
	/*
	form->txt_vin->Text = vin;
	form->txt_marca->Text = marca;
	form->txt_modelo->Text = modelo;
	form->txt_fecha->Text = fecha_fab;
	form->txt_precio->Text = precio;
	*/

	form->ShowDialog();
	DB^ data = gcnew DB();
	data->AbrirConexion();
	data->Modificar(form->txt_vin->Text, form->txt_marca->Text, form->txt_modelo->Text, form->txt_fecha->Text, form->txt_precio->Text, vin);
	data->CerrarConexion();
	this->Consulta();
	

}

private: System::Void boton_borro_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ vin = Convert::ToString(data_grid->SelectedRows[0]->Cells[0]->Value);
	String^ marca = Convert::ToString(data_grid->SelectedRows[0]->Cells[1]->Value);
	String^ modelo = Convert::ToString(data_grid->SelectedRows[0]->Cells[2]->Value);
	String^ fecha_fab = Convert::ToString(data_grid->SelectedRows[0]->Cells[3]->Value);
	String^ precio = Convert::ToString(data_grid->SelectedRows[0]->Cells[4]->Value);

	LAB::Borrar^ oform = gcnew LAB::Borrar();

	oform->ShowDialog();
	
	DB^ data = gcnew DB();
	data->AbrirConexion();
	data->Eliminar2(oform->txt_vin->Text);
	data->CerrarConexion();
	this->Consulta();
	
}
private: System::Void boton_verificar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ vin = Convert::ToString(data_grid->SelectedRows[0]->Cells[0]->Value);
	String^ marca = Convert::ToString(data_grid->SelectedRows[0]->Cells[1]->Value);
	String^ modelo = Convert::ToString(data_grid->SelectedRows[0]->Cells[2]->Value);
	String^ fecha_fab = Convert::ToString(data_grid->SelectedRows[0]->Cells[3]->Value);
	String^ precio = Convert::ToString(data_grid->SelectedRows[0]->Cells[4]->Value);

	LAB::consultar^ nform = gcnew LAB::consultar();
	nform->ShowDialog();
	DB^ data = gcnew DB();
	data->AbrirConexion();
	data->Consulto(nform->txt_vin->Text);
	this->data_grid->DataSource = this->data->Consulto(nform->txt_vin->Text);
	data->CerrarConexion();
}
};
}
