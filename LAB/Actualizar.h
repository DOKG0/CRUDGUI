#pragma once

namespace LAB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Actualizar
	/// </summary>
	public ref class Actualizar : public System::Windows::Forms::Form
	{
	public:
		Actualizar(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Actualizar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	public: System::Windows::Forms::TextBox^ txt_vin;
	public: System::Windows::Forms::TextBox^ txt_marca;
	public: System::Windows::Forms::TextBox^ txt_modelo;
	public: System::Windows::Forms::TextBox^ txt_fecha;
	public: System::Windows::Forms::TextBox^ txt_precio;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_vin = (gcnew System::Windows::Forms::TextBox());
			this->txt_marca = (gcnew System::Windows::Forms::TextBox());
			this->txt_modelo = (gcnew System::Windows::Forms::TextBox());
			this->txt_fecha = (gcnew System::Windows::Forms::TextBox());
			this->txt_precio = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Vin";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 97);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 21);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Marca";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 149);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 21);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Modelo";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 196);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 21);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Fecha fab";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 257);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(57, 21);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Precio";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(12, 217);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(78, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Año/Mes/Día";
			// 
			// txt_vin
			// 
			this->txt_vin->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_vin->Location = System::Drawing::Point(108, 45);
			this->txt_vin->Name = L"txt_vin";
			this->txt_vin->Size = System::Drawing::Size(163, 23);
			this->txt_vin->TabIndex = 6;
			// 
			// txt_marca
			// 
			this->txt_marca->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_marca->Location = System::Drawing::Point(108, 95);
			this->txt_marca->Name = L"txt_marca";
			this->txt_marca->Size = System::Drawing::Size(163, 23);
			this->txt_marca->TabIndex = 7;
			// 
			// txt_modelo
			// 
			this->txt_modelo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_modelo->Location = System::Drawing::Point(108, 150);
			this->txt_modelo->Name = L"txt_modelo";
			this->txt_modelo->Size = System::Drawing::Size(163, 23);
			this->txt_modelo->TabIndex = 8;
			// 
			// txt_fecha
			// 
			this->txt_fecha->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_fecha->Location = System::Drawing::Point(108, 196);
			this->txt_fecha->Name = L"txt_fecha";
			this->txt_fecha->Size = System::Drawing::Size(163, 23);
			this->txt_fecha->TabIndex = 9;
			this->txt_fecha->TextChanged += gcnew System::EventHandler(this, &Actualizar::txt_fecha_TextChanged);
			// 
			// txt_precio
			// 
			this->txt_precio->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_precio->Location = System::Drawing::Point(108, 255);
			this->txt_precio->Name = L"txt_precio";
			this->txt_precio->Size = System::Drawing::Size(163, 23);
			this->txt_precio->TabIndex = 10;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(108, 302);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Aceptar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Actualizar::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(196, 302);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Actualizar::button2_Click);
			// 
			// Actualizar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(329, 353);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txt_precio);
			this->Controls->Add(this->txt_fecha);
			this->Controls->Add(this->txt_modelo);
			this->Controls->Add(this->txt_marca);
			this->Controls->Add(this->txt_vin);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Actualizar";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Actualizar";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void txt_fecha_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show(L"Datos actualizados correctamente");
	this->Close();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
